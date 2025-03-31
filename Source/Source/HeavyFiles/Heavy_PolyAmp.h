/** SKAF */

#ifndef _HEAVY_POLYAMP_H_
#define _HEAVY_POLYAMP_H_

#include "HvHeavy.h"

#ifdef __cplusplus
extern "C" {
#endif

#if HV_APPLE
#pragma mark - Heavy Context
#endif

typedef enum {
  HV_POLYAMP_PARAM_IN_BASS = 0x18E7F0B7, // Bass
  HV_POLYAMP_PARAM_IN_BOOST = 0x3DA4345D, // Boost
  HV_POLYAMP_PARAM_IN_CABINET = 0xD2E07C90, // Cabinet
  HV_POLYAMP_PARAM_IN_CHAN1 = 0x51EBA462, // Chan1
  HV_POLYAMP_PARAM_IN_CHAN2 = 0xEDC97, // Chan2
  HV_POLYAMP_PARAM_IN_CUT = 0x4751F075, // Cut
  HV_POLYAMP_PARAM_IN_GAIN = 0x677821DA, // Gain
  HV_POLYAMP_PARAM_IN_LEVEL = 0x3D02EA21, // Level
  HV_POLYAMP_PARAM_IN_MID = 0xBFDC48B6, // Mid
  HV_POLYAMP_PARAM_IN_PEAK = 0x11532B61, // Peak
  HV_POLYAMP_PARAM_IN_TREBLE = 0xE5D418BD, // Treble
  HV_POLYAMP_PARAM_IN_VOICE = 0xAC4A4490, // Voice
} Hv_PolyAmp_ParameterIn;


/**
 * Creates a new patch instance.
 * Sample rate should be positive and in Hertz, e.g. 44100.0.
 */
HeavyContextInterface *hv_PolyAmp_new(double sampleRate);

/**
 * Creates a new patch instance.
 * @param sampleRate  Sample rate should be positive (> 0) and in Hertz, e.g. 48000.0.
 * @param poolKb  Pool size is in kilobytes, and determines the maximum amount of memory
 *   allocated to messages at any time. By default this is 10 KB.
 * @param inQueueKb  The size of the input message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages between calls to
 *   process(). Default is 2 KB.
 * @param outQueueKb  The size of the output message queue in kilobytes. It determines the
 *   amount of memory dedicated to holding scheduled messages to the default sendHook.
 *   See getNextSentMessage() for info on accessing these messages. Default is 0 KB.
 */
HeavyContextInterface *hv_PolyAmp_new_with_options(double sampleRate, int poolKb, int inQueueKb, int outQueueKb);

/**
 * Free the patch instance.
 */
void hv_PolyAmp_free(HeavyContextInterface *instance);


#ifdef __cplusplus
} // extern "C"
#endif

#endif // _HEAVY_POLYAMP_H_
