/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <../JuceLibraryCode/JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class PluginVibes : public juce::LookAndFeel_V4
{
public:

    enum skColours {
        skLavendar = 0xffaa46d8,
        skLightBlue = 0xff00c3ff,
        skPaleCyan = 0x5600eaff,
        skDaisyYellow = 0xfffff700,
        skPaleYellow = 0xffffff4d,
        skCream = 0xffffff90,
        skMauve = 0xffbb00c0,
        skPalePurple = 0xffbb56ff,
        skPeach = 0xffffbaae,
        skBerryPink = 0xffd800a5,
        skPrincessPink = 0xffff38c3,
        skStrawbYog = 0xffffcfff,
        skMintGreen = 0xff5cfff9,
        skBarleyGreen = 0xff3ee8bb,
        skDuckEgg = 0xff3ee1ff,
        skCocoa = 0xff550030,
        skClear = 0x00ffffff,
        skWhite = 0xffffffff
    };

    static const juce::Font& getPuginFont()
    {
        static juce::Font quicksand(juce::Font(juce::Typeface::createSystemTypefaceFor(BinaryData::QuicksandRegular_otf,
                                                                                       BinaryData::QuicksandRegular_otfSize)));

        return quicksand;
    };

    void drawRotarySlider(juce::Graphics& g, int x, int y, int width, int height, float sliderPos, const float rotaryStartAngle, const float rotaryEndAngle, juce::Slider& slider) override
    {
        auto outline = juce::Colour(skLightBlue);
        auto fill = juce::Colour(skLavendar);
        auto thumbCol = juce::Colour(juce::Colours::black);

        auto bounds = juce::Rectangle<int>(x, y, width, height).toFloat().reduced(10);

        auto radius = juce::jmin(bounds.getWidth(), bounds.getHeight()) / 2.0f;
        auto toAngle = rotaryStartAngle + sliderPos * (rotaryEndAngle - rotaryStartAngle);
        auto lineW = juce::jmin(8.0f, radius * 0.5f);
        auto arcRadius = radius - lineW * 0.5f;

        juce::Path backgroundArc;
        backgroundArc.addCentredArc(bounds.getCentreX(),
            bounds.getCentreY(),
            arcRadius,
            arcRadius,
            0.0f,
            rotaryStartAngle,
            rotaryEndAngle,
            true);

        g.setColour(outline);
        g.strokePath(backgroundArc, juce::PathStrokeType(lineW * 0.5f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded));

        if (slider.isEnabled())
        {
            juce::Path valueArc;
            valueArc.addCentredArc(bounds.getCentreX(),
                bounds.getCentreY(),
                arcRadius,
                arcRadius,
                0.0f,
                rotaryStartAngle,
                toAngle,
                true);

            g.setColour(fill);
            g.strokePath(valueArc, juce::PathStrokeType(lineW * 0.75f, juce::PathStrokeType::curved, juce::PathStrokeType::rounded));
        }

        auto thumbWidth = lineW * 0.75f;
        juce::Point<float> thumbPoint(bounds.getCentreX() + arcRadius * std::cos(toAngle - juce::MathConstants<float>::halfPi),
            bounds.getCentreY() + arcRadius * std::sin(toAngle - juce::MathConstants<float>::halfPi));

        juce::Point<float> centrePoint(bounds.getCentreX(), bounds.getCentreY());
        juce::Line<float> dialMarker(thumbPoint, centrePoint);
        g.setColour(thumbCol);
        g.drawLine(dialMarker, lineW * 0.5f);
        g.fillEllipse(juce::Rectangle<float>(thumbWidth, thumbWidth).withCentre(thumbPoint));
        g.fillEllipse(juce::Rectangle<float>(thumbWidth * 0.75f, thumbWidth * 0.75f).withCentre(centrePoint));
    }

    void drawPanel(juce::Graphics& g, float x, float y, float& width, float& height, float margin, int innerCol, int outerCol)
    {
        float cornerRound = 6.0f;
        juce::Rectangle<float> outerPanel(x, y, width, height);
        juce::Rectangle<float> innerPanel(x + margin, y + margin, width - (margin * 2.0f), height - (margin * 2.0f));
        g.setColour(juce::Colour(outerCol));
        g.fillRoundedRectangle(outerPanel, cornerRound);
        g.setColour(juce::Colour(innerCol));
        g.fillRoundedRectangle(innerPanel, cornerRound);
    }

    void drawBackground(juce::Graphics& g, float x, float y, float width, float height, int bgCol)
    {
        juce::Rectangle<float> bgPanel(x, y, width, height);
        g.setColour(juce::Colour(bgCol));
        g.fillRect(bgPanel);
    }

    void drawLabelBg(juce::Graphics& g, juce::Label* label)
    {
        juce::Rectangle<float> labelBounds = label->getBounds().toFloat();
        g.setColour(juce::Colour(PluginVibes::skColours::skStrawbYog));
        g.fillRoundedRectangle(labelBounds, 6.0f);
    }

    void drawLabels(juce::Graphics& g, int width, int height, juce::Slider* knob, juce::String& text)
    {
        juce::Rectangle<int> knobBounds = knob->getBounds();
        juce::Point<int> centre(knobBounds.getCentreX(), knobBounds.getY() + knobBounds.getHeight());
        auto border = juce::Rectangle<int>(width, height).withCentre(centre);
        g.setFont(getPuginFont().boldened().withHeight(24.0f));
        g.setColour(juce::Colour(juce::Colours::black));
        g.drawText(text, border, juce::Justification::centred);
    }
};


