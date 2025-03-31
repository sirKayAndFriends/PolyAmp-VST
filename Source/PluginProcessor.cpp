/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin processor.

    You will only need to change "process block" and "renderPlugin" functions
    for your own projects and then only if you don't need inputs or outputs
    (if you're making a MIDI plugin for example)

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "ParamIds.h"

//==============================================================================
PolyAmpProcessor::PolyAmpProcessor()
#ifndef JucePlugin_PreferredChannelConfigurations
     : AudioProcessor (BusesProperties()
                     #if ! JucePlugin_IsMidiEffect
                      #if ! JucePlugin_IsSynth
                       .withInput  ("Input",  juce::AudioChannelSet::stereo(), true)
                      #endif
                       .withOutput ("Output", juce::AudioChannelSet::stereo(), true)
                     #endif
                       )
#endif
{
}

PolyAmpProcessor::~PolyAmpProcessor()
{
}

//==============================================================================
const juce::String PolyAmpProcessor::getName() const
{
    return JucePlugin_Name;
}

bool PolyAmpProcessor::acceptsMidi() const
{
   #if JucePlugin_WantsMidiInput
    return true;
   #else
    return false;
   #endif
}

bool PolyAmpProcessor::producesMidi() const
{
   #if JucePlugin_ProducesMidiOutput
    return true;
   #else
    return false;
   #endif
}

bool PolyAmpProcessor::isMidiEffect() const
{
   #if JucePlugin_IsMidiEffect
    return true;
   #else
    return false;
   #endif
}

double PolyAmpProcessor::getTailLengthSeconds() const
{
    return 0.0;
}

int PolyAmpProcessor::getNumPrograms()
{
    return 1;   // NB: some hosts don't cope very well if you tell them there are 0 programs,
                // so this should be at least 1, even if you're not really implementing programs.
}

int PolyAmpProcessor::getCurrentProgram()
{
    return 0;
}

void PolyAmpProcessor::setCurrentProgram (int index)
{
}

const juce::String PolyAmpProcessor::getProgramName (int index)
{
    return {};
}

void PolyAmpProcessor::changeProgramName (int index, const juce::String& newName)
{
}

//==============================================================================
void PolyAmpProcessor::prepareToPlay (double sampleRate, int samplesPerBlock)
{
    context = hv_PolyAmp_new(sampleRate);
}

void PolyAmpProcessor::releaseResources()
{
    // When playback stops, you can use this as an opportunity to free up any
    // spare memory, etc.
}

#ifndef JucePlugin_PreferredChannelConfigurations
bool PolyAmpProcessor::isBusesLayoutSupported (const BusesLayout& layouts) const
{
  #if JucePlugin_IsMidiEffect
    juce::ignoreUnused (layouts);
    return true;
  #else
    // This is the place where you check if the layout is supported.
    // In this template code we only support mono or stereo.
    // Some plugin hosts, such as certain GarageBand versions, will only
    // load plugins that support stereo bus layouts.
    if (layouts.getMainOutputChannelSet() != juce::AudioChannelSet::mono()
     && layouts.getMainOutputChannelSet() != juce::AudioChannelSet::stereo())
        return false;

    // This checks if the input layout matches the output layout
   #if ! JucePlugin_IsSynth
    if (layouts.getMainOutputChannelSet() != layouts.getMainInputChannelSet())
        return false;
   #endif

    return true;
  #endif
}
#endif

void PolyAmpProcessor::processBlock (juce::AudioBuffer<float>& buffer, juce::MidiBuffer& midiMessages)
{
    juce::ScopedNoDenormals noDenormals;
    auto totalNumInputChannels  = getTotalNumInputChannels();
    auto totalNumOutputChannels = getTotalNumOutputChannels();

    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear(i, 0, buffer.getNumSamples());

    //get rid of this loop if you don't need inputs
    for (auto i = totalNumInputChannels; i < totalNumOutputChannels; ++i)
        buffer.clear (i, 0, buffer.getNumSamples());

    // Render Heavy Patch
    int bufferOffset = 0;
    int samplesLastSegment = buffer.getNumSamples() - bufferOffset;
    if (samplesLastSegment > 0) {
        renderPlugin(buffer, samplesLastSegment, bufferOffset);
    }
}

void PolyAmpProcessor::renderPlugin(juce::AudioBuffer<float>& buffer, int sampleCount, int bufferOffset)
{
    float* outputBuffers[2] = { nullptr, nullptr };
    outputBuffers[0] = buffer.getWritePointer(0) + bufferOffset;
    if (getTotalNumOutputChannels() > 1) {
        outputBuffers[1] = buffer.getWritePointer(1) + bufferOffset;
    }

    //Also get rid of this if you don't need inputs
    float* inputBuffers[2] = { nullptr, nullptr };
    inputBuffers[0] = buffer.getWritePointer(0) + bufferOffset;
    if (getTotalNumInputChannels() > 1) {
        inputBuffers[1] = buffer.getWritePointer(1) + bufferOffset;
    }

    //tells the Heavy code to get to work. 
    //replace inputBuffers with NULL if you have no inputs
    hv_process(context, inputBuffers, outputBuffers, buffer.getNumSamples());
}

//this guy sends GUI data to the heavy code
void PolyAmpProcessor::sendFloatToPlugin(hv_uint32_t receiverHash, float pitch) {
    if (context) hv_sendFloatToReceiver(context, receiverHash, pitch);
}

//==============================================================================
bool PolyAmpProcessor::hasEditor() const
{
    return true;
}

//selects your GUI editor
juce::AudioProcessorEditor* PolyAmpProcessor::createEditor()
{
    return new PolyAmpProcessorEditor (*this);
}

//==============================================================================
void PolyAmpProcessor::getStateInformation (juce::MemoryBlock& destData)
{
    // You should use this method to store your parameters in the memory block.
    // You could do that either as raw data, or use the XML or ValueTree classes
    // as intermediaries to make it easy to save and load complex data.
}

void PolyAmpProcessor::setStateInformation (const void* data, int sizeInBytes)
{
    // You should use this method to restore your parameters from this memory block,
    // whose contents will have been created by the getStateInformation() call.
}

//==============================================================================
// This creates new instances of the plugin..
juce::AudioProcessor* JUCE_CALLTYPE createPluginFilter()
{
    return new PolyAmpProcessor();
}
