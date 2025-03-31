/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
PolyAmpProcessorEditor::PolyAmpProcessorEditor (PolyAmpProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{

    labelText =
    {
        "Bass Cut",
        "Peak",
        "Boost",
        "Bass",
        "Mid",
        "Voice",
        "Treble",
        "Gain",
        "Level",
        "Cabinet"
    };

    setSize(1000, 300);

    margin = 10.0f;
    width = (getWidth() - margin * 6.0f) / 7.0f;
    height = getHeight() - (margin * 2.0f);
    numPanels = 5;
    buttonWidth = width / 3.0f;
    buttonHeight = width / 3.0f;
    knobWidth = width / 1.5f;
    knobHeight = width / 1.5f;

    ///////////////////////PANELS

    panelPositions = {
         { margin, margin, width, height },
         { (margin * 2.0f) + width, margin, width, height },
         { (margin * 3.0f) + width * 2.0f, margin, width * 3.0f, height },
         { (margin * 4.0f) + width * 5.0f, margin, width, height },
         { (margin * 5.0f) + width * 6.0f, margin, width, height }
    };

    knobX =
    {
        panelPositions[0][0] + (width / 2.0f) - knobWidth / 2.0f,
        panelPositions[1][0] + (width / 2.0f) - knobWidth / 2.0f,
        panelPositions[2][0] + ((width * 3.0f) / 4.0f) - knobWidth / 1.5f,
        panelPositions[2][0] + (width * 3.0f) / 2.0f - (knobWidth / 2.0f),
        (panelPositions[2][0] + (width * 3.0f)) - (knobWidth * 1.333f) - margin,
        panelPositions[3][0] + (width / 2.0f) - knobWidth / 2.0f,
        panelPositions[4][0] + (width / 2.0f) - knobWidth / 2.0f,
    };

    knobY =
    {
        (height / 3.0f) - knobHeight / 2.0f,
        height - (height / 4.0f) - knobHeight / 2.0f
    };

    knobData =
    {
        { knobX[0], knobY[0], knobWidth, knobHeight },//bass cut
        { knobX[0], knobY[1], knobWidth, knobHeight },//peak
        { knobX[1], knobY[0], knobWidth, knobHeight },//boost
        { knobX[2], knobY[0], knobWidth, knobHeight },//bass
        { knobX[3], knobY[0], knobWidth, knobHeight },//mid
        { knobX[3], knobY[1], knobWidth, knobHeight },//voice
        { knobX[4], knobY[0], knobWidth, knobHeight },//treble
        { knobX[5], knobY[0], knobWidth, knobHeight },//gain
        { knobX[6], knobY[0], knobWidth, knobHeight },//level
        { knobX[6], knobY[1], knobWidth, knobHeight } //cab
    };

    buttonPos =
    {
        {panelPositions[3][0] + (width / 2.0f) - (buttonWidth / 2.0f), knobY[1]},
        {panelPositions[3][0] + (width / 2.0f) - (buttonWidth / 2.0f), knobY[1] + buttonHeight}
    };

    panelCols = {
        { PluginVibes::skColours::skBarleyGreen, PluginVibes::skColours::skPalePurple},
        { PluginVibes::skColours::skPeach, PluginVibes::skColours::skBerryPink },
        { PluginVibes::skColours::skDuckEgg, PluginVibes::skColours::skPrincessPink },
        { PluginVibes::skColours::skMintGreen, PluginVibes::skColours::skLightBlue },
        { PluginVibes::skColours::skStrawbYog, PluginVibes::skColours::skDuckEgg }
    };

    setLookAndFeel(&pluginVibes);

    for (int i = 0; i < allKnobs.size(); i++) {
        allKnobs[i]->setSliderStyle(juce::Slider::SliderStyle::RotaryHorizontalVerticalDrag);
        allKnobs[i]->setTextBoxStyle(juce::Slider::NoTextBox, false, 0, 0);
        allKnobs[i]->setRange(0.0, 1.0, 0.01);
        allKnobs[i]->setValue(0.5);
        allKnobs[i]->addListener(this);
        addAndMakeVisible(allKnobs[i]);
    }

    for (int i = 0; i < allButtons.size(); i++)
    {
        allButtons[i]->setClickingTogglesState(true);
        allButtons[i]->setRadioGroupId(chanButtons);
        allButtons[i]->setColour(juce::TextButton::ColourIds::buttonOnColourId, juce::Colour(PluginVibes::skColours::skDaisyYellow));
        allButtons[i]->setColour(juce::TextButton::ColourIds::buttonColourId, juce::Colour(PluginVibes::skColours::skCream));
        allButtons[i]->setColour(juce::ComboBox::outlineColourId, juce::Colour(pluginVibes.skClear));
        allButtons[i]->setColour(juce::TextButton::ColourIds::textColourOffId, juce::Colours::black);
        allButtons[i]->setColour(juce::TextButton::ColourIds::textColourOnId, juce::Colours::black);
        allButtons[i]->addListener(this);
        addAndMakeVisible(allButtons[i]);
    }

    loChan.onClick = [this] {updateToggleState(&loChan, "lo");};
    hiChan.onClick = [this] {updateToggleState(&hiChan, "hi");};
    loChan.setToggleState(true, false);

    addAndMakeVisible(peakLabel);
    peakLabel.setText("400", juce::dontSendNotification);
    peakLabel.setColour(juce::Label::textColourId, juce::Colour(juce::Colours::black));
    peakLabel.setColour(juce::Label::backgroundColourId, juce::Colour(PluginVibes::skColours::skClear));
    peakLabel.setFont(pluginVibes.getPuginFont().boldened().withHeight(24.0f));
    peakLabel.setJustificationType(juce::Justification::centred);
   

    addAndMakeVisible(voiceLabel);
    voiceLabel.setText("400", juce::dontSendNotification);
    voiceLabel.setColour(juce::Label::textColourId, juce::Colour(juce::Colours::black));
    voiceLabel.setColour(juce::Label::backgroundColourId, juce::Colour(PluginVibes::skColours::skClear));
    voiceLabel.setFont(pluginVibes.getPuginFont().boldened().withHeight(24.0f));
    voiceLabel.setJustificationType(juce::Justification::centred);
}

PolyAmpProcessorEditor::~PolyAmpProcessorEditor()
{
    setLookAndFeel(nullptr);
}

//==============================================================================
void PolyAmpProcessorEditor::paint (juce::Graphics& g)
{
    pluginVibes.drawBackground(g, 0.0f, 0.0f, getWidth(), getHeight(), PluginVibes::skColours::skWhite);
    pluginVibes.drawBackground(g, 0.0f, 0.0f, getWidth(), getHeight(), PluginVibes::skColours::skPaleCyan);

    for (int i = 0; i < numPanels; i++)
    {
        pluginVibes.drawPanel(g, panelPositions[i][0], panelPositions[i][1], panelPositions[i][2], panelPositions[i][3], margin, panelCols[i][0], panelCols[i][1]);
    };

    for (int i = 0; i < allButtons.size(); i++)
    {
        allButtons[i]->setBounds(buttonPos[i][0], buttonPos[i][1], buttonWidth, buttonHeight);
    };

    for (int i = 0; i < allKnobs.size(); i++)
    {
        allKnobs[i]->setBounds(knobData[i][0], knobData[i][1], knobData[i][2], knobData[i][3]);
        pluginVibes.drawLabels(g, 100, 100, allKnobs[i], labelText[i]);
    }

    peakLabel.setBounds(knobX[1], knobY[1], knobWidth, knobHeight);
    voiceLabel.setBounds(knobX[4], knobY[1], knobWidth, knobHeight);

    peakLabel.setText(peakFreq, juce::dontSendNotification);
    voiceLabel.setText(voiceFreq, juce::dontSendNotification);

    pluginVibes.drawLabelBg(g, &peakLabel);
    pluginVibes.drawLabelBg(g, &voiceLabel);
}

void PolyAmpProcessorEditor::resized()
{
}

void PolyAmpProcessorEditor::updateFrequencyLabel(juce::Slider* slider)
{
    if (slider == &mPeakSlider)
    {
        double scaled = (slider->getValue() * 2000) + 400;
        int scaledVal = juce::roundDoubleToInt(scaled);
        std::string hz = "Hz";
        peakFreq = std::to_string(scaledVal) + hz;
    }

    if (slider == &mVoiceSlider)
    {
        double scaled = (slider->getValue() * 450) + 400;
        int scaledVal = juce::roundDoubleToInt(scaled);
        std::string hz = "Hz";
        voiceFreq = std::to_string(scaledVal) + hz;
    }
}

void PolyAmpProcessorEditor::buttonClicked(juce::Button* button)
{
    if (button == &loChan)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_CHAN1, loChan.getToggleState());
    }

    if (button == &hiChan)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_CHAN2, hiChan.getToggleState());
    }
}