class PolyAmpProcessorEditor  : public juce::AudioProcessorEditor,
                                public juce::Slider::Listener,
                                public juce::Button::Listener
{
public:
    PolyAmpProcessorEditor (PolyAmpProcessor&);
    ~PolyAmpProcessorEditor();

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;
    void sliderValueChanged(juce::Slider* slider) override;
    void buttonClicked(juce::Button* button) override;
    void updateToggleState(juce::Button* button, juce::String name);
    void updateFrequencyLabel(juce::Slider* slider);

    enum radioButtonIds {
        chanButtons = 1001
    };

    juce::Slider mCutSlider, mBassSlider, mBoostSlider, mCabSlider, mGainSlider, mLevelSlider, mMidSlider, mPeakSlider, mTrebleSlider, mVoiceSlider;

    std::vector<juce::Slider*> allKnobs =
    {
        &mCutSlider,
        &mPeakSlider,
        &mBoostSlider,
        &mBassSlider,
        &mMidSlider,
        &mVoiceSlider,
        &mTrebleSlider,
        &mGainSlider,
        &mLevelSlider,
        &mCabSlider
    };

    float margin;
    float width;
    float height;
    float buttonWidth;
    float buttonHeight;
    float knobWidth;
    float knobHeight;
    int numPanels;

    juce::Label peakLabel;
    juce::Label voiceLabel;

    juce::String peakFreq;
    juce::String voiceFreq;

    std::vector<std::vector<float>> panelPositions;
    std::vector<std::vector<float>> buttonPos;
    std::vector<float> knobX;
    std::vector<float> knobY;
    std::vector<std::vector<float>> knobData;
    std::vector<juce::String> labelText;
    std::vector<std::vector<int>> panelCols;

    juce::TextButton loChan{ "LO" };
    juce::TextButton hiChan{ "HI" };

    std::vector<juce::TextButton*> allButtons
    {
        &loChan,
        &hiChan
    };

private:

    //change this for your own plugin parameters e.g.
    
    //std::unique_ptr < juce::Slider> mPitchSlider, mModSlider;
    
    //or whatever
    PolyAmpProcessor& processor;
    PluginVibes pluginVibes;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (PolyAmpProcessorEditor)
};
