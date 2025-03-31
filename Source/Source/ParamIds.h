/*
  ==============================================================================

    ParamIds.h
    This file copies the parameters from "Heavy_Demo.h" (created when you exported 
    C++ code from PlugData - it will be named automatically after your PD file)

    typedef enum {
      HV_POLYAMP_PARAM_IN_BASS = 0x18E7F0B7, // Bass
      HV_POLYAMP_PARAM_IN_BOOST = 0x3DA4345D, // Boost
      HV_POLYAMP_PARAM_IN_CABINET = 0xD2E07C90, // Cabinet
      HV_POLYAMP_PARAM_IN_GAIN = 0x677821DA, // Gain
      HV_POLYAMP_PARAM_IN_LEVEL = 0x3D02EA21, // Level
      HV_POLYAMP_PARAM_IN_MID = 0xBFDC48B6, // Mid
      HV_POLYAMP_PARAM_IN_PEAK = 0x11532B61, // Peak
      HV_POLYAMP_PARAM_IN_TREBLE = 0xE5D418BD, // Treble
      HV_POLYAMP_PARAM_IN_VOICE = 0xAC4A4490, // Voice
      HV_POLYAMP_PARAM_IN_CHANNEL = 0xC496643E, // channel
    } Hv_PolyAmp_ParameterIn;

  ==============================================================================
*/

#pragma once

namespace ParamIDs
{
    inline constexpr auto Bass{ "Bass" };
    inline constexpr auto Cut{ "Cut" };
    inline constexpr auto Boost{ "Boost" };
    inline constexpr auto Cab{ "Cab" };
    inline constexpr auto Gain{ "Gain" };
    inline constexpr auto Level{ "Level" };
    inline constexpr auto Mid{ "Mid" };
    inline constexpr auto Peak{ "Peak" };
    inline constexpr auto Treble{ "Treble" };
    inline constexpr auto Voice{ "Voice" };
    inline constexpr auto Channel{ "Channel" };
}

const std::vector<juce::String> parameters =
{
    ParamIDs::Bass,
    ParamIDs::Cut,
    ParamIDs::Boost,
    ParamIDs::Cab,
    ParamIDs::Gain,
    ParamIDs::Level,
    ParamIDs::Mid,
    ParamIDs::Peak,
    ParamIDs::Treble,
    ParamIDs::Voice,
    ParamIDs::Channel,
};