void PolyAmpProcessorEditor::sliderValueChanged(juce::Slider* slider)
{   
    //copy and paste these if statements for the number of your own params
    //change the names too obvs
    if (slider == &mCutSlider)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_CUT, mCutSlider.getValue());
    }
    
    if (slider == &mBoostSlider)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_BOOST, mBoostSlider.getValue());
    }

    if (slider == &mPeakSlider)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_PEAK, mPeakSlider.getValue());
        updateFrequencyLabel(slider);
    }

    if (slider == &mGainSlider)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_GAIN, mGainSlider.getValue());
    }

    if (slider == &mBassSlider)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_BASS, mBassSlider.getValue());
    }

    if (slider == &mTrebleSlider)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_TREBLE, mTrebleSlider.getValue());
    }

    if (slider == &mMidSlider)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_MID, mMidSlider.getValue());
    }

    if (slider == &mVoiceSlider)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_VOICE, mVoiceSlider.getValue());
        updateFrequencyLabel(slider);
    }

    if (slider == &mCabSlider)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_CABINET, mCabSlider.getValue());
    }

    if (slider == &mLevelSlider)
    {
        processor.sendFloatToPlugin(HV_POLYAMP_PARAM_IN_LEVEL, mLevelSlider.getValue());
    }
}

void PolyAmpProcessorEditor::updateToggleState(juce::Button* button, juce::String name)
{
    auto state = button->getToggleState();
}