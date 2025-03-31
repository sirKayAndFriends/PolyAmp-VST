/** SKAF */

#include "Heavy_PolyAmp.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_PolyAmp *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_PolyAmp_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_PolyAmp));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_PolyAmp(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_PolyAmp_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_PolyAmp));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_PolyAmp(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_PolyAmp_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_PolyAmp();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_PolyAmp::Heavy_PolyAmp(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sLine_init(&sLine_lJutri6C);
  numBytes += sLine_init(&sLine_UiSy0dvN);
  numBytes += sLine_init(&sLine_eHJ5P3LP);
  numBytes += sLine_init(&sLine_GDjbN1Ie);
  numBytes += sLine_init(&sLine_673zDajK);
  numBytes += sBiquad_init(&sBiquad_s_5X5LPCEU);
  numBytes += sLine_init(&sLine_dit4mZoK);
  numBytes += sLine_init(&sLine_7B6pcdzE);
  numBytes += sLine_init(&sLine_lvMM3Z6S);
  numBytes += sLine_init(&sLine_Lg54uYCr);
  numBytes += sLine_init(&sLine_9eHu1bhF);
  numBytes += sBiquad_init(&sBiquad_s_Jv2FzLZ9);
  numBytes += sLine_init(&sLine_W4RU3afm);
  numBytes += sLine_init(&sLine_OgMiTNFs);
  numBytes += sLine_init(&sLine_BmfQr2TA);
  numBytes += sLine_init(&sLine_dsg6X6ei);
  numBytes += sLine_init(&sLine_UJDov5F7);
  numBytes += sBiquad_init(&sBiquad_s_aJpF5lKa);
  numBytes += sLine_init(&sLine_uOYeDF5E);
  numBytes += sLine_init(&sLine_XWFfnmpl);
  numBytes += sLine_init(&sLine_Q0WoCJFU);
  numBytes += sLine_init(&sLine_QIqdvnOY);
  numBytes += sLine_init(&sLine_jSme1jIA);
  numBytes += sBiquad_init(&sBiquad_s_7ylPCt6K);
  numBytes += sLine_init(&sLine_GXLNSMAu);
  numBytes += sLine_init(&sLine_MNkW16X0);
  numBytes += sLine_init(&sLine_IdIljFsf);
  numBytes += sLine_init(&sLine_pLZbr37q);
  numBytes += sLine_init(&sLine_RX3SIzmS);
  numBytes += sBiquad_init(&sBiquad_s_NIhDcufJ);
  numBytes += sLine_init(&sLine_lMt0kuwP);
  numBytes += sLine_init(&sLine_5IcMBxhc);
  numBytes += sLine_init(&sLine_25ak13z5);
  numBytes += sLine_init(&sLine_ikgsTeC3);
  numBytes += sLine_init(&sLine_M08qViih);
  numBytes += sBiquad_init(&sBiquad_s_5X0J3c3t);
  numBytes += sLine_init(&sLine_8IeX9sUC);
  numBytes += sLine_init(&sLine_JEp2zsve);
  numBytes += sLine_init(&sLine_b59Ql9Mh);
  numBytes += sLine_init(&sLine_loIGPmkN);
  numBytes += sLine_init(&sLine_34lt9XqA);
  numBytes += sBiquad_init(&sBiquad_s_Tvveazcv);
  numBytes += sLine_init(&sLine_f5rcXkuQ);
  numBytes += sLine_init(&sLine_kOavsUnf);
  numBytes += sLine_init(&sLine_5vVR3XBe);
  numBytes += sLine_init(&sLine_T1zT7z3P);
  numBytes += sLine_init(&sLine_ipSTz39o);
  numBytes += sBiquad_init(&sBiquad_s_phttYyvx);
  numBytes += sLine_init(&sLine_EYDACozI);
  numBytes += sLine_init(&sLine_8Dum1PqW);
  numBytes += sLine_init(&sLine_pxhpPhsb);
  numBytes += sLine_init(&sLine_zM1SxRSY);
  numBytes += sLine_init(&sLine_NQX0gTHs);
  numBytes += sBiquad_init(&sBiquad_s_U116WUTG);
  numBytes += sLine_init(&sLine_J5oYFgyA);
  numBytes += sLine_init(&sLine_f6vbi6xc);
  numBytes += sLine_init(&sLine_ukJv7fqE);
  numBytes += sLine_init(&sLine_u9bVc2KW);
  numBytes += sLine_init(&sLine_qjksU63Z);
  numBytes += sBiquad_init(&sBiquad_s_uILMhsE4);
  numBytes += cVar_init_f(&cVar_V0hL7rHH, 6000.0f);
  numBytes += cVar_init_f(&cVar_RomaZeha, 0.0f);
  numBytes += cVar_init_f(&cVar_9mDcAitm, 0.707f);
  numBytes += cBinop_init(&cBinop_VTAuNEBg, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_kFapd7Ja, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_HTPyEWxH, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ZKuh4KeB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bwMOtQxe, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_OjXzw0w5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_CYTyXR50, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_oLrGVohf, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_lAugAWK3, 25.0f);
  numBytes += cBinop_init(&cBinop_q6XnT3H4, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_cFzrXlQx, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_VybnB4XJ, 0.707f);
  numBytes += cVar_init_f(&cVar_VEPKlgfQ, 0.0f);
  numBytes += cBinop_init(&cBinop_kwLPs2hM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Ukc0UOsM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_e0ebogE7, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6NQUXCxl, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_GGEOcBUi, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_qEtqmlsO, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_UZuMo7zm, 0.0f);
  numBytes += cVar_init_f(&cVar_yQON6py3, 100.0f);
  numBytes += cVar_init_f(&cVar_1UDxV3uA, 0.707f);
  numBytes += cBinop_init(&cBinop_JXT56bsQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_LeLQM3Ow, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_NyxNHLC7, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_lDgwkJnD, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_onJunwzw, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_e05HSuiU, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PmGEhrln, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_759vylKR, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_GlM382tv, 1.0f);
  numBytes += cIf_init(&cIf_0KVbtt2T, false);
  numBytes += cVar_init_f(&cVar_EVJsQiji, 0.0f);
  numBytes += cBinop_init(&cBinop_bhJPFAuM, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_vcM1x9Rm, 0.0f);
  numBytes += cVar_init_f(&cVar_y4tescVP, 400.0f);
  numBytes += cBinop_init(&cBinop_rCZFHp5p, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_rz5cp5ia, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_l9q82HcZ, 0.5f);
  numBytes += cBinop_init(&cBinop_qedyHNzy, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8ptjUBLi, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_wEy5aFBw, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_LZ6PZuXR, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_fVFCQn2f, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_6l5nMcsc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_xvVRynuw, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_P56btsQ0, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_fWw0tBte, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_I1sRUf5j, 0.0f); // __pow
  numBytes += cVar_init_f(&cVar_TBdLSXV1, 100.0f);
  numBytes += cVar_init_f(&cVar_SUeDhqFe, 0.707f);
  numBytes += cBinop_init(&cBinop_1d37XJGV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_cwafffTp, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_k5Ey54Nn, 0.0f);
  numBytes += cBinop_init(&cBinop_Wa4w5FU5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_H7ckITpb, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4mlyR4F0, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_I5FXsvv5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9silR2NM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_H2HA8iTD, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Z04wfv46, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_flsgfy1K, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_05AHkqds, 0.0f);
  numBytes += cVar_init_f(&cVar_OHQNvNHJ, 250.0f);
  numBytes += cBinop_init(&cBinop_lRInT9WP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JBeuwrLn, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_J7mqQuj4, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_aWOFe2qY, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_g5yc2XT5, 1.0f);
  numBytes += cBinop_init(&cBinop_CcN5x9tD, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_WVKIvQlR, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_zU1r8WuP, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_XAzbF4TQ, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_sqkO82Wx, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_cNPU2qBe, 0.0f);
  numBytes += cBinop_init(&cBinop_lUgqvzLi, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1lu43eja, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_H1cYwAx1, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_rPNLcDnn, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_JdvecktE, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_VlEjGwSx, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_XIUgNpNc, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_bcRqY34u, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_8MGQdihT, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_BKMbFx6a, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_0HeraZ0r, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_yRsd19JN, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_nt6Nw6h6, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_QjSSWUpz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1aSbXZCD, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_J34Loh2V, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_dCDWtd3V, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_u0kKGP8C, 0.0f); // __pow
  numBytes += cVar_init_f(&cVar_eP6fsF3O, 0.2f);
  numBytes += cBinop_init(&cBinop_78MSBNbV, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_CWYIRmnj, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_0FxSzsrT, 0.0f);
  numBytes += cVar_init_f(&cVar_ezLnrbDa, 3500.0f);
  numBytes += cVar_init_f(&cVar_evdtCtsg, 0.707f);
  numBytes += cBinop_init(&cBinop_ba7aD4Rn, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_Yyw5QzeF, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_WPPsJRZk, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_e2pyZFCQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_UpNCZRf1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_iRNeqdPc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_60l8cO3m, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_Gn4XGSPG, 400.0f);
  numBytes += cBinop_init(&cBinop_VbOSaEJA, 0.0f); // __div
  numBytes += cVar_init_f(&cVar_0bbWAxbF, 0.5f);
  numBytes += cBinop_init(&cBinop_kfjI0Fcj, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_zuupEdKB, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_RoKz1RMH, 0.0f);
  numBytes += cBinop_init(&cBinop_MgsW1dYw, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_37aqjJ5t, 0.0f);
  numBytes += cBinop_init(&cBinop_Xj9JEnZ3, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_MqENH4Yn, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_BLNObOjm, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bgimV9Hy, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_FvB2pPuB, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_XnkMXOCQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_xMwYE0t2, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_5Od0bDQn, 0.0f); // __pow
  numBytes += cVar_init_f(&cVar_nJ35woGi, 0.0f);
  numBytes += cIf_init(&cIf_eUSTEdIQ, false);
  numBytes += cVar_init_f(&cVar_dW70rTuB, 0.707f);
  numBytes += cBinop_init(&cBinop_vHwrIhsp, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_q5tYhN4X, 44100.0f); // __div
  numBytes += cVar_init_f(&cVar_twBSOKyX, 0.0f);
  numBytes += cVar_init_f(&cVar_KVoRYuki, 4000.0f);
  numBytes += cBinop_init(&cBinop_Bn2pa5Zo, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_bTNmFsoA, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_9PGu77cj, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_IzCF2bu1, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_PoDDD45I, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_jAtRD5oZ, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_OitfjQf4, 0.0f);
  numBytes += cBinop_init(&cBinop_sudmGjfT, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ZtOYwo1b, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_YRnaH7DK, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_TWcTOJvc, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_z4CrTHSd, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_19SMmoBG, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_XEhna38z, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_STJfa2xx, 0.0f);
  numBytes += cVar_init_f(&cVar_SqXWlO4P, 2000.0f);
  numBytes += cBinop_init(&cBinop_uRBEOj4G, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_JhR2AIyC, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_xgsQxrBm, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_zOZV4n8R, 1.0f);
  numBytes += cBinop_init(&cBinop_cA6qMUcQ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_COjDrCeX, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_CWm9BxkZ, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_MkI6yQmp, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_qf6XsBlk, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_BTPKmXGC, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_1LKGJhgU, 44100.0f); // __div
  numBytes += cBinop_init(&cBinop_exjgr4Gz, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_hKERrpLd, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_St27MoF3, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_Y9XilG5p, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_DGG19FK4, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_ifSH19ys, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_H8DdF0o5, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_BsKsVgLR, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_u3uYWY3Z, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_v5tUV2M3, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_4cSCobbH, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_c029tS1S, 0.0f); // __pow
  numBytes += cVar_init_f(&cVar_KGrpDfie, 1.0f);
  numBytes += sVarf_init(&sVarf_S8QvA8SJ, 0.2f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oTYEfnwa, 0.2f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_mhgn5YJG, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_v4vJqqut, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_eBpOMQLU, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pZjIMQuL, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_T9YhSHju, 0.0f, 0.0f, false);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_PolyAmp::~Heavy_PolyAmp() {
  // nothing to free
}

HvTable *Heavy_PolyAmp::getTableForHash(hv_uint32_t tableHash) {
  return nullptr;
}

void Heavy_PolyAmp::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x18E7F0B7: { // Bass
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_WC7Apf7V_sendMessage);
      break;
    }
    case 0x3DA4345D: { // Boost
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_njnGXqjq_sendMessage);
      break;
    }
    case 0xD2E07C90: { // Cabinet
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_TgM7N2qF_sendMessage);
      break;
    }
    case 0x51EBA462: { // Chan1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sI58vD9O_sendMessage);
      break;
    }
    case 0xEDC97: { // Chan2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Cl86RRtz_sendMessage);
      break;
    }
    case 0x4751F075: { // Cut
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_z9JiOxdc_sendMessage);
      break;
    }
    case 0x677821DA: { // Gain
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_CrLhpMKn_sendMessage);
      break;
    }
    case 0x3D02EA21: { // Level
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ZWd3IngQ_sendMessage);
      break;
    }
    case 0xBFDC48B6: { // Mid
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FBQbVTuU_sendMessage);
      break;
    }
    case 0x11532B61: { // Peak
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Krtd0a0h_sendMessage);
      break;
    }
    case 0xE5D418BD: { // Treble
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_T4d28nYX_sendMessage);
      break;
    }
    case 0xAC4A4490: { // Voice
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sHeIIir1_sendMessage);
      break;
    }
    case 0xBBB046A0: { // 1034-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jvwIPJZx_sendMessage);
      break;
    }
    case 0xDAF079E2: { // 1034-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_7AFdywhz_sendMessage);
      break;
    }
    case 0x47E361A9: { // 1034-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_oN9mUqCh_sendMessage);
      break;
    }
    case 0x9DD277E3: { // 1077-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0Wgl5NIZ_sendMessage);
      break;
    }
    case 0x93009500: { // 1077-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_E12kEIOY_sendMessage);
      break;
    }
    case 0x39491575: { // 1077-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_liAx6yrl_sendMessage);
      break;
    }
    case 0x5AF847D0: { // 1118-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1DHV0u58_sendMessage);
      break;
    }
    case 0xDC2A7470: { // 1118-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8DydLLon_sendMessage);
      break;
    }
    case 0xD09B85F0: { // 1118-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0VAdMTIu_sendMessage);
      break;
    }
    case 0x14C26E77: { // 1159-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_s8e0GyZJ_sendMessage);
      break;
    }
    case 0x900CA650: { // 1159-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NpJVZC1U_sendMessage);
      break;
    }
    case 0xD2572AE9: { // 1159-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_RqmUjcSO_sendMessage);
      break;
    }
    case 0xA45D21CE: { // 1200-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_jcAg6lmf_sendMessage);
      break;
    }
    case 0x76C6EBB9: { // 1200-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GNa0hWKy_sendMessage);
      break;
    }
    case 0xD3786386: { // 1200-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VxVBbY2a_sendMessage);
      break;
    }
    case 0xE6A421CD: { // 1241-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_P3OSNgIV_sendMessage);
      break;
    }
    case 0x96DD2870: { // 1241-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_pdZbSaFC_sendMessage);
      break;
    }
    case 0x1F05347E: { // 1241-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_K246c2pp_sendMessage);
      break;
    }
    case 0x59C2672D: { // 1900-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6yX3BOdy_sendMessage);
      break;
    }
    case 0xF04ED639: { // 1900-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0S20hMEZ_sendMessage);
      break;
    }
    case 0x9F7EA21F: { // 1900-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NM41Vi5y_sendMessage);
      break;
    }
    case 0x4A7C46DA: { // 1900-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_i0qimoTb_sendMessage);
      break;
    }
    case 0xA8F7B3F7: { // 1945-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OlcapmzG_sendMessage);
      break;
    }
    case 0x5EBA3BEA: { // 1945-alpha
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_5iS5cANR_sendMessage);
      break;
    }
    case 0x7729ECF6: { // 1945-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_fpmcjb7s_sendMessage);
      break;
    }
    case 0xA1D3244: { // 1945-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ezxslLXG_sendMessage);
      break;
    }
    case 0xD876978F: { // 1988-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_etJN4ccE_sendMessage);
      break;
    }
    case 0x50A89FB2: { // 1988-sqrtA-alpha-2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hBPZ3iB6_sendMessage);
      break;
    }
    case 0xD8D4FD2C: { // 1988-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_KcJn0Jqn_sendMessage);
      break;
    }
    case 0xB31EF752: { // 1988-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_GMqLDv7y_sendMessage);
      break;
    }
    case 0x960401D2: { // 2032-A
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_q9MtYsFL_sendMessage);
      break;
    }
    case 0x1B1CAF66: { // 2032-sqrtA-alpha-2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_EI07yNt8_sendMessage);
      break;
    }
    case 0xA1A6ACDA: { // 2032-wcos
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_sI5Iyemg_sendMessage);
      break;
    }
    case 0x98C19677: { // 2032-wsin
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PSupD5GD_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_3l6rOMiA_sendMessage);
      break;
    }
    case 0x562FC491: { // gainStage1
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_cmSjhWlI_sendMessage);
      break;
    }
    case 0xFCBCBE7A: { // gainStage2
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9lb38w9L_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_PolyAmp::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "Bass";
        info->hash = 0x18E7F0B7;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 1: {
        info->name = "Boost";
        info->hash = 0x3DA4345D;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 2: {
        info->name = "Cabinet";
        info->hash = 0xD2E07C90;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 1.0f;
        break;
      }
      case 3: {
        info->name = "Chan1";
        info->hash = 0x51EBA462;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 4: {
        info->name = "Chan2";
        info->hash = 0xEDC97;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 5: {
        info->name = "Cut";
        info->hash = 0x4751F075;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 6: {
        info->name = "Gain";
        info->hash = 0x677821DA;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.2f;
        break;
      }
      case 7: {
        info->name = "Level";
        info->hash = 0x3D02EA21;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.2f;
        break;
      }
      case 8: {
        info->name = "Mid";
        info->hash = 0xBFDC48B6;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 9: {
        info->name = "Peak";
        info->hash = 0x11532B61;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 10: {
        info->name = "Treble";
        info->hash = 0xE5D418BD;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      case 11: {
        info->name = "Voice";
        info->hash = 0xAC4A4490;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.0f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 12;
}



/*
 * Send Function Implementations
 */


void Heavy_PolyAmp::cMsg_tGu7K6PJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_NQX0gTHs, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_70ZWbx6C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_EYDACozI, 0, m, NULL);
}

void Heavy_PolyAmp::cVar_V0hL7rHH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xmYpYgwu_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_UIf3Jl71_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_K6LyI9Xd_sendMessage);
}

void Heavy_PolyAmp::cBinop_R8VsPVO0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZKuh4KeB, HV_BINOP_MULTIPLY, 1, m, &cBinop_ZKuh4KeB_sendMessage);
}

void Heavy_PolyAmp::cBinop_UTjgsfdD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_R8VsPVO0_sendMessage);
}

void Heavy_PolyAmp::cMsg_TbxzBZ3R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_UTjgsfdD_sendMessage);
}

void Heavy_PolyAmp::cUnop_ulBfBbiT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_IGH8BHEP_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_zi4fWtAV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HTPyEWxH, HV_BINOP_MULTIPLY, 1, m, &cBinop_HTPyEWxH_sendMessage);
}

void Heavy_PolyAmp::cMsg_UHLjhiCJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_zi4fWtAV_sendMessage);
}

void Heavy_PolyAmp::cBinop_8VDTz5u8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JJpoZKWf_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_1kDuDfpH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_8VDTz5u8_sendMessage);
}

void Heavy_PolyAmp::cUnop_C2l1lpsa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_aWAVN743_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_sQP3xARD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bwMOtQxe, HV_BINOP_MULTIPLY, 1, m, &cBinop_bwMOtQxe_sendMessage);
}

void Heavy_PolyAmp::cMsg_zyPEmC4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_sQP3xARD_sendMessage);
}

void Heavy_PolyAmp::cBinop_eba3aqoY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OjXzw0w5, HV_BINOP_MULTIPLY, 1, m, &cBinop_OjXzw0w5_sendMessage);
}

void Heavy_PolyAmp::cVar_RomaZeha_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ihhIETJe_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_usOb3ZEG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CYTyXR50, HV_BINOP_MULTIPLY, 1, m, &cBinop_CYTyXR50_sendMessage);
}

void Heavy_PolyAmp::cBinop_GKe1p6WW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_usOb3ZEG_sendMessage);
}

void Heavy_PolyAmp::cMsg_18CpHn1V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_GKe1p6WW_sendMessage);
}

void Heavy_PolyAmp::cBinop_v4dv9OWc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RomaZeha, 1, m, &cVar_RomaZeha_sendMessage);
}

void Heavy_PolyAmp::cBinop_wDAa483i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VTAuNEBg, HV_BINOP_MULTIPLY, 0, m, &cBinop_VTAuNEBg_sendMessage);
}

void Heavy_PolyAmp::cBinop_UIf3Jl71_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_wDAa483i_sendMessage);
}

void Heavy_PolyAmp::cVar_9mDcAitm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_1kDuDfpH_sendMessage);
}

void Heavy_PolyAmp::cMsg_oHl6LTy2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_bPXS3qaH_sendMessage);
}

void Heavy_PolyAmp::cSystem_bPXS3qaH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kFapd7Ja, HV_BINOP_DIVIDE, 1, m, &cBinop_kFapd7Ja_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_d7tUKnOz_sendMessage);
}

void Heavy_PolyAmp::cUnop_tNbkpu3e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_XpfhIJda_sendMessage);
}

void Heavy_PolyAmp::cBinop_XpfhIJda_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kFapd7Ja, HV_BINOP_DIVIDE, 0, m, &cBinop_kFapd7Ja_sendMessage);
}

void Heavy_PolyAmp::cBinop_VTAuNEBg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aVkAf5Ij_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Kw3DpjCl_sendMessage);
}

void Heavy_PolyAmp::cBinop_kFapd7Ja_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VTAuNEBg, HV_BINOP_MULTIPLY, 1, m, &cBinop_VTAuNEBg_sendMessage);
}

void Heavy_PolyAmp::cMsg_fq2BkqNf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_tNbkpu3e_sendMessage);
}

void Heavy_PolyAmp::cCast_d7tUKnOz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fq2BkqNf_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_HTPyEWxH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tGu7K6PJ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_ZKuh4KeB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XumDDCdF_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_bwMOtQxe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JxaFQAhc_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_OjXzw0w5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_purbA7Ic_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_CYTyXR50_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_70ZWbx6C_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_oLrGVohf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_EWbxiWcE_sendMessage);
}

void Heavy_PolyAmp::cBinop_EWbxiWcE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_FAmRsiFD_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_9abDR8JA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oLrGVohf, HV_BINOP_MULTIPLY, 1, m, &cBinop_oLrGVohf_sendMessage);
}

void Heavy_PolyAmp::cBinop_IPpKeKx7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rVS1EXYU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SP2zICq2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Rpx2lHnp_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_prkfF0vl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6z28Ix4a_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ybZSLXd9_sendMessage);
}

void Heavy_PolyAmp::cMsg_JJpoZKWf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_9abDR8JA_sendMessage);
}

void Heavy_PolyAmp::cMsg_ihhIETJe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_IPpKeKx7_sendMessage);
}

void Heavy_PolyAmp::cSend_aWAVN743_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_RqmUjcSO_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_IGH8BHEP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NpJVZC1U_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_FAmRsiFD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s8e0GyZJ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_Rpx2lHnp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_OjXzw0w5, HV_BINOP_MULTIPLY, 0, m, &cBinop_OjXzw0w5_sendMessage);
}

void Heavy_PolyAmp::cCast_ybZSLXd9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CYTyXR50, HV_BINOP_MULTIPLY, 0, m, &cBinop_CYTyXR50_sendMessage);
}

void Heavy_PolyAmp::cCast_SP2zICq2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_HTPyEWxH, HV_BINOP_MULTIPLY, 0, m, &cBinop_HTPyEWxH_sendMessage);
}

void Heavy_PolyAmp::cCast_6z28Ix4a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bwMOtQxe, HV_BINOP_MULTIPLY, 0, m, &cBinop_bwMOtQxe_sendMessage);
}

void Heavy_PolyAmp::cCast_rVS1EXYU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_PolyAmp::cCast_prkfF0vl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZKuh4KeB, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZKuh4KeB_sendMessage);
}

void Heavy_PolyAmp::cCast_q5IqUPGO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_V0hL7rHH, 0, m, &cVar_V0hL7rHH_sendMessage);
}

void Heavy_PolyAmp::cCast_k4FYR37J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9mDcAitm, 1, m, &cVar_9mDcAitm_sendMessage);
}

void Heavy_PolyAmp::cCast_Kw3DpjCl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_ulBfBbiT_sendMessage);
}

void Heavy_PolyAmp::cCast_aVkAf5Ij_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_C2l1lpsa_sendMessage);
}

void Heavy_PolyAmp::cCast_xmYpYgwu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_9mDcAitm, 0, m, &cVar_9mDcAitm_sendMessage);
}

void Heavy_PolyAmp::cCast_K6LyI9Xd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RomaZeha, 0, m, &cVar_RomaZeha_sendMessage);
}

void Heavy_PolyAmp::cMsg_JxaFQAhc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_8Dum1PqW, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_XumDDCdF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_pxhpPhsb, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_purbA7Ic_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_zM1SxRSY, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_cn8ABai1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_dsg6X6ei, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_d2vBcIlP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_OgMiTNFs, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_fC2OK6kn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_UJDov5F7, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_JuO4VBrS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_W4RU3afm, 0, m, NULL);
}

void Heavy_PolyAmp::cUnop_VHEEetvj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_kqTJSZNi_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cVar_lAugAWK3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oSj8XuQh_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_3jPlFHUg_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LcUrlOvk_sendMessage);
}

void Heavy_PolyAmp::cUnop_eag82bEK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_BWPLruSE_sendMessage);
}

void Heavy_PolyAmp::cMsg_66sdVOev_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BaPNYT2t_sendMessage);
}

void Heavy_PolyAmp::cSystem_BaPNYT2t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cFzrXlQx, HV_BINOP_DIVIDE, 1, m, &cBinop_cFzrXlQx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YqGBnbWa_sendMessage);
}

void Heavy_PolyAmp::cBinop_BWPLruSE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cFzrXlQx, HV_BINOP_DIVIDE, 0, m, &cBinop_cFzrXlQx_sendMessage);
}

void Heavy_PolyAmp::cBinop_q6XnT3H4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_olFPlSfb_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nDxQrcpg_sendMessage);
}

void Heavy_PolyAmp::cBinop_cFzrXlQx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q6XnT3H4, HV_BINOP_MULTIPLY, 1, m, &cBinop_q6XnT3H4_sendMessage);
}

void Heavy_PolyAmp::cMsg_HEoRiDfx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_eag82bEK_sendMessage);
}

void Heavy_PolyAmp::cCast_YqGBnbWa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HEoRiDfx_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_5FE2pcyf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6NQUXCxl, HV_BINOP_MULTIPLY, 1, m, &cBinop_6NQUXCxl_sendMessage);
}

void Heavy_PolyAmp::cMsg_ou6ivSCW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_5FE2pcyf_sendMessage);
}

void Heavy_PolyAmp::cBinop_SRwzvIme_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Cmndgtgx_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_AvSAatig_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_SRwzvIme_sendMessage);
}

void Heavy_PolyAmp::cBinop_fYAxorar_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q6XnT3H4, HV_BINOP_MULTIPLY, 0, m, &cBinop_q6XnT3H4_sendMessage);
}

void Heavy_PolyAmp::cBinop_3jPlFHUg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_fYAxorar_sendMessage);
}

void Heavy_PolyAmp::cBinop_DU3K7Gak_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qEtqmlsO, HV_BINOP_MULTIPLY, 1, m, &cBinop_qEtqmlsO_sendMessage);
}

void Heavy_PolyAmp::cBinop_OMYwDY3V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GGEOcBUi, HV_BINOP_MULTIPLY, 1, m, &cBinop_GGEOcBUi_sendMessage);
}

void Heavy_PolyAmp::cBinop_lT5uXFqi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_OMYwDY3V_sendMessage);
}

void Heavy_PolyAmp::cVar_VybnB4XJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_AvSAatig_sendMessage);
}

void Heavy_PolyAmp::cBinop_ijn0jBkN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e0ebogE7, HV_BINOP_MULTIPLY, 1, m, &cBinop_e0ebogE7_sendMessage);
}

void Heavy_PolyAmp::cBinop_Xvj0EMqi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_ijn0jBkN_sendMessage);
}

void Heavy_PolyAmp::cBinop_yVjEnq5w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VEPKlgfQ, 1, m, &cVar_VEPKlgfQ_sendMessage);
}

void Heavy_PolyAmp::cBinop_4Tsiq7E5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ukc0UOsM, HV_BINOP_MULTIPLY, 1, m, &cBinop_Ukc0UOsM_sendMessage);
}

void Heavy_PolyAmp::cBinop_2dS2KaQZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_4Tsiq7E5_sendMessage);
}

void Heavy_PolyAmp::cVar_VEPKlgfQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dd0emtcw_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cUnop_8vSvGDFN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_7C1hZtIY_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_kwLPs2hM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_rb0ziNNy_sendMessage);
}

void Heavy_PolyAmp::cBinop_Ukc0UOsM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JuO4VBrS_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_e0ebogE7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5SYwIUoc_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_6NQUXCxl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_fC2OK6kn_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_rb0ziNNy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Uhtufh2P_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_GGEOcBUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_d2vBcIlP_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_qEtqmlsO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cn8ABai1_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_jKKZ72cD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_bylOLe5S_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JRzeNUmo_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QbadfJUb_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WHzPwT4x_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AWkLGw12_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_7MueRzVT_sendMessage);
}

void Heavy_PolyAmp::cBinop_2GOYupYl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kwLPs2hM, HV_BINOP_MULTIPLY, 1, m, &cBinop_kwLPs2hM_sendMessage);
}

void Heavy_PolyAmp::cMsg_dd0emtcw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_jKKZ72cD_sendMessage);
}

void Heavy_PolyAmp::cMsg_Cmndgtgx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_2GOYupYl_sendMessage);
}

void Heavy_PolyAmp::cSend_kqTJSZNi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8DydLLon_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_Uhtufh2P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1DHV0u58_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_7C1hZtIY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0VAdMTIu_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_AWkLGw12_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_GGEOcBUi, HV_BINOP_MULTIPLY, 0, m, &cBinop_GGEOcBUi_sendMessage);
}

void Heavy_PolyAmp::cCast_QbadfJUb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qEtqmlsO, HV_BINOP_MULTIPLY, 0, m, &cBinop_qEtqmlsO_sendMessage);
}

void Heavy_PolyAmp::cCast_JRzeNUmo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6NQUXCxl, HV_BINOP_MULTIPLY, 0, m, &cBinop_6NQUXCxl_sendMessage);
}

void Heavy_PolyAmp::cCast_bylOLe5S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_PolyAmp::cCast_7MueRzVT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Ukc0UOsM, HV_BINOP_MULTIPLY, 0, m, &cBinop_Ukc0UOsM_sendMessage);
}

void Heavy_PolyAmp::cCast_WHzPwT4x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e0ebogE7, HV_BINOP_MULTIPLY, 0, m, &cBinop_e0ebogE7_sendMessage);
}

void Heavy_PolyAmp::cCast_LcUrlOvk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VEPKlgfQ, 0, m, &cVar_VEPKlgfQ_sendMessage);
}

void Heavy_PolyAmp::cCast_oSj8XuQh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VybnB4XJ, 0, m, &cVar_VybnB4XJ_sendMessage);
}

void Heavy_PolyAmp::cCast_x2xbqB0d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lAugAWK3, 0, m, &cVar_lAugAWK3_sendMessage);
}

void Heavy_PolyAmp::cCast_s1vU6ebw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VybnB4XJ, 1, m, &cVar_VybnB4XJ_sendMessage);
}

void Heavy_PolyAmp::cCast_olFPlSfb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_8vSvGDFN_sendMessage);
}

void Heavy_PolyAmp::cCast_nDxQrcpg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_VHEEetvj_sendMessage);
}

void Heavy_PolyAmp::cMsg_5SYwIUoc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_BmfQr2TA, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_Qqa0FfrZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_f6vbi6xc, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_E56KRgEr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_qjksU63Z, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_psgtotXB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_u9bVc2KW, 0, m, NULL);
}

void Heavy_PolyAmp::cBinop_qQCNUyJ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NyxNHLC7, HV_BINOP_MULTIPLY, 1, m, &cBinop_NyxNHLC7_sendMessage);
}

void Heavy_PolyAmp::cBinop_gTDLXi3m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_qQCNUyJ4_sendMessage);
}

void Heavy_PolyAmp::cUnop_v1dqvijF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ioPNI6C4_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_batMPDRy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JXT56bsQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_JXT56bsQ_sendMessage);
}

void Heavy_PolyAmp::cBinop_zh6i8Bka_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_batMPDRy_sendMessage);
}

void Heavy_PolyAmp::cVar_UZuMo7zm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JLrolvlH_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_7mnrGJVW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e05HSuiU, HV_BINOP_MULTIPLY, 1, m, &cBinop_e05HSuiU_sendMessage);
}

void Heavy_PolyAmp::cBinop_jX3q7PIt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_7mnrGJVW_sendMessage);
}

void Heavy_PolyAmp::cVar_yQON6py3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yODXXxdm_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_zh6i8Bka_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_jOIcotPj_sendMessage);
}

void Heavy_PolyAmp::cVar_1UDxV3uA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_VqmoJSt7_sendMessage);
}

void Heavy_PolyAmp::cBinop_WkUjQ2a1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VIjGy4Jy_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_VqmoJSt7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_WkUjQ2a1_sendMessage);
}

void Heavy_PolyAmp::cBinop_SUf8Pl0y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_759vylKR, HV_BINOP_MULTIPLY, 1, m, &cBinop_759vylKR_sendMessage);
}

void Heavy_PolyAmp::cBinop_aeYY1wR1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_SUf8Pl0y_sendMessage);
}

void Heavy_PolyAmp::cMsg_cAB7iLS8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_61tJXL8h_sendMessage);
}

void Heavy_PolyAmp::cSystem_61tJXL8h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LeLQM3Ow, HV_BINOP_DIVIDE, 1, m, &cBinop_LeLQM3Ow_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TfJB1iie_sendMessage);
}

void Heavy_PolyAmp::cUnop_tqTgM3jW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_Qn3AUSYC_sendMessage);
}

void Heavy_PolyAmp::cBinop_Qn3AUSYC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LeLQM3Ow, HV_BINOP_DIVIDE, 0, m, &cBinop_LeLQM3Ow_sendMessage);
}

void Heavy_PolyAmp::cBinop_JXT56bsQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_My9HsI9O_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RvT2nox5_sendMessage);
}

void Heavy_PolyAmp::cBinop_LeLQM3Ow_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JXT56bsQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_JXT56bsQ_sendMessage);
}

void Heavy_PolyAmp::cMsg_1f8yA1XY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_tqTgM3jW_sendMessage);
}

void Heavy_PolyAmp::cCast_TfJB1iie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1f8yA1XY_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_C63wu0CB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lDgwkJnD, HV_BINOP_MULTIPLY, 1, m, &cBinop_lDgwkJnD_sendMessage);
}

void Heavy_PolyAmp::cMsg_uofcUrsn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_C63wu0CB_sendMessage);
}

void Heavy_PolyAmp::cUnop_StXlUUfW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_yV1JeWV9_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_EoWRlxpL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_onJunwzw, HV_BINOP_MULTIPLY, 1, m, &cBinop_onJunwzw_sendMessage);
}

void Heavy_PolyAmp::cBinop_iy1Q3YCY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UZuMo7zm, 1, m, &cVar_UZuMo7zm_sendMessage);
}

void Heavy_PolyAmp::cBinop_NyxNHLC7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Qqa0FfrZ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_lDgwkJnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_E56KRgEr_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_onJunwzw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_psgtotXB_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_e05HSuiU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W4CJiyvv_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_A11glFvH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_zCPK2bBc_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_PmGEhrln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_A11glFvH_sendMessage);
}

void Heavy_PolyAmp::cBinop_759vylKR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KXfFJSYm_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_vUcMm8Ar_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PmGEhrln, HV_BINOP_MULTIPLY, 1, m, &cBinop_PmGEhrln_sendMessage);
}

void Heavy_PolyAmp::cBinop_Kwxr3k5m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_FUjhyX2p_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_D1AT0IM2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_mw6mC2kR_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4yC0R5zL_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Y75IzTbm_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_4OWrdFln_sendMessage);
}

void Heavy_PolyAmp::cMsg_JLrolvlH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_Kwxr3k5m_sendMessage);
}

void Heavy_PolyAmp::cMsg_VIjGy4Jy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_vUcMm8Ar_sendMessage);
}

void Heavy_PolyAmp::cSend_ioPNI6C4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GNa0hWKy_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_yV1JeWV9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VxVBbY2a_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_zCPK2bBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jcAg6lmf_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_LXkmncqz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1UDxV3uA, 1, m, &cVar_1UDxV3uA_sendMessage);
}

void Heavy_PolyAmp::cCast_OSF4Q7tI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yQON6py3, 0, m, &cVar_yQON6py3_sendMessage);
}

void Heavy_PolyAmp::cCast_My9HsI9O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_StXlUUfW_sendMessage);
}

void Heavy_PolyAmp::cCast_RvT2nox5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_v1dqvijF_sendMessage);
}

void Heavy_PolyAmp::cCast_Y75IzTbm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_NyxNHLC7, HV_BINOP_MULTIPLY, 0, m, &cBinop_NyxNHLC7_sendMessage);
}

void Heavy_PolyAmp::cCast_mw6mC2kR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_onJunwzw, HV_BINOP_MULTIPLY, 0, m, &cBinop_onJunwzw_sendMessage);
}

void Heavy_PolyAmp::cCast_4yC0R5zL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_759vylKR, HV_BINOP_MULTIPLY, 0, m, &cBinop_759vylKR_sendMessage);
}

void Heavy_PolyAmp::cCast_FUjhyX2p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_PolyAmp::cCast_D1AT0IM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lDgwkJnD, HV_BINOP_MULTIPLY, 0, m, &cBinop_lDgwkJnD_sendMessage);
}

void Heavy_PolyAmp::cCast_4OWrdFln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e05HSuiU, HV_BINOP_MULTIPLY, 0, m, &cBinop_e05HSuiU_sendMessage);
}

void Heavy_PolyAmp::cCast_yODXXxdm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_1UDxV3uA, 0, m, &cVar_1UDxV3uA_sendMessage);
}

void Heavy_PolyAmp::cCast_jOIcotPj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_UZuMo7zm, 0, m, &cVar_UZuMo7zm_sendMessage);
}

void Heavy_PolyAmp::cMsg_W4CJiyvv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_J5oYFgyA, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_KXfFJSYm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ukJv7fqE, 0, m, NULL);
}

void Heavy_PolyAmp::cVar_GlM382tv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_T9YhSHju, m);
}

void Heavy_PolyAmp::cIf_0KVbtt2T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_03d4oc4T_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_PolyAmp::cMsg_k4dxRXDn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_QIqdvnOY, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_m9ra4whI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_uOYeDF5E, 0, m, NULL);
}

void Heavy_PolyAmp::cVar_EVJsQiji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9pe4d3nM_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_lr7lFi0M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6l5nMcsc, HV_BINOP_MULTIPLY, 1, m, &cBinop_6l5nMcsc_sendMessage);
}

void Heavy_PolyAmp::cBinop_bhJPFAuM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qcUbYr7r_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cMsg_qcUbYr7r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_lr7lFi0M_sendMessage);
}

void Heavy_PolyAmp::cBinop_jpln23mb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P56btsQ0, HV_BINOP_MULTIPLY, 1, m, &cBinop_P56btsQ0_sendMessage);
}

void Heavy_PolyAmp::cBinop_oQUStOvT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fVFCQn2f, HV_BINOP_MULTIPLY, 1, m, &cBinop_fVFCQn2f_sendMessage);
}

void Heavy_PolyAmp::cVar_vcM1x9Rm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_WBhvhN2C_sendMessage);
}

void Heavy_PolyAmp::cVar_y4tescVP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MkJ0EX5B_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_zPQEYQqc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LAQlLw7U_sendMessage);
}

void Heavy_PolyAmp::cBinop_rCZFHp5p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ywPLxc8H_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_Gr6rUBhW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fWw0tBte, HV_BINOP_MULTIPLY, 1, m, &cBinop_fWw0tBte_sendMessage);
}

void Heavy_PolyAmp::cMsg_ywPLxc8H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Gr6rUBhW_sendMessage);
}

void Heavy_PolyAmp::cUnop_dV9DKwcH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_p9w93maM_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_lmt8jYyn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EVJsQiji, 1, m, &cVar_EVJsQiji_sendMessage);
}

void Heavy_PolyAmp::cBinop_rz5cp5ia_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_lmt8jYyn_sendMessage);
}

void Heavy_PolyAmp::cVar_l9q82HcZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_WC7fyoVf_sendMessage);
}

void Heavy_PolyAmp::cBinop_8Bn94F4q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_FbggKGtW_sendMessage);
}

void Heavy_PolyAmp::cBinop_WBhvhN2C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_8Bn94F4q_sendMessage);
}

void Heavy_PolyAmp::cBinop_E2im5Nwk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5IVXwTxO_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_WC7fyoVf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_E2im5Nwk_sendMessage);
}

void Heavy_PolyAmp::cBinop_qedyHNzy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Zb7QhlBl_sendMessage);
}

void Heavy_PolyAmp::cBinop_Zb7QhlBl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LZ6PZuXR, HV_BINOP_MULTIPLY, 1, m, &cBinop_LZ6PZuXR_sendMessage);
}

void Heavy_PolyAmp::cUnop_dXu61Spv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Ow7bUrqO_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cMsg_cw46r3iV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_0zPDrpws_sendMessage);
}

void Heavy_PolyAmp::cSystem_0zPDrpws_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wEy5aFBw, HV_BINOP_DIVIDE, 1, m, &cBinop_wEy5aFBw_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_6ZCH3W2H_sendMessage);
}

void Heavy_PolyAmp::cUnop_kmDeYcKr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_kUGJcPm8_sendMessage);
}

void Heavy_PolyAmp::cBinop_kUGJcPm8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_wEy5aFBw, HV_BINOP_DIVIDE, 0, m, &cBinop_wEy5aFBw_sendMessage);
}

void Heavy_PolyAmp::cBinop_8ptjUBLi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_nZAr6sEc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zgudclzB_sendMessage);
}

void Heavy_PolyAmp::cBinop_wEy5aFBw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8ptjUBLi, HV_BINOP_MULTIPLY, 1, m, &cBinop_8ptjUBLi_sendMessage);
}

void Heavy_PolyAmp::cMsg_HeAEFSKu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_kmDeYcKr_sendMessage);
}

void Heavy_PolyAmp::cCast_6ZCH3W2H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HeAEFSKu_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_Yn5N31L9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8ptjUBLi, HV_BINOP_MULTIPLY, 0, m, &cBinop_8ptjUBLi_sendMessage);
}

void Heavy_PolyAmp::cBinop_zPQEYQqc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_Yn5N31L9_sendMessage);
}

void Heavy_PolyAmp::cBinop_vKQJUZTi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_cbOISVxE_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_LZ6PZuXR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m9ra4whI_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_fVFCQn2f_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_k4dxRXDn_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_6l5nMcsc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dKLoBPTB_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_xvVRynuw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_vKQJUZTi_sendMessage);
}

void Heavy_PolyAmp::cBinop_P56btsQ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9tpp4pcA_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_fWw0tBte_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_h3OZ67Wt_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_FbggKGtW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iAx6HpJi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cL7G6gmj_sendMessage);
}

void Heavy_PolyAmp::cBinop_39qAGZ5F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_S5KnndYz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_x1PmeYdS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dKc4uXSt_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PrWRFzTz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PFkF24lx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SJNoyMXT_sendMessage);
}

void Heavy_PolyAmp::cBinop_pWrmPaQ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xvVRynuw, HV_BINOP_MULTIPLY, 1, m, &cBinop_xvVRynuw_sendMessage);
}

void Heavy_PolyAmp::cMsg_5IVXwTxO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_pWrmPaQ2_sendMessage);
}

void Heavy_PolyAmp::cMsg_9pe4d3nM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_39qAGZ5F_sendMessage);
}

void Heavy_PolyAmp::cMsg_FAeSKdGX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_I1sRUf5j, HV_BINOP_POW, 0, m, &cBinop_I1sRUf5j_sendMessage);
}

void Heavy_PolyAmp::cBinop_I1sRUf5j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_5is7UtJJ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_Ow7bUrqO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_i0qimoTb_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_5is7UtJJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_6yX3BOdy_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_p9w93maM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NM41Vi5y_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_cbOISVxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0S20hMEZ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_S5KnndYz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_PolyAmp::cCast_dKc4uXSt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fVFCQn2f, HV_BINOP_MULTIPLY, 0, m, &cBinop_fVFCQn2f_sendMessage);
}

void Heavy_PolyAmp::cCast_PrWRFzTz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_fWw0tBte, HV_BINOP_MULTIPLY, 0, m, &cBinop_fWw0tBte_sendMessage);
}

void Heavy_PolyAmp::cCast_PFkF24lx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_P56btsQ0, HV_BINOP_MULTIPLY, 0, m, &cBinop_P56btsQ0_sendMessage);
}

void Heavy_PolyAmp::cCast_x1PmeYdS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_6l5nMcsc, HV_BINOP_MULTIPLY, 0, m, &cBinop_6l5nMcsc_sendMessage);
}

void Heavy_PolyAmp::cCast_SJNoyMXT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_LZ6PZuXR, HV_BINOP_MULTIPLY, 0, m, &cBinop_LZ6PZuXR_sendMessage);
}

void Heavy_PolyAmp::cCast_5jFLvkoS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y4tescVP, 0, m, &cVar_y4tescVP_sendMessage);
}

void Heavy_PolyAmp::cCast_q3qVxC90_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vcM1x9Rm, 0, m, &cVar_vcM1x9Rm_sendMessage);
}

void Heavy_PolyAmp::cCast_oo30sCl3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y4tescVP, 0, m, &cVar_y4tescVP_sendMessage);
}

void Heavy_PolyAmp::cCast_m10Fb5lR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_l9q82HcZ, 1, m, &cVar_l9q82HcZ_sendMessage);
}

void Heavy_PolyAmp::cCast_1lYPQZt4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_vcM1x9Rm, 0, m, &cVar_vcM1x9Rm_sendMessage);
}

void Heavy_PolyAmp::cCast_eGvodiZa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y4tescVP, 0, m, &cVar_y4tescVP_sendMessage);
}

void Heavy_PolyAmp::cCast_zgudclzB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_dV9DKwcH_sendMessage);
}

void Heavy_PolyAmp::cCast_nZAr6sEc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_dXu61Spv_sendMessage);
}

void Heavy_PolyAmp::cCast_iAx6HpJi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I1sRUf5j, HV_BINOP_POW, 1, m, &cBinop_I1sRUf5j_sendMessage);
}

void Heavy_PolyAmp::cCast_cL7G6gmj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FAeSKdGX_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_LAQlLw7U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EVJsQiji, 0, m, &cVar_EVJsQiji_sendMessage);
}

void Heavy_PolyAmp::cCast_MkJ0EX5B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_l9q82HcZ, 0, m, &cVar_l9q82HcZ_sendMessage);
}

void Heavy_PolyAmp::cMsg_h3OZ67Wt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Q0WoCJFU, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_9tpp4pcA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_XWFfnmpl, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_dKLoBPTB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_jSme1jIA, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_0MUIxQd7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_GDjbN1Ie, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_ql2jIfBQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_673zDajK, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_n6SQfw7F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_UiSy0dvN, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_FD3KqIJw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_lJutri6C, 0, m, NULL);
}

void Heavy_PolyAmp::cBinop_dB6NgZoH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1d37XJGV, HV_BINOP_MULTIPLY, 0, m, &cBinop_1d37XJGV_sendMessage);
}

void Heavy_PolyAmp::cBinop_5dIc2u8x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_dB6NgZoH_sendMessage);
}

void Heavy_PolyAmp::cBinop_TPAMNzvG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_k5Ey54Nn, 1, m, &cVar_k5Ey54Nn_sendMessage);
}

void Heavy_PolyAmp::cVar_TBdLSXV1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M6pY6NIR_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_5dIc2u8x_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nc0jJuxW_sendMessage);
}

void Heavy_PolyAmp::cBinop_8Cqskdjk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4mlyR4F0, HV_BINOP_MULTIPLY, 1, m, &cBinop_4mlyR4F0_sendMessage);
}

void Heavy_PolyAmp::cMsg_x4wquDvm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_8Cqskdjk_sendMessage);
}

void Heavy_PolyAmp::cBinop_rW490An9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Wa4w5FU5, HV_BINOP_MULTIPLY, 1, m, &cBinop_Wa4w5FU5_sendMessage);
}

void Heavy_PolyAmp::cBinop_WslYuv0D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_rW490An9_sendMessage);
}

void Heavy_PolyAmp::cMsg_tXtt20KB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_WslYuv0D_sendMessage);
}

void Heavy_PolyAmp::cBinop_4UEjDEYP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HdtdZFAQ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_V9trOKzU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_4UEjDEYP_sendMessage);
}

void Heavy_PolyAmp::cUnop_ZohXgh8J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_QfNtmRay_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cVar_SUeDhqFe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_V9trOKzU_sendMessage);
}

void Heavy_PolyAmp::cBinop_arx2YO3u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H7ckITpb, HV_BINOP_MULTIPLY, 1, m, &cBinop_H7ckITpb_sendMessage);
}

void Heavy_PolyAmp::cBinop_VXbHV7RT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_arx2YO3u_sendMessage);
}

void Heavy_PolyAmp::cMsg_GvVdw8is_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_VXbHV7RT_sendMessage);
}

void Heavy_PolyAmp::cUnop_4IUvQjwd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Bwgijzbb_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_LCceCYeb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H2HA8iTD, HV_BINOP_MULTIPLY, 1, m, &cBinop_H2HA8iTD_sendMessage);
}

void Heavy_PolyAmp::cBinop_rBEz6y1I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9silR2NM, HV_BINOP_MULTIPLY, 1, m, &cBinop_9silR2NM_sendMessage);
}

void Heavy_PolyAmp::cMsg_EsLDTfJv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_rBEz6y1I_sendMessage);
}

void Heavy_PolyAmp::cMsg_0k3mh7PM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JQkpiZIL_sendMessage);
}

void Heavy_PolyAmp::cSystem_JQkpiZIL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cwafffTp, HV_BINOP_DIVIDE, 1, m, &cBinop_cwafffTp_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VjRtUQ8n_sendMessage);
}

void Heavy_PolyAmp::cUnop_XBu9nOtL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_ZgNiGSZG_sendMessage);
}

void Heavy_PolyAmp::cBinop_1d37XJGV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_GJNWwwzT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Eiu1LlqW_sendMessage);
}

void Heavy_PolyAmp::cBinop_ZgNiGSZG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cwafffTp, HV_BINOP_DIVIDE, 0, m, &cBinop_cwafffTp_sendMessage);
}

void Heavy_PolyAmp::cBinop_cwafffTp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1d37XJGV, HV_BINOP_MULTIPLY, 1, m, &cBinop_1d37XJGV_sendMessage);
}

void Heavy_PolyAmp::cMsg_Y7PVS8mu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_XBu9nOtL_sendMessage);
}

void Heavy_PolyAmp::cCast_VjRtUQ8n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Y7PVS8mu_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cVar_k5Ey54Nn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_T5dXb2fP_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_Wa4w5FU5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B2woFxaX_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_H7ckITpb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FD3KqIJw_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_4mlyR4F0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_n6SQfw7F_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_IaHhd8p8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_f53KHfSp_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_I5FXsvv5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_IaHhd8p8_sendMessage);
}

void Heavy_PolyAmp::cBinop_9silR2NM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ql2jIfBQ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_H2HA8iTD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0MUIxQd7_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_bAZkBxKv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I5FXsvv5, HV_BINOP_MULTIPLY, 1, m, &cBinop_I5FXsvv5_sendMessage);
}

void Heavy_PolyAmp::cBinop_yFMvrxc9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_usQb2vCG_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZlRBttoM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_w8kc7k6F_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_DBOMfrb8_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oJtLlLJl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZAQccZ2i_sendMessage);
}

void Heavy_PolyAmp::cMsg_T5dXb2fP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_yFMvrxc9_sendMessage);
}

void Heavy_PolyAmp::cMsg_HdtdZFAQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_bAZkBxKv_sendMessage);
}

void Heavy_PolyAmp::cSend_f53KHfSp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_jvwIPJZx_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_QfNtmRay_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_oN9mUqCh_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_Bwgijzbb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_7AFdywhz_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_ZlRBttoM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9silR2NM, HV_BINOP_MULTIPLY, 0, m, &cBinop_9silR2NM_sendMessage);
}

void Heavy_PolyAmp::cCast_DBOMfrb8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Wa4w5FU5, HV_BINOP_MULTIPLY, 0, m, &cBinop_Wa4w5FU5_sendMessage);
}

void Heavy_PolyAmp::cCast_usQb2vCG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_PolyAmp::cCast_oJtLlLJl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4mlyR4F0, HV_BINOP_MULTIPLY, 0, m, &cBinop_4mlyR4F0_sendMessage);
}

void Heavy_PolyAmp::cCast_w8kc7k6F_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H2HA8iTD, HV_BINOP_MULTIPLY, 0, m, &cBinop_H2HA8iTD_sendMessage);
}

void Heavy_PolyAmp::cCast_ZAQccZ2i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H7ckITpb, HV_BINOP_MULTIPLY, 0, m, &cBinop_H7ckITpb_sendMessage);
}

void Heavy_PolyAmp::cCast_kLoHHpjI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TBdLSXV1, 0, m, &cVar_TBdLSXV1_sendMessage);
}

void Heavy_PolyAmp::cCast_ohZwYumL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SUeDhqFe, 1, m, &cVar_SUeDhqFe_sendMessage);
}

void Heavy_PolyAmp::cCast_nc0jJuxW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_k5Ey54Nn, 0, m, &cVar_k5Ey54Nn_sendMessage);
}

void Heavy_PolyAmp::cCast_M6pY6NIR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SUeDhqFe, 0, m, &cVar_SUeDhqFe_sendMessage);
}

void Heavy_PolyAmp::cCast_Eiu1LlqW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_4IUvQjwd_sendMessage);
}

void Heavy_PolyAmp::cCast_GJNWwwzT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_ZohXgh8J_sendMessage);
}

void Heavy_PolyAmp::cMsg_B2woFxaX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_eHJ5P3LP, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_DIIS45Y9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_JEp2zsve, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_XBiEQAns_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_8IeX9sUC, 0, m, NULL);
}

void Heavy_PolyAmp::cBinop_xi1dYPFh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z04wfv46, HV_BINOP_MULTIPLY, 0, m, &cBinop_Z04wfv46_sendMessage);
}

void Heavy_PolyAmp::cBinop_raDLCsZ0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_xi1dYPFh_sendMessage);
}

void Heavy_PolyAmp::cMsg_XRGq9q7h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2e1n1WEP_sendMessage);
}

void Heavy_PolyAmp::cSystem_2e1n1WEP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_flsgfy1K, HV_BINOP_DIVIDE, 1, m, &cBinop_flsgfy1K_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xSapQSo3_sendMessage);
}

void Heavy_PolyAmp::cUnop_qwLbQUzH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_EOomdegz_sendMessage);
}

void Heavy_PolyAmp::cBinop_EOomdegz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_flsgfy1K, HV_BINOP_DIVIDE, 0, m, &cBinop_flsgfy1K_sendMessage);
}

void Heavy_PolyAmp::cBinop_Z04wfv46_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bdCxz17Y_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YZi2bt0s_sendMessage);
}

void Heavy_PolyAmp::cBinop_flsgfy1K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Z04wfv46, HV_BINOP_MULTIPLY, 1, m, &cBinop_Z04wfv46_sendMessage);
}

void Heavy_PolyAmp::cMsg_u781xDFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_qwLbQUzH_sendMessage);
}

void Heavy_PolyAmp::cCast_xSapQSo3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_u781xDFq_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cVar_05AHkqds_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_njKuDmyS_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cVar_OHQNvNHJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iBPuGqYV_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_raDLCsZ0_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4rPoJAqA_sendMessage);
}

void Heavy_PolyAmp::cBinop_c4yikH2a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lRInT9WP, HV_BINOP_MULTIPLY, 1, m, &cBinop_lRInT9WP_sendMessage);
}

void Heavy_PolyAmp::cBinop_lRInT9WP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aWOFe2qY, HV_BINOP_ADD, 0, m, &cBinop_aWOFe2qY_sendMessage);
}

void Heavy_PolyAmp::cBinop_JBeuwrLn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dCDWtd3V, HV_BINOP_MULTIPLY, 1, m, &cBinop_dCDWtd3V_sendMessage);
}

void Heavy_PolyAmp::cBinop_J7mqQuj4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JBeuwrLn, HV_BINOP_MULTIPLY, 0, m, &cBinop_JBeuwrLn_sendMessage);
}

void Heavy_PolyAmp::cBinop_aWOFe2qY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J7mqQuj4, HV_BINOP_ADD, 0, m, &cBinop_J7mqQuj4_sendMessage);
}

void Heavy_PolyAmp::cBinop_lkYDrd38_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_aWOFe2qY, HV_BINOP_ADD, 1, m, &cBinop_aWOFe2qY_sendMessage);
}

void Heavy_PolyAmp::cBinop_0K0Eu011_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_c4yikH2a_sendMessage);
}

void Heavy_PolyAmp::cCast_lewP5rid_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_0K0Eu011_sendMessage);
}

void Heavy_PolyAmp::cCast_6qRXrC0R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_lkYDrd38_sendMessage);
}

void Heavy_PolyAmp::cCast_FlAdGO6S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JBeuwrLn, HV_BINOP_MULTIPLY, 1, m, &cBinop_JBeuwrLn_sendMessage);
}

void Heavy_PolyAmp::cBinop_WBMjMqGm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_XOc8BbDJ_sendMessage);
}

void Heavy_PolyAmp::cBinop_MUfk4dYf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_WBMjMqGm_sendMessage);
}

void Heavy_PolyAmp::cVar_g5yc2XT5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_AiJqNQ6s_sendMessage);
}

void Heavy_PolyAmp::cBinop_uXjOPylL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_1dcRnHaQ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_AiJqNQ6s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_uXjOPylL_sendMessage);
}

void Heavy_PolyAmp::cBinop_CcN5x9tD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WVKIvQlR, HV_BINOP_ADD, 0, m, &cBinop_WVKIvQlR_sendMessage);
}

void Heavy_PolyAmp::cBinop_M1o0fwye_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QjSSWUpz, HV_BINOP_MULTIPLY, 1, m, &cBinop_QjSSWUpz_sendMessage);
}

void Heavy_PolyAmp::cBinop_WVKIvQlR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_M1o0fwye_sendMessage);
}

void Heavy_PolyAmp::cBinop_3jDmlTTO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CcN5x9tD, HV_BINOP_MULTIPLY, 1, m, &cBinop_CcN5x9tD_sendMessage);
}

void Heavy_PolyAmp::cBinop_8D6IOFxL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WVKIvQlR, HV_BINOP_ADD, 1, m, &cBinop_WVKIvQlR_sendMessage);
}

void Heavy_PolyAmp::cCast_WjcuuICS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_3jDmlTTO_sendMessage);
}

void Heavy_PolyAmp::cCast_dtF01bMg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_8D6IOFxL_sendMessage);
}

void Heavy_PolyAmp::cUnop_RjLAgDml_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_boKQHwZm_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cUnop_vi5YUPuu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_PZgnKZFb_sendMessage);
}

void Heavy_PolyAmp::cUnop_ywXprzhz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_RGKV0fwx_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_zU1r8WuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sqkO82Wx, HV_BINOP_ADD, 0, m, &cBinop_sqkO82Wx_sendMessage);
}

void Heavy_PolyAmp::cBinop_X9Mg3ix3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sqkO82Wx, HV_BINOP_ADD, 1, m, &cBinop_sqkO82Wx_sendMessage);
}

void Heavy_PolyAmp::cBinop_XAzbF4TQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_05AHkqds, 1, m, &cVar_05AHkqds_sendMessage);
}

void Heavy_PolyAmp::cBinop_sqkO82Wx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XAzbF4TQ, HV_BINOP_ADD, 0, m, &cBinop_XAzbF4TQ_sendMessage);
}

void Heavy_PolyAmp::cBinop_IPi1AOy3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zU1r8WuP, HV_BINOP_MULTIPLY, 1, m, &cBinop_zU1r8WuP_sendMessage);
}

void Heavy_PolyAmp::cCast_lrwjlBkz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_X9Mg3ix3_sendMessage);
}

void Heavy_PolyAmp::cCast_oDUBj9h6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_IPi1AOy3_sendMessage);
}

void Heavy_PolyAmp::cVar_cNPU2qBe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_MUfk4dYf_sendMessage);
}

void Heavy_PolyAmp::cBinop_V95Pkchr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1lu43eja, HV_BINOP_MULTIPLY, 1, m, &cBinop_1lu43eja_sendMessage);
}

void Heavy_PolyAmp::cBinop_lUgqvzLi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J34Loh2V, HV_BINOP_MULTIPLY, 1, m, &cBinop_J34Loh2V_sendMessage);
}

void Heavy_PolyAmp::cBinop_1lu43eja_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H1cYwAx1, HV_BINOP_ADD, 0, m, &cBinop_H1cYwAx1_sendMessage);
}

void Heavy_PolyAmp::cBinop_A8WmUdvW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H1cYwAx1, HV_BINOP_ADD, 1, m, &cBinop_H1cYwAx1_sendMessage);
}

void Heavy_PolyAmp::cBinop_H1cYwAx1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_rPNLcDnn, HV_BINOP_SUBTRACT, 0, m, &cBinop_rPNLcDnn_sendMessage);
}

void Heavy_PolyAmp::cBinop_rPNLcDnn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lUgqvzLi, HV_BINOP_MULTIPLY, 0, m, &cBinop_lUgqvzLi_sendMessage);
}

void Heavy_PolyAmp::cBinop_QNwPyfI8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_V95Pkchr_sendMessage);
}

void Heavy_PolyAmp::cCast_2MOgvh6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_A8WmUdvW_sendMessage);
}

void Heavy_PolyAmp::cCast_QrRamZQ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lUgqvzLi, HV_BINOP_MULTIPLY, 1, m, &cBinop_lUgqvzLi_sendMessage);
}

void Heavy_PolyAmp::cCast_WLWPdi8m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_QNwPyfI8_sendMessage);
}

void Heavy_PolyAmp::cBinop_JdvecktE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VlEjGwSx, HV_BINOP_ADD, 0, m, &cBinop_VlEjGwSx_sendMessage);
}

void Heavy_PolyAmp::cBinop_hOJ42UOp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_VlEjGwSx, HV_BINOP_ADD, 1, m, &cBinop_VlEjGwSx_sendMessage);
}

void Heavy_PolyAmp::cBinop_VlEjGwSx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XIUgNpNc, HV_BINOP_SUBTRACT, 0, m, &cBinop_XIUgNpNc_sendMessage);
}

void Heavy_PolyAmp::cBinop_6bybQIce_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JdvecktE, HV_BINOP_MULTIPLY, 1, m, &cBinop_JdvecktE_sendMessage);
}

void Heavy_PolyAmp::cBinop_XIUgNpNc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0HeraZ0r, HV_BINOP_MULTIPLY, 1, m, &cBinop_0HeraZ0r_sendMessage);
}

void Heavy_PolyAmp::cCast_ERgeWa9t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_6bybQIce_sendMessage);
}

void Heavy_PolyAmp::cCast_T9fi5ysT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_hOJ42UOp_sendMessage);
}

void Heavy_PolyAmp::cBinop_luciHZ5L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8MGQdihT, HV_BINOP_MULTIPLY, 1, m, &cBinop_8MGQdihT_sendMessage);
}

void Heavy_PolyAmp::cBinop_bcRqY34u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BKMbFx6a, HV_BINOP_ADD, 0, m, &cBinop_BKMbFx6a_sendMessage);
}

void Heavy_PolyAmp::cBinop_4Ovh4sLT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bcRqY34u, HV_BINOP_MULTIPLY, 1, m, &cBinop_bcRqY34u_sendMessage);
}

void Heavy_PolyAmp::cBinop_8MGQdihT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nt6Nw6h6, HV_BINOP_MULTIPLY, 1, m, &cBinop_nt6Nw6h6_sendMessage);
}

void Heavy_PolyAmp::cBinop_bMjU1Rej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_4Ovh4sLT_sendMessage);
}

void Heavy_PolyAmp::cBinop_BKMbFx6a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_8MGQdihT, HV_BINOP_MULTIPLY, 0, m, &cBinop_8MGQdihT_sendMessage);
}

void Heavy_PolyAmp::cBinop_C8NyNTho_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BKMbFx6a, HV_BINOP_ADD, 1, m, &cBinop_BKMbFx6a_sendMessage);
}

void Heavy_PolyAmp::cCast_xBle3osy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_C8NyNTho_sendMessage);
}

void Heavy_PolyAmp::cCast_NHNIsdxZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_bMjU1Rej_sendMessage);
}

void Heavy_PolyAmp::cCast_NqGAjQoz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_luciHZ5L_sendMessage);
}

void Heavy_PolyAmp::cBinop_0HeraZ0r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_epR9WGVv_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_yRsd19JN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_eaBH4ywc_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_nt6Nw6h6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DIIS45Y9_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_QjSSWUpz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9zBfnzGx_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_1aSbXZCD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_FUr6PPtJ_sendMessage);
}

void Heavy_PolyAmp::cBinop_J34Loh2V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iqcT0jU0_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_dCDWtd3V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_XBiEQAns_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_FUr6PPtJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PoCwH4iS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_hUhuRKM2_sendMessage);
}

void Heavy_PolyAmp::cBinop_PZgnKZFb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yRsd19JN, HV_BINOP_MULTIPLY, 1, m, &cBinop_yRsd19JN_sendMessage);
}

void Heavy_PolyAmp::cBinop_XOc8BbDJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Nu6n7W5u_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_B82EW8BZ_sendMessage);
}

void Heavy_PolyAmp::cBinop_m4eFjHrb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1aSbXZCD, HV_BINOP_MULTIPLY, 1, m, &cBinop_1aSbXZCD_sendMessage);
}

void Heavy_PolyAmp::cBinop_6Ox1hEAP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NWC0xeh3_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JTSwpM4u_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tmknoW2M_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_d1jbvTzk_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_f9D9ybHG_sendMessage);
}

void Heavy_PolyAmp::cMsg_F64UDyzF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_u0kKGP8C, HV_BINOP_POW, 0, m, &cBinop_u0kKGP8C_sendMessage);
}

void Heavy_PolyAmp::cMsg_1dcRnHaQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_m4eFjHrb_sendMessage);
}

void Heavy_PolyAmp::cMsg_njKuDmyS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_6Ox1hEAP_sendMessage);
}

void Heavy_PolyAmp::cBinop_u0kKGP8C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_07K01y5T_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Dfdhng3m_sendMessage);
}

void Heavy_PolyAmp::cSend_rtjmH6xb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_etJN4ccE_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_eaBH4ywc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_hBPZ3iB6_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_RGKV0fwx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_GMqLDv7y_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_boKQHwZm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_KcJn0Jqn_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_DCvt7kQU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_PolyAmp::cCast_XmbkJVTN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OHQNvNHJ, 0, m, &cVar_OHQNvNHJ_sendMessage);
}

void Heavy_PolyAmp::cCast_jJiAybWP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_g5yc2XT5, 1, m, &cVar_g5yc2XT5_sendMessage);
}

void Heavy_PolyAmp::cCast_1mRGgZFj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OHQNvNHJ, 0, m, &cVar_OHQNvNHJ_sendMessage);
}

void Heavy_PolyAmp::cCast_lWscc7hD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cNPU2qBe, 0, m, &cVar_cNPU2qBe_sendMessage);
}

void Heavy_PolyAmp::cCast_PoCwH4iS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_DCvt7kQU_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_hUhuRKM2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yRsd19JN, HV_BINOP_MULTIPLY, 0, m, &cBinop_yRsd19JN_sendMessage);
}

void Heavy_PolyAmp::cCast_Dfdhng3m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_vi5YUPuu_sendMessage);
}

void Heavy_PolyAmp::cCast_07K01y5T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_rtjmH6xb_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_B82EW8BZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_F64UDyzF_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_Nu6n7W5u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_u0kKGP8C, HV_BINOP_POW, 1, m, &cBinop_u0kKGP8C_sendMessage);
}

void Heavy_PolyAmp::cCast_JTSwpM4u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_QjSSWUpz, HV_BINOP_MULTIPLY, 0, m, &cBinop_QjSSWUpz_sendMessage);
}

void Heavy_PolyAmp::cCast_f9D9ybHG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_dCDWtd3V, HV_BINOP_MULTIPLY, 0, m, &cBinop_dCDWtd3V_sendMessage);
}

void Heavy_PolyAmp::cCast_d1jbvTzk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_nt6Nw6h6, HV_BINOP_MULTIPLY, 0, m, &cBinop_nt6Nw6h6_sendMessage);
}

void Heavy_PolyAmp::cCast_NWC0xeh3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0HeraZ0r, HV_BINOP_MULTIPLY, 0, m, &cBinop_0HeraZ0r_sendMessage);
}

void Heavy_PolyAmp::cCast_tmknoW2M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J34Loh2V, HV_BINOP_MULTIPLY, 0, m, &cBinop_J34Loh2V_sendMessage);
}

void Heavy_PolyAmp::cCast_iBPuGqYV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_g5yc2XT5, 0, m, &cVar_g5yc2XT5_sendMessage);
}

void Heavy_PolyAmp::cCast_4rPoJAqA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_05AHkqds, 0, m, &cVar_05AHkqds_sendMessage);
}

void Heavy_PolyAmp::cCast_bdCxz17Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_ywXprzhz_sendMessage);
}

void Heavy_PolyAmp::cCast_YZi2bt0s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_RjLAgDml_sendMessage);
}

void Heavy_PolyAmp::cCast_RJzdB4p0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OHQNvNHJ, 0, m, &cVar_OHQNvNHJ_sendMessage);
}

void Heavy_PolyAmp::cCast_I4c7WOgi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_cNPU2qBe, 0, m, &cVar_cNPU2qBe_sendMessage);
}

void Heavy_PolyAmp::cMsg_iqcT0jU0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_b59Ql9Mh, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_9zBfnzGx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_loIGPmkN, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_epR9WGVv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_34lt9XqA, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_E0xgU7MZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_bZLpEDHQ_sendMessage);
}

void Heavy_PolyAmp::cSystem_bZLpEDHQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 4.0f, 0, m, &cBinop_B739FEHX_sendMessage);
}

void Heavy_PolyAmp::cVar_eP6fsF3O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_rzMDvLJP_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_ZBNC1j9w_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 10.0f, 0, m, &cBinop_wgKoEBdY_sendMessage);
}

void Heavy_PolyAmp::cMsg_NPDQJs83_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_7B6pcdzE, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_iTpfvt4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_9eHu1bhF, 0, m, NULL);
}

void Heavy_PolyAmp::cBinop_4mSqbhpO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Yyw5QzeF, HV_BINOP_MULTIPLY, 1, m, &cBinop_Yyw5QzeF_sendMessage);
}

void Heavy_PolyAmp::cBinop_x2nPoMsQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_4mSqbhpO_sendMessage);
}

void Heavy_PolyAmp::cMsg_3kikdgqO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_x2nPoMsQ_sendMessage);
}

void Heavy_PolyAmp::cBinop_3gk31KQD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0FxSzsrT, 1, m, &cVar_0FxSzsrT_sendMessage);
}

void Heavy_PolyAmp::cUnop_NF0Ax89H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_lZtcTdrb_sendMessage);
}

void Heavy_PolyAmp::cMsg_G67GE6MK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_eiEr5HYv_sendMessage);
}

void Heavy_PolyAmp::cSystem_eiEr5HYv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CWYIRmnj, HV_BINOP_DIVIDE, 1, m, &cBinop_CWYIRmnj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lk2JxnSJ_sendMessage);
}

void Heavy_PolyAmp::cBinop_78MSBNbV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dRLP9hTY_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tDh8fGFo_sendMessage);
}

void Heavy_PolyAmp::cBinop_lZtcTdrb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CWYIRmnj, HV_BINOP_DIVIDE, 0, m, &cBinop_CWYIRmnj_sendMessage);
}

void Heavy_PolyAmp::cBinop_CWYIRmnj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_78MSBNbV, HV_BINOP_MULTIPLY, 1, m, &cBinop_78MSBNbV_sendMessage);
}

void Heavy_PolyAmp::cMsg_YOqycuw3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_NF0Ax89H_sendMessage);
}

void Heavy_PolyAmp::cCast_lk2JxnSJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YOqycuw3_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cVar_0FxSzsrT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jUklf3ZP_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cUnop_DDYVdeyu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_5kzC7Ots_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_xzhH696s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WPPsJRZk, HV_BINOP_MULTIPLY, 1, m, &cBinop_WPPsJRZk_sendMessage);
}

void Heavy_PolyAmp::cMsg_gCC7qJDm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_xzhH696s_sendMessage);
}

void Heavy_PolyAmp::cBinop_yG6oHdAL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ba7aD4Rn, HV_BINOP_MULTIPLY, 1, m, &cBinop_ba7aD4Rn_sendMessage);
}

void Heavy_PolyAmp::cBinop_clOvhWhk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_78MSBNbV, HV_BINOP_MULTIPLY, 0, m, &cBinop_78MSBNbV_sendMessage);
}

void Heavy_PolyAmp::cBinop_rjEe4vaF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_clOvhWhk_sendMessage);
}

void Heavy_PolyAmp::cVar_ezLnrbDa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pvIstSL9_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_rjEe4vaF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mbOgzd5V_sendMessage);
}

void Heavy_PolyAmp::cVar_evdtCtsg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_CZms9A2G_sendMessage);
}

void Heavy_PolyAmp::cBinop_USmUwuiC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e2pyZFCQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_e2pyZFCQ_sendMessage);
}

void Heavy_PolyAmp::cBinop_9YahShfk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_USmUwuiC_sendMessage);
}

void Heavy_PolyAmp::cMsg_qDfmbIZn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_9YahShfk_sendMessage);
}

void Heavy_PolyAmp::cBinop_WFvvbgtZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nvX1r4Zf_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_CZms9A2G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_WFvvbgtZ_sendMessage);
}

void Heavy_PolyAmp::cBinop_GPssd4CO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UpNCZRf1, HV_BINOP_MULTIPLY, 1, m, &cBinop_UpNCZRf1_sendMessage);
}

void Heavy_PolyAmp::cMsg_2LOividt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_GPssd4CO_sendMessage);
}

void Heavy_PolyAmp::cUnop_3ldJobzg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_2tZmGST3_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_ba7aD4Rn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xa2m9QSx_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_Yyw5QzeF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PsuotCrD_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_WPPsJRZk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NPDQJs83_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_TzcISoZK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ztYRNYQ4_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_e2pyZFCQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_r49dfIgL_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_UpNCZRf1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_iTpfvt4P_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_iRNeqdPc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_TzcISoZK_sendMessage);
}

void Heavy_PolyAmp::cBinop_UAfXEZb8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_E4c8Fxq2_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_zsj3Id28_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_gS3au4uc_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_5UHrTmrx_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vMnrqAvK_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ReWP7hlR_sendMessage);
}

void Heavy_PolyAmp::cBinop_AhI79GrO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iRNeqdPc, HV_BINOP_MULTIPLY, 1, m, &cBinop_iRNeqdPc_sendMessage);
}

void Heavy_PolyAmp::cMsg_jUklf3ZP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_UAfXEZb8_sendMessage);
}

void Heavy_PolyAmp::cMsg_nvX1r4Zf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_AhI79GrO_sendMessage);
}

void Heavy_PolyAmp::cSend_ztYRNYQ4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0Wgl5NIZ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_5kzC7Ots_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_liAx6yrl_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_2tZmGST3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_E12kEIOY_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_tDh8fGFo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_3ldJobzg_sendMessage);
}

void Heavy_PolyAmp::cCast_dRLP9hTY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_DDYVdeyu_sendMessage);
}

void Heavy_PolyAmp::cCast_vMnrqAvK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WPPsJRZk, HV_BINOP_MULTIPLY, 0, m, &cBinop_WPPsJRZk_sendMessage);
}

void Heavy_PolyAmp::cCast_5UHrTmrx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Yyw5QzeF, HV_BINOP_MULTIPLY, 0, m, &cBinop_Yyw5QzeF_sendMessage);
}

void Heavy_PolyAmp::cCast_E4c8Fxq2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_PolyAmp::cCast_zsj3Id28_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_UpNCZRf1, HV_BINOP_MULTIPLY, 0, m, &cBinop_UpNCZRf1_sendMessage);
}

void Heavy_PolyAmp::cCast_gS3au4uc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ba7aD4Rn, HV_BINOP_MULTIPLY, 0, m, &cBinop_ba7aD4Rn_sendMessage);
}

void Heavy_PolyAmp::cCast_ReWP7hlR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_e2pyZFCQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_e2pyZFCQ_sendMessage);
}

void Heavy_PolyAmp::cCast_ZtprHwEQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_evdtCtsg, 1, m, &cVar_evdtCtsg_sendMessage);
}

void Heavy_PolyAmp::cCast_X85AeFdr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ezLnrbDa, 0, m, &cVar_ezLnrbDa_sendMessage);
}

void Heavy_PolyAmp::cCast_mbOgzd5V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0FxSzsrT, 0, m, &cVar_0FxSzsrT_sendMessage);
}

void Heavy_PolyAmp::cCast_pvIstSL9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_evdtCtsg, 0, m, &cVar_evdtCtsg_sendMessage);
}

void Heavy_PolyAmp::cMsg_r49dfIgL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_dit4mZoK, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_xa2m9QSx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_Lg54uYCr, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_PsuotCrD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_lvMM3Z6S, 0, m, NULL);
}

void Heavy_PolyAmp::cUnop_QvXS99iT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_U4ByPnua_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_FlVkvkXZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RoKz1RMH, 1, m, &cVar_RoKz1RMH_sendMessage);
}

void Heavy_PolyAmp::cBinop_60l8cO3m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_FlVkvkXZ_sendMessage);
}

void Heavy_PolyAmp::cVar_Gn4XGSPG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_AAanzOZD_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_tDg8ORVW_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Lu7kXQKw_sendMessage);
}

void Heavy_PolyAmp::cBinop_gNz2Aw9D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_uCWeVPg1_sendMessage);
}

void Heavy_PolyAmp::cBinop_uyhl1M9A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_gNz2Aw9D_sendMessage);
}

void Heavy_PolyAmp::cBinop_I9rlJ1ui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hdFBEgKM_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_wgEsxs2w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_I9rlJ1ui_sendMessage);
}

void Heavy_PolyAmp::cBinop_3kh3ZB3c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XnkMXOCQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_XnkMXOCQ_sendMessage);
}

void Heavy_PolyAmp::cBinop_VbOSaEJA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_QAISzCHW_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cMsg_QAISzCHW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_3kh3ZB3c_sendMessage);
}

void Heavy_PolyAmp::cBinop_EVdZSxFX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xMwYE0t2, HV_BINOP_MULTIPLY, 1, m, &cBinop_xMwYE0t2_sendMessage);
}

void Heavy_PolyAmp::cVar_0bbWAxbF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_wgEsxs2w_sendMessage);
}

void Heavy_PolyAmp::cUnop_TUija8cW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_iZVEwsAq_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cUnop_shg0cmU8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_VGZZDN3p_sendMessage);
}

void Heavy_PolyAmp::cMsg_xoYwG7Cv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_N9wQQRJw_sendMessage);
}

void Heavy_PolyAmp::cSystem_N9wQQRJw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zuupEdKB, HV_BINOP_DIVIDE, 1, m, &cBinop_zuupEdKB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_3CL3T9Cj_sendMessage);
}

void Heavy_PolyAmp::cBinop_kfjI0Fcj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KYQpikcv_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZGg09hAZ_sendMessage);
}

void Heavy_PolyAmp::cBinop_VGZZDN3p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_zuupEdKB, HV_BINOP_DIVIDE, 0, m, &cBinop_zuupEdKB_sendMessage);
}

void Heavy_PolyAmp::cBinop_zuupEdKB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kfjI0Fcj, HV_BINOP_MULTIPLY, 1, m, &cBinop_kfjI0Fcj_sendMessage);
}

void Heavy_PolyAmp::cMsg_i6b9VoYq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_shg0cmU8_sendMessage);
}

void Heavy_PolyAmp::cCast_3CL3T9Cj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_i6b9VoYq_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cVar_RoKz1RMH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W5TLe4MR_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_MgsW1dYw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_2TphXcOY_sendMessage);
}

void Heavy_PolyAmp::cBinop_2TphXcOY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BLNObOjm, HV_BINOP_MULTIPLY, 1, m, &cBinop_BLNObOjm_sendMessage);
}

void Heavy_PolyAmp::cBinop_ILEph09H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bgimV9Hy, HV_BINOP_MULTIPLY, 1, m, &cBinop_bgimV9Hy_sendMessage);
}

void Heavy_PolyAmp::cVar_37aqjJ5t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_uyhl1M9A_sendMessage);
}

void Heavy_PolyAmp::cBinop_gCllw08x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kfjI0Fcj, HV_BINOP_MULTIPLY, 0, m, &cBinop_kfjI0Fcj_sendMessage);
}

void Heavy_PolyAmp::cBinop_tDg8ORVW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_gCllw08x_sendMessage);
}

void Heavy_PolyAmp::cBinop_Xj9JEnZ3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Ij3XGN9w_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_03MZbU9t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FvB2pPuB, HV_BINOP_MULTIPLY, 1, m, &cBinop_FvB2pPuB_sendMessage);
}

void Heavy_PolyAmp::cMsg_Ij3XGN9w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_03MZbU9t_sendMessage);
}

void Heavy_PolyAmp::cBinop_MqENH4Yn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_mzbCJtia_sendMessage);
}

void Heavy_PolyAmp::cBinop_BLNObOjm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_62NMua2V_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_bgimV9Hy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_k5PmupPb_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_FvB2pPuB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tpcMMoP5_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_mzbCJtia_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_JogCZM1s_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_XnkMXOCQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_yg9xhmXE_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_xMwYE0t2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HnDanLrA_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_1PwdpJIM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MqENH4Yn, HV_BINOP_MULTIPLY, 1, m, &cBinop_MqENH4Yn_sendMessage);
}

void Heavy_PolyAmp::cBinop_aAOCUbVk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ORY1hhwD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1tslOFGl_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rFW1l6P0_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TOqzbZNE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_o2Ov0KzU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PVYItRX4_sendMessage);
}

void Heavy_PolyAmp::cBinop_uCWeVPg1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_8h0K6CEx_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ck6kidn9_sendMessage);
}

void Heavy_PolyAmp::cMsg_hdFBEgKM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_1PwdpJIM_sendMessage);
}

void Heavy_PolyAmp::cMsg_2R0oVc0v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_5Od0bDQn, HV_BINOP_POW, 0, m, &cBinop_5Od0bDQn_sendMessage);
}

void Heavy_PolyAmp::cMsg_W5TLe4MR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_aAOCUbVk_sendMessage);
}

void Heavy_PolyAmp::cBinop_5Od0bDQn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_yOnm7tTb_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_iZVEwsAq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_fpmcjb7s_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_U4ByPnua_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_ezxslLXG_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_yOnm7tTb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OlcapmzG_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_JogCZM1s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_5iS5cANR_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_Lu7kXQKw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_RoKz1RMH, 0, m, &cVar_RoKz1RMH_sendMessage);
}

void Heavy_PolyAmp::cCast_AAanzOZD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0bbWAxbF, 0, m, &cVar_0bbWAxbF_sendMessage);
}

void Heavy_PolyAmp::cCast_8ows3kRm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0bbWAxbF, 1, m, &cVar_0bbWAxbF_sendMessage);
}

void Heavy_PolyAmp::cCast_D2eiLaYm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gn4XGSPG, 0, m, &cVar_Gn4XGSPG_sendMessage);
}

void Heavy_PolyAmp::cCast_ZGg09hAZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_TUija8cW_sendMessage);
}

void Heavy_PolyAmp::cCast_KYQpikcv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_QvXS99iT_sendMessage);
}

void Heavy_PolyAmp::cCast_h1yiVOmB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gn4XGSPG, 0, m, &cVar_Gn4XGSPG_sendMessage);
}

void Heavy_PolyAmp::cCast_Vrbxwx4i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_37aqjJ5t, 0, m, &cVar_37aqjJ5t_sendMessage);
}

void Heavy_PolyAmp::cCast_rFW1l6P0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bgimV9Hy, HV_BINOP_MULTIPLY, 0, m, &cBinop_bgimV9Hy_sendMessage);
}

void Heavy_PolyAmp::cCast_o2Ov0KzU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xMwYE0t2, HV_BINOP_MULTIPLY, 0, m, &cBinop_xMwYE0t2_sendMessage);
}

void Heavy_PolyAmp::cCast_1tslOFGl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XnkMXOCQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_XnkMXOCQ_sendMessage);
}

void Heavy_PolyAmp::cCast_ORY1hhwD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_PolyAmp::cCast_PVYItRX4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BLNObOjm, HV_BINOP_MULTIPLY, 0, m, &cBinop_BLNObOjm_sendMessage);
}

void Heavy_PolyAmp::cCast_TOqzbZNE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_FvB2pPuB, HV_BINOP_MULTIPLY, 0, m, &cBinop_FvB2pPuB_sendMessage);
}

void Heavy_PolyAmp::cCast_mU9xaoVQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gn4XGSPG, 0, m, &cVar_Gn4XGSPG_sendMessage);
}

void Heavy_PolyAmp::cCast_JAKFsu5s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_37aqjJ5t, 0, m, &cVar_37aqjJ5t_sendMessage);
}

void Heavy_PolyAmp::cCast_ck6kidn9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2R0oVc0v_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_8h0K6CEx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5Od0bDQn, HV_BINOP_POW, 1, m, &cBinop_5Od0bDQn_sendMessage);
}

void Heavy_PolyAmp::cMsg_k5PmupPb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ikgsTeC3, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_tpcMMoP5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_25ak13z5, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_HnDanLrA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_5IcMBxhc, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_62NMua2V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_lMt0kuwP, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_yg9xhmXE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_M08qViih, 0, m, NULL);
}

void Heavy_PolyAmp::cVar_nJ35woGi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eBpOMQLU, m);
}

void Heavy_PolyAmp::cIf_eUSTEdIQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.5f, 0, m, &cBinop_44zzi1uu_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_PolyAmp::cVar_dW70rTuB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_Lr4YuJRd_sendMessage);
}

void Heavy_PolyAmp::cBinop_x6ONAp2r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bTNmFsoA, HV_BINOP_MULTIPLY, 1, m, &cBinop_bTNmFsoA_sendMessage);
}

void Heavy_PolyAmp::cMsg_EBY6BCKe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_x6ONAp2r_sendMessage);
}

void Heavy_PolyAmp::cUnop_yvE9l0DN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_1y0va6Fw_sendMessage);
}

void Heavy_PolyAmp::cMsg_tLhdxZBB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SmJ0iwoS_sendMessage);
}

void Heavy_PolyAmp::cSystem_SmJ0iwoS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q5tYhN4X, HV_BINOP_DIVIDE, 1, m, &cBinop_q5tYhN4X_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1C20bsJB_sendMessage);
}

void Heavy_PolyAmp::cBinop_vHwrIhsp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_y5YUUDOV_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_bzDghPPN_sendMessage);
}

void Heavy_PolyAmp::cBinop_1y0va6Fw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_q5tYhN4X, HV_BINOP_DIVIDE, 0, m, &cBinop_q5tYhN4X_sendMessage);
}

void Heavy_PolyAmp::cBinop_q5tYhN4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vHwrIhsp, HV_BINOP_MULTIPLY, 1, m, &cBinop_vHwrIhsp_sendMessage);
}

void Heavy_PolyAmp::cMsg_CqFTyu9L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_yvE9l0DN_sendMessage);
}

void Heavy_PolyAmp::cCast_1C20bsJB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_CqFTyu9L_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_YBSLDtrG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jAtRD5oZ, HV_BINOP_MULTIPLY, 1, m, &cBinop_jAtRD5oZ_sendMessage);
}

void Heavy_PolyAmp::cMsg_9Zr2mGwQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_YBSLDtrG_sendMessage);
}

void Heavy_PolyAmp::cBinop_u71elgEo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_vHwrIhsp, HV_BINOP_MULTIPLY, 0, m, &cBinop_vHwrIhsp_sendMessage);
}

void Heavy_PolyAmp::cBinop_P2UdB5wV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_u71elgEo_sendMessage);
}

void Heavy_PolyAmp::cUnop_sHiYrWHS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_qAVmmNvW_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cUnop_SycRy3YF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_blrq1dGm_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cVar_twBSOKyX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OPuze8oV_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cVar_KVoRYuki_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Mewe0jKU_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_P2UdB5wV_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YiuN7ETb_sendMessage);
}

void Heavy_PolyAmp::cBinop_arffFRRQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_12byZTej_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_Lr4YuJRd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_arffFRRQ_sendMessage);
}

void Heavy_PolyAmp::cBinop_9LwNEReK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_twBSOKyX, 1, m, &cVar_twBSOKyX_sendMessage);
}

void Heavy_PolyAmp::cBinop_LiLhQtoM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PoDDD45I, HV_BINOP_MULTIPLY, 1, m, &cBinop_PoDDD45I_sendMessage);
}

void Heavy_PolyAmp::cBinop_xkC9hGRX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Bn2pa5Zo, HV_BINOP_MULTIPLY, 1, m, &cBinop_Bn2pa5Zo_sendMessage);
}

void Heavy_PolyAmp::cBinop_Fy78SUbI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_xkC9hGRX_sendMessage);
}

void Heavy_PolyAmp::cMsg_ptSVfFAj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_Fy78SUbI_sendMessage);
}

void Heavy_PolyAmp::cBinop_byrb7sWf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9PGu77cj, HV_BINOP_MULTIPLY, 1, m, &cBinop_9PGu77cj_sendMessage);
}

void Heavy_PolyAmp::cBinop_kiWuLvTt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_byrb7sWf_sendMessage);
}

void Heavy_PolyAmp::cMsg_j8Q763gw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_kiWuLvTt_sendMessage);
}

void Heavy_PolyAmp::cBinop_Bn2pa5Zo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_T2BkXRwe_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_w8T5BkbS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Heu6ntC3_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_bTNmFsoA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_nhg69BrS_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_9PGu77cj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Y00r54ZQ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_IzCF2bu1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_w8T5BkbS_sendMessage);
}

void Heavy_PolyAmp::cBinop_PoDDD45I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_JgC6lWBc_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_jAtRD5oZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HLE3BaZP_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_8CQvl3Fh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IzCF2bu1, HV_BINOP_MULTIPLY, 1, m, &cBinop_IzCF2bu1_sendMessage);
}

void Heavy_PolyAmp::cBinop_H62F1kDy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_no46f9zn_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UzAoxHaM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WczklCEB_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_w3KCCM4X_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ronkh7JJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fSvp4FBw_sendMessage);
}

void Heavy_PolyAmp::cMsg_OPuze8oV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_H62F1kDy_sendMessage);
}

void Heavy_PolyAmp::cMsg_12byZTej_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_8CQvl3Fh_sendMessage);
}

void Heavy_PolyAmp::cSend_Heu6ntC3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_P3OSNgIV_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_blrq1dGm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_K246c2pp_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_qAVmmNvW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_pdZbSaFC_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_y5YUUDOV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_SycRy3YF_sendMessage);
}

void Heavy_PolyAmp::cCast_bzDghPPN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_sHiYrWHS_sendMessage);
}

void Heavy_PolyAmp::cCast_9dsQpnn0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KVoRYuki, 0, m, &cVar_KVoRYuki_sendMessage);
}

void Heavy_PolyAmp::cCast_UmrMWWTc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dW70rTuB, 1, m, &cVar_dW70rTuB_sendMessage);
}

void Heavy_PolyAmp::cCast_w3KCCM4X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Bn2pa5Zo, HV_BINOP_MULTIPLY, 0, m, &cBinop_Bn2pa5Zo_sendMessage);
}

void Heavy_PolyAmp::cCast_WczklCEB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PoDDD45I, HV_BINOP_MULTIPLY, 0, m, &cBinop_PoDDD45I_sendMessage);
}

void Heavy_PolyAmp::cCast_ronkh7JJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_jAtRD5oZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_jAtRD5oZ_sendMessage);
}

void Heavy_PolyAmp::cCast_no46f9zn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_PolyAmp::cCast_UzAoxHaM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_bTNmFsoA, HV_BINOP_MULTIPLY, 0, m, &cBinop_bTNmFsoA_sendMessage);
}

void Heavy_PolyAmp::cCast_fSvp4FBw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_9PGu77cj, HV_BINOP_MULTIPLY, 0, m, &cBinop_9PGu77cj_sendMessage);
}

void Heavy_PolyAmp::cCast_YiuN7ETb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_twBSOKyX, 0, m, &cVar_twBSOKyX_sendMessage);
}

void Heavy_PolyAmp::cCast_Mewe0jKU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dW70rTuB, 0, m, &cVar_dW70rTuB_sendMessage);
}

void Heavy_PolyAmp::cMsg_nhg69BrS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_RX3SIzmS, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_T2BkXRwe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_IdIljFsf, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_JgC6lWBc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_pLZbr37q, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_HLE3BaZP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_MNkW16X0, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_Y00r54ZQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_GXLNSMAu, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_TGHA3JOp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_ipSTz39o, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_5c4XFwpH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_5vVR3XBe, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_h3sb437i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_f5rcXkuQ, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_TYewRplj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_T1zT7z3P, 0, m, NULL);
}

void Heavy_PolyAmp::cMsg_ST6fYrrW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  msg_setFloat(m, 1, 10.0f);
  sLine_onMessage(_c, &Context(_c)->sLine_kOavsUnf, 0, m, NULL);
}

void Heavy_PolyAmp::cVar_OitfjQf4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_KpxAEPMJ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_sudmGjfT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YRnaH7DK, HV_BINOP_ADD, 0, m, &cBinop_YRnaH7DK_sendMessage);
}

void Heavy_PolyAmp::cBinop_ZtOYwo1b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BsKsVgLR, HV_BINOP_MULTIPLY, 1, m, &cBinop_BsKsVgLR_sendMessage);
}

void Heavy_PolyAmp::cBinop_GdfnXpdT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZtOYwo1b, HV_BINOP_MULTIPLY, 1, m, &cBinop_ZtOYwo1b_sendMessage);
}

void Heavy_PolyAmp::cBinop_HzSmyKNb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_sudmGjfT, HV_BINOP_MULTIPLY, 1, m, &cBinop_sudmGjfT_sendMessage);
}

void Heavy_PolyAmp::cBinop_YRnaH7DK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ZtOYwo1b, HV_BINOP_MULTIPLY, 0, m, &cBinop_ZtOYwo1b_sendMessage);
}

void Heavy_PolyAmp::cBinop_d9G68DRp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_YRnaH7DK, HV_BINOP_ADD, 1, m, &cBinop_YRnaH7DK_sendMessage);
}

void Heavy_PolyAmp::cCast_HbHC6IaF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_GdfnXpdT_sendMessage);
}

void Heavy_PolyAmp::cCast_fqKGJAS8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_HzSmyKNb_sendMessage);
}

void Heavy_PolyAmp::cCast_rZLilRC8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_d9G68DRp_sendMessage);
}

void Heavy_PolyAmp::cBinop_TWcTOJvc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4cSCobbH, HV_BINOP_MULTIPLY, 1, m, &cBinop_4cSCobbH_sendMessage);
}

void Heavy_PolyAmp::cBinop_z4CrTHSd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XEhna38z, HV_BINOP_ADD, 0, m, &cBinop_XEhna38z_sendMessage);
}

void Heavy_PolyAmp::cBinop_19SMmoBG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TWcTOJvc, HV_BINOP_MULTIPLY, 0, m, &cBinop_TWcTOJvc_sendMessage);
}

void Heavy_PolyAmp::cBinop_XEhna38z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_19SMmoBG, HV_BINOP_ADD, 0, m, &cBinop_19SMmoBG_sendMessage);
}

void Heavy_PolyAmp::cBinop_eOmyGGNx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_XEhna38z, HV_BINOP_ADD, 1, m, &cBinop_XEhna38z_sendMessage);
}

void Heavy_PolyAmp::cBinop_UrAp3sOI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z4CrTHSd, HV_BINOP_MULTIPLY, 1, m, &cBinop_z4CrTHSd_sendMessage);
}

void Heavy_PolyAmp::cCast_F5XNcIXE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_eOmyGGNx_sendMessage);
}

void Heavy_PolyAmp::cCast_JICq4VhD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_UrAp3sOI_sendMessage);
}

void Heavy_PolyAmp::cCast_iwtnR9zr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TWcTOJvc, HV_BINOP_MULTIPLY, 1, m, &cBinop_TWcTOJvc_sendMessage);
}

void Heavy_PolyAmp::cVar_STJfa2xx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 24.0f, 0, m, &cBinop_8grxLZFm_sendMessage);
}

void Heavy_PolyAmp::cVar_SqXWlO4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QGvB13hj_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 20000.0f, 0, m, &cBinop_iMaOhaW8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vdzdvZTZ_sendMessage);
}

void Heavy_PolyAmp::cBinop_uRBEOj4G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JhR2AIyC, HV_BINOP_ADD, 0, m, &cBinop_JhR2AIyC_sendMessage);
}

void Heavy_PolyAmp::cBinop_LbTQxh11_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_uRBEOj4G, HV_BINOP_MULTIPLY, 1, m, &cBinop_uRBEOj4G_sendMessage);
}

void Heavy_PolyAmp::cBinop_JhR2AIyC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xgsQxrBm, HV_BINOP_SUBTRACT, 0, m, &cBinop_xgsQxrBm_sendMessage);
}

void Heavy_PolyAmp::cBinop_p7l9IVCp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_JhR2AIyC, HV_BINOP_ADD, 1, m, &cBinop_JhR2AIyC_sendMessage);
}

void Heavy_PolyAmp::cBinop_CNDP8yIf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_LbTQxh11_sendMessage);
}

void Heavy_PolyAmp::cBinop_xgsQxrBm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H8DdF0o5, HV_BINOP_MULTIPLY, 1, m, &cBinop_H8DdF0o5_sendMessage);
}

void Heavy_PolyAmp::cCast_aLRoNmsQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_p7l9IVCp_sendMessage);
}

void Heavy_PolyAmp::cCast_TZzDWmPK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_CNDP8yIf_sendMessage);
}

void Heavy_PolyAmp::cVar_zOZV4n8R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 100.0f, 0, m, &cBinop_b7CQXQjo_sendMessage);
}

void Heavy_PolyAmp::cUnop_bR2ppeXT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_W6INpFOg_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_bnC4Lcw8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ePzEafjc_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_b7CQXQjo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.1f, 0, m, &cBinop_bnC4Lcw8_sendMessage);
}

void Heavy_PolyAmp::cBinop_IqedzAMS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ifSH19ys, HV_BINOP_MULTIPLY, 1, m, &cBinop_ifSH19ys_sendMessage);
}

void Heavy_PolyAmp::cBinop_sghomIxH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_cA6qMUcQ, HV_BINOP_MULTIPLY, 1, m, &cBinop_cA6qMUcQ_sendMessage);
}

void Heavy_PolyAmp::cBinop_cA6qMUcQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_COjDrCeX, HV_BINOP_ADD, 0, m, &cBinop_COjDrCeX_sendMessage);
}

void Heavy_PolyAmp::cBinop_XLn1PvWW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_sghomIxH_sendMessage);
}

void Heavy_PolyAmp::cBinop_COjDrCeX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_IqedzAMS_sendMessage);
}

void Heavy_PolyAmp::cBinop_eC79G3Rg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_COjDrCeX, HV_BINOP_ADD, 1, m, &cBinop_COjDrCeX_sendMessage);
}

void Heavy_PolyAmp::cCast_JC8RhDqO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_eC79G3Rg_sendMessage);
}

void Heavy_PolyAmp::cCast_3Jn2uXoS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_XLn1PvWW_sendMessage);
}

void Heavy_PolyAmp::cUnop_it37I22V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_HK8VvE0g_sendMessage);
}

void Heavy_PolyAmp::cBinop_GNbfeVRB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_CWm9BxkZ, HV_BINOP_MULTIPLY, 1, m, &cBinop_CWm9BxkZ_sendMessage);
}

void Heavy_PolyAmp::cBinop_CWm9BxkZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MkI6yQmp, HV_BINOP_ADD, 0, m, &cBinop_MkI6yQmp_sendMessage);
}

void Heavy_PolyAmp::cBinop_MkI6yQmp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qf6XsBlk, HV_BINOP_ADD, 0, m, &cBinop_qf6XsBlk_sendMessage);
}

void Heavy_PolyAmp::cBinop_caoKqleq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MkI6yQmp, HV_BINOP_ADD, 1, m, &cBinop_MkI6yQmp_sendMessage);
}

void Heavy_PolyAmp::cBinop_qf6XsBlk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OitfjQf4, 1, m, &cVar_OitfjQf4_sendMessage);
}

void Heavy_PolyAmp::cBinop_Y6tgwM0s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_GNbfeVRB_sendMessage);
}

void Heavy_PolyAmp::cCast_RlYl5BvK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_caoKqleq_sendMessage);
}

void Heavy_PolyAmp::cCast_UnIc47lT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Y6tgwM0s_sendMessage);
}

void Heavy_PolyAmp::cBinop_wvrVNa40_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 40.0f, 0, m, &cBinop_ckTb7IR4_sendMessage);
}

void Heavy_PolyAmp::cBinop_8grxLZFm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, -24.0f, 0, m, &cBinop_wvrVNa40_sendMessage);
}

void Heavy_PolyAmp::cMsg_03iXDmP9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZsMNW28d_sendMessage);
}

void Heavy_PolyAmp::cSystem_ZsMNW28d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1LKGJhgU, HV_BINOP_DIVIDE, 1, m, &cBinop_1LKGJhgU_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dHxctRzn_sendMessage);
}

void Heavy_PolyAmp::cUnop_uiQVBu6s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 8.0f, 0, m, &cBinop_gxJxSIXv_sendMessage);
}

void Heavy_PolyAmp::cBinop_gxJxSIXv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1LKGJhgU, HV_BINOP_DIVIDE, 0, m, &cBinop_1LKGJhgU_sendMessage);
}

void Heavy_PolyAmp::cBinop_BTPKmXGC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_KQQzWX0e_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ijsZZPCJ_sendMessage);
}

void Heavy_PolyAmp::cBinop_1LKGJhgU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BTPKmXGC, HV_BINOP_MULTIPLY, 1, m, &cBinop_BTPKmXGC_sendMessage);
}

void Heavy_PolyAmp::cMsg_I79HvwZE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cUnop_onMessage(_c, HV_UNOP_ATAN, m, &cUnop_uiQVBu6s_sendMessage);
}

void Heavy_PolyAmp::cCast_dHxctRzn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_I79HvwZE_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_mxJdad2R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BTPKmXGC, HV_BINOP_MULTIPLY, 0, m, &cBinop_BTPKmXGC_sendMessage);
}

void Heavy_PolyAmp::cBinop_iMaOhaW8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 20.0f, 0, m, &cBinop_mxJdad2R_sendMessage);
}

void Heavy_PolyAmp::cBinop_exjgr4Gz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_St27MoF3, HV_BINOP_ADD, 0, m, &cBinop_St27MoF3_sendMessage);
}

void Heavy_PolyAmp::cBinop_hKERrpLd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_v5tUV2M3, HV_BINOP_MULTIPLY, 1, m, &cBinop_v5tUV2M3_sendMessage);
}

void Heavy_PolyAmp::cBinop_St27MoF3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y9XilG5p, HV_BINOP_SUBTRACT, 0, m, &cBinop_Y9XilG5p_sendMessage);
}

void Heavy_PolyAmp::cBinop_aQeEbpTG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_St27MoF3, HV_BINOP_ADD, 1, m, &cBinop_St27MoF3_sendMessage);
}

void Heavy_PolyAmp::cBinop_WcUwJymY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_exjgr4Gz, HV_BINOP_MULTIPLY, 1, m, &cBinop_exjgr4Gz_sendMessage);
}

void Heavy_PolyAmp::cBinop_Y9XilG5p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hKERrpLd, HV_BINOP_MULTIPLY, 0, m, &cBinop_hKERrpLd_sendMessage);
}

void Heavy_PolyAmp::cCast_SfKsquTU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_aQeEbpTG_sendMessage);
}

void Heavy_PolyAmp::cCast_vZ52mtF9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_hKERrpLd, HV_BINOP_MULTIPLY, 1, m, &cBinop_hKERrpLd_sendMessage);
}

void Heavy_PolyAmp::cCast_AlmxP7Qu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_WcUwJymY_sendMessage);
}

void Heavy_PolyAmp::cUnop_zMSh0BWD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_pVxjf5AH_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_DGG19FK4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Pn09FtXN_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_ifSH19ys_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TYewRplj_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_mYKwvVgj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_kazoHLzs_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_IOjucDxm_sendMessage);
}

void Heavy_PolyAmp::cBinop_HK8VvE0g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DGG19FK4, HV_BINOP_MULTIPLY, 1, m, &cBinop_DGG19FK4_sendMessage);
}

void Heavy_PolyAmp::cBinop_H8DdF0o5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_TGHA3JOp_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_BsKsVgLR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ST6fYrrW_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_u3uYWY3Z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_mYKwvVgj_sendMessage);
}

void Heavy_PolyAmp::cBinop_v5tUV2M3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_5c4XFwpH_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_4cSCobbH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_h3sb437i_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_pS7MXWtA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_u3uYWY3Z, HV_BINOP_MULTIPLY, 1, m, &cBinop_u3uYWY3Z_sendMessage);
}

void Heavy_PolyAmp::cBinop_vBuv9Yt3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_tlGpcUcU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FXUo5oQf_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UDGfHeyq_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_PH9pl2AU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_uuvcR9fo_sendMessage);
}

void Heavy_PolyAmp::cBinop_ckTb7IR4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_YmJFx9qk_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sxGYlNdX_sendMessage);
}

void Heavy_PolyAmp::cMsg_ePzEafjc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_pS7MXWtA_sendMessage);
}

void Heavy_PolyAmp::cMsg_lHKyLBXL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 10.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_c029tS1S, HV_BINOP_POW, 0, m, &cBinop_c029tS1S_sendMessage);
}

void Heavy_PolyAmp::cMsg_KpxAEPMJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 0.0f, 0, m, &cBinop_vBuv9Yt3_sendMessage);
}

void Heavy_PolyAmp::cBinop_c029tS1S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_s80gAg8l_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_COOxqgz8_sendMessage);
}

void Heavy_PolyAmp::cSend_aq8OTHDf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_PolyAmp::cSend_Pn09FtXN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_EI07yNt8_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_pVxjf5AH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PSupD5GD_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_Q8KICL5G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_q9MtYsFL_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_W6INpFOg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_sI5Iyemg_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_YmJFx9qk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_c029tS1S, HV_BINOP_POW, 1, m, &cBinop_c029tS1S_sendMessage);
}

void Heavy_PolyAmp::cCast_sxGYlNdX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_lHKyLBXL_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_vdzdvZTZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OitfjQf4, 0, m, &cVar_OitfjQf4_sendMessage);
}

void Heavy_PolyAmp::cCast_QGvB13hj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zOZV4n8R, 0, m, &cVar_zOZV4n8R_sendMessage);
}

void Heavy_PolyAmp::cCast_kazoHLzs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_aq8OTHDf_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_IOjucDxm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_DGG19FK4, HV_BINOP_MULTIPLY, 0, m, &cBinop_DGG19FK4_sendMessage);
}

void Heavy_PolyAmp::cCast_Ojd2240H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_STJfa2xx, 0, m, &cVar_STJfa2xx_sendMessage);
}

void Heavy_PolyAmp::cCast_4cHLtwxe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SqXWlO4P, 0, m, &cVar_SqXWlO4P_sendMessage);
}

void Heavy_PolyAmp::cCast_s80gAg8l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Q8KICL5G_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_COOxqgz8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SQRT, m, &cUnop_it37I22V_sendMessage);
}

void Heavy_PolyAmp::cCast_UDGfHeyq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_v5tUV2M3, HV_BINOP_MULTIPLY, 0, m, &cBinop_v5tUV2M3_sendMessage);
}

void Heavy_PolyAmp::cCast_tlGpcUcU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_H8DdF0o5, HV_BINOP_MULTIPLY, 0, m, &cBinop_H8DdF0o5_sendMessage);
}

void Heavy_PolyAmp::cCast_FXUo5oQf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ifSH19ys, HV_BINOP_MULTIPLY, 0, m, &cBinop_ifSH19ys_sendMessage);
}

void Heavy_PolyAmp::cCast_PH9pl2AU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_BsKsVgLR, HV_BINOP_MULTIPLY, 0, m, &cBinop_BsKsVgLR_sendMessage);
}

void Heavy_PolyAmp::cCast_uuvcR9fo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_4cSCobbH, HV_BINOP_MULTIPLY, 0, m, &cBinop_4cSCobbH_sendMessage);
}

void Heavy_PolyAmp::cCast_zZXvNoaC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SqXWlO4P, 0, m, &cVar_SqXWlO4P_sendMessage);
}

void Heavy_PolyAmp::cCast_UhmaXiYb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_STJfa2xx, 0, m, &cVar_STJfa2xx_sendMessage);
}

void Heavy_PolyAmp::cCast_ijsZZPCJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_bR2ppeXT_sendMessage);
}

void Heavy_PolyAmp::cCast_KQQzWX0e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_SIN, m, &cUnop_zMSh0BWD_sendMessage);
}

void Heavy_PolyAmp::cCast_CUz9VGne_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_SqXWlO4P, 0, m, &cVar_SqXWlO4P_sendMessage);
}

void Heavy_PolyAmp::cCast_m7xPZwb1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zOZV4n8R, 1, m, &cVar_zOZV4n8R_sendMessage);
}

void Heavy_PolyAmp::cVar_KGrpDfie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mhgn5YJG, HV_BINOP_SUBTRACT, 0, m, &cBinop_mhgn5YJG_sendMessage);
}

void Heavy_PolyAmp::cBinop_CpjpFRBw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2.0f, 0, m, &cBinop_XfM91WI7_sendMessage);
}

void Heavy_PolyAmp::cBinop_H6EvRhOB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 400.0f, 0, m, &cBinop_VqjZdhVl_sendMessage);
}

void Heavy_PolyAmp::cBinop_XfM91WI7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 850.0f, 0, m, &cBinop_CvZPb2JY_sendMessage);
}

void Heavy_PolyAmp::cBinop_wgKoEBdY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_IY1S26UX_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_aYWHWWIa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 25.0f, 0, m, &cBinop_cxTtMpbr_sendMessage);
}

void Heavy_PolyAmp::cBinop_QeJ6awJf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 24.0f, 0, m, &cBinop_qJ6D41g6_sendMessage);
}

void Heavy_PolyAmp::cBinop_PImkPPZR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 24.0f, 0, m, &cBinop_2blWC1dv_sendMessage);
}

void Heavy_PolyAmp::cBinop_rzMDvLJP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_S8QvA8SJ, m);
}

void Heavy_PolyAmp::cBinop_kNQfFNA9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 3000.0f, 0, m, &cBinop_Ll2fD0td_sendMessage);
}

void Heavy_PolyAmp::cBinop_7Swsxyny_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 24.0f, 0, m, &cBinop_L9ks2Sy7_sendMessage);
}

void Heavy_PolyAmp::cBinop_ZBNC1j9w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_4DryFG2C_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cBinop_03d4oc4T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 450.0f, 0, m, &cBinop_7DocMkNP_sendMessage);
}

void Heavy_PolyAmp::cBinop_7DocMkNP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 400.0f, 0, m, &cBinop_xc8IyT09_sendMessage);
}

void Heavy_PolyAmp::cBinop_mfibdhhT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 24.0f, 0, m, &cBinop_yTwb3LYJ_sendMessage);
}

void Heavy_PolyAmp::cBinop_Ll2fD0td_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_V0hL7rHH, 0, m, &cVar_V0hL7rHH_sendMessage);
}

void Heavy_PolyAmp::cBinop_CvZPb2JY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y4tescVP, 0, m, &cVar_y4tescVP_sendMessage);
}

void Heavy_PolyAmp::cBinop_VqjZdhVl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Gn4XGSPG, 0, m, &cVar_Gn4XGSPG_sendMessage);
}

void Heavy_PolyAmp::cBinop_xc8IyT09_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_y4tescVP, 0, m, &cVar_y4tescVP_sendMessage);
}

void Heavy_PolyAmp::cBinop_cxTtMpbr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_lAugAWK3, 0, m, &cVar_lAugAWK3_sendMessage);
}

void Heavy_PolyAmp::cBinop_mhgn5YJG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 275.0f, 0, m, &cBinop_aYWHWWIa_sendMessage);
}

void Heavy_PolyAmp::cBinop_qJ6D41g6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_1lYPQZt4_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_eGvodiZa_sendMessage);
}

void Heavy_PolyAmp::cBinop_L9ks2Sy7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ojd2240H_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_4cHLtwxe_sendMessage);
}

void Heavy_PolyAmp::cBinop_44zzi1uu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 1650.0f, 0, m, &cBinop_CpjpFRBw_sendMessage);
}

void Heavy_PolyAmp::cBinop_yTwb3LYJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_I4c7WOgi_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RJzdB4p0_sendMessage);
}

void Heavy_PolyAmp::cBinop_2blWC1dv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JAKFsu5s_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mU9xaoVQ_sendMessage);
}

void Heavy_PolyAmp::cBinop_B739FEHX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TBdLSXV1, 0, m, &cVar_TBdLSXV1_sendMessage);
}

void Heavy_PolyAmp::cBinop_Vgs5gvLx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_0KVbtt2T, 1, m, &cIf_0KVbtt2T_sendMessage);
}

void Heavy_PolyAmp::cBinop_e4vUmLOf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_eUSTEdIQ, 1, m, &cIf_eUSTEdIQ_sendMessage);
}

void Heavy_PolyAmp::cSend_IY1S26UX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9lb38w9L_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cSend_4DryFG2C_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_cmSjhWlI_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cCast_g91ZhjLG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_KGrpDfie, 0, m, &cVar_KGrpDfie_sendMessage);
}

void Heavy_PolyAmp::cCast_Ds3nWi4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mhgn5YJG, HV_BINOP_SUBTRACT, 1, m, &cBinop_mhgn5YJG_sendMessage);
}

void Heavy_PolyAmp::cReceive_s8e0GyZJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_v4dv9OWc_sendMessage);
  cMsg_UHLjhiCJ_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cReceive_NpJVZC1U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_18CpHn1V_sendMessage(_c, 0, m);
  cMsg_zyPEmC4X_sendMessage(_c, 0, m);
  cMsg_TbxzBZ3R_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_eba3aqoY_sendMessage);
}

void Heavy_PolyAmp::cReceive_RqmUjcSO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_oLrGVohf, HV_BINOP_MULTIPLY, 0, m, &cBinop_oLrGVohf_sendMessage);
}

void Heavy_PolyAmp::cReceive_3l6rOMiA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0k3mh7PM_sendMessage(_c, 0, m);
  cMsg_G67GE6MK_sendMessage(_c, 0, m);
  cMsg_66sdVOev_sendMessage(_c, 0, m);
  cMsg_oHl6LTy2_sendMessage(_c, 0, m);
  cMsg_cAB7iLS8_sendMessage(_c, 0, m);
  cMsg_tLhdxZBB_sendMessage(_c, 0, m);
  cMsg_cw46r3iV_sendMessage(_c, 0, m);
  cMsg_xoYwG7Cv_sendMessage(_c, 0, m);
  cMsg_XRGq9q7h_sendMessage(_c, 0, m);
  cMsg_03iXDmP9_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_TBdLSXV1, 0, m, &cVar_TBdLSXV1_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_ezLnrbDa, 0, m, &cVar_ezLnrbDa_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_lAugAWK3, 0, m, &cVar_lAugAWK3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_V0hL7rHH, 0, m, &cVar_V0hL7rHH_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_yQON6py3, 0, m, &cVar_yQON6py3_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_KVoRYuki, 0, m, &cVar_KVoRYuki_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_q3qVxC90_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5jFLvkoS_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Vrbxwx4i_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_h1yiVOmB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lWscc7hD_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_1mRGgZFj_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_UhmaXiYb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zZXvNoaC_sendMessage);
  cMsg_E0xgU7MZ_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_eP6fsF3O, 0, m, &cVar_eP6fsF3O_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_GlM382tv, 0, m, &cVar_GlM382tv_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_nJ35woGi, 0, m, &cVar_nJ35woGi_sendMessage);
}

void Heavy_PolyAmp::cReceive_8DydLLon_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_2dS2KaQZ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_lT5uXFqi_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_Xvj0EMqi_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_DU3K7Gak_sendMessage);
}

void Heavy_PolyAmp::cReceive_0VAdMTIu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_kwLPs2hM, HV_BINOP_MULTIPLY, 0, m, &cBinop_kwLPs2hM_sendMessage);
}

void Heavy_PolyAmp::cReceive_1DHV0u58_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_yVjEnq5w_sendMessage);
  cMsg_ou6ivSCW_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cReceive_VxVBbY2a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_PmGEhrln, HV_BINOP_MULTIPLY, 0, m, &cBinop_PmGEhrln_sendMessage);
}

void Heavy_PolyAmp::cReceive_jcAg6lmf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_iy1Q3YCY_sendMessage);
  cMsg_uofcUrsn_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cReceive_GNa0hWKy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_jX3q7PIt_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_gTDLXi3m_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_aeYY1wR1_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_EoWRlxpL_sendMessage);
}

void Heavy_PolyAmp::cReceive_6yX3BOdy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qedyHNzy, HV_BINOP_MULTIPLY, 1, m, &cBinop_qedyHNzy_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rCZFHp5p, HV_BINOP_MULTIPLY, 1, m, &cBinop_rCZFHp5p_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_bhJPFAuM, HV_BINOP_DIVIDE, 1, m, &cBinop_bhJPFAuM_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rz5cp5ia, HV_BINOP_DIVIDE, 1, m, &cBinop_rz5cp5ia_sendMessage);
}

void Heavy_PolyAmp::cReceive_0S20hMEZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_qedyHNzy, HV_BINOP_MULTIPLY, 0, m, &cBinop_qedyHNzy_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rCZFHp5p, HV_BINOP_MULTIPLY, 0, m, &cBinop_rCZFHp5p_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_bhJPFAuM, HV_BINOP_DIVIDE, 0, m, &cBinop_bhJPFAuM_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rz5cp5ia, HV_BINOP_DIVIDE, 0, m, &cBinop_rz5cp5ia_sendMessage);
}

void Heavy_PolyAmp::cReceive_NM41Vi5y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_jpln23mb_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_oQUStOvT_sendMessage);
}

void Heavy_PolyAmp::cReceive_i0qimoTb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_xvVRynuw, HV_BINOP_MULTIPLY, 0, m, &cBinop_xvVRynuw_sendMessage);
}

void Heavy_PolyAmp::cReceive_jvwIPJZx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_TPAMNzvG_sendMessage);
  cMsg_EsLDTfJv_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cReceive_oN9mUqCh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_I5FXsvv5, HV_BINOP_MULTIPLY, 0, m, &cBinop_I5FXsvv5_sendMessage);
}

void Heavy_PolyAmp::cReceive_7AFdywhz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_GvVdw8is_sendMessage(_c, 0, m);
  cMsg_x4wquDvm_sendMessage(_c, 0, m);
  cMsg_tXtt20KB_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_LCceCYeb_sendMessage);
}

void Heavy_PolyAmp::cReceive_etJN4ccE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_FlAdGO6S_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_6qRXrC0R_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lewP5rid_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NqGAjQoz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_xBle3osy_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_NHNIsdxZ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_QrRamZQ6_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_2MOgvh6P_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WLWPdi8m_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_dtF01bMg_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_WjcuuICS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_T9fi5ysT_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ERgeWa9t_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_lrwjlBkz_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_oDUBj9h6_sendMessage);
}

void Heavy_PolyAmp::cReceive_KcJn0Jqn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_lRInT9WP, HV_BINOP_MULTIPLY, 0, m, &cBinop_lRInT9WP_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_bcRqY34u, HV_BINOP_MULTIPLY, 0, m, &cBinop_bcRqY34u_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_1lu43eja, HV_BINOP_MULTIPLY, 0, m, &cBinop_1lu43eja_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CcN5x9tD, HV_BINOP_MULTIPLY, 0, m, &cBinop_CcN5x9tD_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_JdvecktE, HV_BINOP_MULTIPLY, 0, m, &cBinop_JdvecktE_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_zU1r8WuP, HV_BINOP_MULTIPLY, 0, m, &cBinop_zU1r8WuP_sendMessage);
}

void Heavy_PolyAmp::cReceive_hBPZ3iB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_J7mqQuj4, HV_BINOP_ADD, 1, m, &cBinop_J7mqQuj4_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_rPNLcDnn, HV_BINOP_SUBTRACT, 1, m, &cBinop_rPNLcDnn_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XIUgNpNc, HV_BINOP_SUBTRACT, 1, m, &cBinop_XIUgNpNc_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_XAzbF4TQ, HV_BINOP_ADD, 1, m, &cBinop_XAzbF4TQ_sendMessage);
}

void Heavy_PolyAmp::cReceive_GMqLDv7y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_1aSbXZCD, HV_BINOP_MULTIPLY, 0, m, &cBinop_1aSbXZCD_sendMessage);
}

void Heavy_PolyAmp::cReceive_E12kEIOY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qDfmbIZn_sendMessage(_c, 0, m);
  cMsg_gCC7qJDm_sendMessage(_c, 0, m);
  cMsg_3kikdgqO_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_yG6oHdAL_sendMessage);
}

void Heavy_PolyAmp::cReceive_liAx6yrl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_iRNeqdPc, HV_BINOP_MULTIPLY, 0, m, &cBinop_iRNeqdPc_sendMessage);
}

void Heavy_PolyAmp::cReceive_0Wgl5NIZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_3gk31KQD_sendMessage);
  cMsg_2LOividt_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cReceive_ezxslLXG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MqENH4Yn, HV_BINOP_MULTIPLY, 0, m, &cBinop_MqENH4Yn_sendMessage);
}

void Heavy_PolyAmp::cReceive_OlcapmzG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MgsW1dYw, HV_BINOP_MULTIPLY, 1, m, &cBinop_MgsW1dYw_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xj9JEnZ3, HV_BINOP_MULTIPLY, 1, m, &cBinop_Xj9JEnZ3_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VbOSaEJA, HV_BINOP_DIVIDE, 1, m, &cBinop_VbOSaEJA_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_60l8cO3m, HV_BINOP_DIVIDE, 1, m, &cBinop_60l8cO3m_sendMessage);
}

void Heavy_PolyAmp::cReceive_fpmcjb7s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_EVdZSxFX_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_ILEph09H_sendMessage);
}

void Heavy_PolyAmp::cReceive_5iS5cANR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_MgsW1dYw, HV_BINOP_MULTIPLY, 0, m, &cBinop_MgsW1dYw_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Xj9JEnZ3, HV_BINOP_MULTIPLY, 0, m, &cBinop_Xj9JEnZ3_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_VbOSaEJA, HV_BINOP_DIVIDE, 0, m, &cBinop_VbOSaEJA_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_60l8cO3m, HV_BINOP_DIVIDE, 0, m, &cBinop_60l8cO3m_sendMessage);
}

void Heavy_PolyAmp::cReceive_P3OSNgIV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_9LwNEReK_sendMessage);
  cMsg_EBY6BCKe_sendMessage(_c, 0, m);
}

void Heavy_PolyAmp::cReceive_K246c2pp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_IzCF2bu1, HV_BINOP_MULTIPLY, 0, m, &cBinop_IzCF2bu1_sendMessage);
}

void Heavy_PolyAmp::cReceive_pdZbSaFC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_j8Q763gw_sendMessage(_c, 0, m);
  cMsg_9Zr2mGwQ_sendMessage(_c, 0, m);
  cMsg_ptSVfFAj_sendMessage(_c, 0, m);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -2.0f, 0, m, &cBinop_LiLhQtoM_sendMessage);
}

void Heavy_PolyAmp::cReceive_sI5Iyemg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_z4CrTHSd, HV_BINOP_MULTIPLY, 0, m, &cBinop_z4CrTHSd_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_sudmGjfT, HV_BINOP_MULTIPLY, 0, m, &cBinop_sudmGjfT_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_exjgr4Gz, HV_BINOP_MULTIPLY, 0, m, &cBinop_exjgr4Gz_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_cA6qMUcQ, HV_BINOP_MULTIPLY, 0, m, &cBinop_cA6qMUcQ_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_uRBEOj4G, HV_BINOP_MULTIPLY, 0, m, &cBinop_uRBEOj4G_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_CWm9BxkZ, HV_BINOP_MULTIPLY, 0, m, &cBinop_CWm9BxkZ_sendMessage);
}

void Heavy_PolyAmp::cReceive_q9MtYsFL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iwtnR9zr_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_F5XNcIXE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JICq4VhD_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_HbHC6IaF_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_rZLilRC8_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fqKGJAS8_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_vZ52mtF9_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SfKsquTU_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_AlmxP7Qu_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_JC8RhDqO_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_3Jn2uXoS_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_aLRoNmsQ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_TZzDWmPK_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_RlYl5BvK_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_UnIc47lT_sendMessage);
}

void Heavy_PolyAmp::cReceive_EI07yNt8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_19SMmoBG, HV_BINOP_ADD, 1, m, &cBinop_19SMmoBG_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_Y9XilG5p, HV_BINOP_SUBTRACT, 1, m, &cBinop_Y9XilG5p_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_xgsQxrBm, HV_BINOP_SUBTRACT, 1, m, &cBinop_xgsQxrBm_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_qf6XsBlk, HV_BINOP_ADD, 1, m, &cBinop_qf6XsBlk_sendMessage);
}

void Heavy_PolyAmp::cReceive_PSupD5GD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_u3uYWY3Z, HV_BINOP_MULTIPLY, 0, m, &cBinop_u3uYWY3Z_sendMessage);
}

void Heavy_PolyAmp::cReceive_T4d28nYX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 48.0f, 0, m, &cBinop_7Swsxyny_sendMessage);
}

void Heavy_PolyAmp::cReceive_njnGXqjq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 48.0f, 0, m, &cBinop_QeJ6awJf_sendMessage);
}

void Heavy_PolyAmp::cReceive_cmSjhWlI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_pZjIMQuL, m);
}

void Heavy_PolyAmp::cReceive_9lb38w9L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_v4vJqqut, m);
}

void Heavy_PolyAmp::cReceive_FBQbVTuU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 48.0f, 0, m, &cBinop_PImkPPZR_sendMessage);
}

void Heavy_PolyAmp::cReceive_WC7Apf7V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 48.0f, 0, m, &cBinop_mfibdhhT_sendMessage);
}

void Heavy_PolyAmp::cReceive_TgM7N2qF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 3000.0f, 0, m, &cBinop_kNQfFNA9_sendMessage);
}

void Heavy_PolyAmp::cReceive_sHeIIir1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 450.0f, 0, m, &cBinop_H6EvRhOB_sendMessage);
}

void Heavy_PolyAmp::cReceive_z9JiOxdc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Ds3nWi4P_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_g91ZhjLG_sendMessage);
}

void Heavy_PolyAmp::cReceive_ZWd3IngQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oTYEfnwa, m);
}

void Heavy_PolyAmp::cReceive_Cl86RRtz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eBpOMQLU, m);
}

void Heavy_PolyAmp::cReceive_sI58vD9O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_T9YhSHju, m);
}

void Heavy_PolyAmp::cReceive_Krtd0a0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_0KVbtt2T, 0, m, &cIf_0KVbtt2T_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_LESS_THAN_EQL, 0.5f, 0, m, &cBinop_Vgs5gvLx_sendMessage);
  cIf_onMessage(_c, &Context(_c)->cIf_eUSTEdIQ, 0, m, &cIf_eUSTEdIQ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.5f, 0, m, &cBinop_e4vUmLOf_sendMessage);
}

void Heavy_PolyAmp::cReceive_CrLhpMKn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 30.0f, 0, m, &cBinop_ZBNC1j9w_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 10.0f, 0, m, &cBinop_wgKoEBdY_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_rzMDvLJP_sendMessage);
}




/*
 * Context Process Implementation
 */

int Heavy_PolyAmp::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }

  sendBangToReceiver(0xDD21C0EB); // send to __hv_bang~ on next cycle
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5, Bf6, Bf7, Bf8, Bf9, Bf10, Bf11, Bf12, Bf13, Bf14, Bf15, Bf16, Bf17, Bf18, Bf19, Bf20, Bf21, Bf22;

  // input and output vars
  hv_bufferf_t O0, O1;
  hv_bufferf_t I0;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    // load input buffers
    __hv_load_f(inputBuffers[0]+n, VOf(I0));

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_var_k_f(VOf(Bf0), -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f);
    __hv_var_k_f(VOf(Bf1), -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f);
    __hv_line_f(&sLine_lJutri6C, VOf(Bf2));
    __hv_line_f(&sLine_UiSy0dvN, VOf(Bf3));
    __hv_line_f(&sLine_eHJ5P3LP, VOf(Bf4));
    __hv_line_f(&sLine_GDjbN1Ie, VOf(Bf5));
    __hv_line_f(&sLine_673zDajK, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_5X5LPCEU, VIf(I0), VIf(Bf2), VIf(Bf3), VIf(Bf4), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_dit4mZoK, VOf(Bf5));
    __hv_line_f(&sLine_7B6pcdzE, VOf(Bf4));
    __hv_line_f(&sLine_lvMM3Z6S, VOf(Bf3));
    __hv_line_f(&sLine_Lg54uYCr, VOf(Bf2));
    __hv_line_f(&sLine_9eHu1bhF, VOf(Bf7));
    __hv_biquad_f(&sBiquad_s_Jv2FzLZ9, VIf(Bf6), VIf(Bf5), VIf(Bf4), VIf(Bf3), VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_line_f(&sLine_W4RU3afm, VOf(Bf2));
    __hv_line_f(&sLine_OgMiTNFs, VOf(Bf3));
    __hv_line_f(&sLine_BmfQr2TA, VOf(Bf4));
    __hv_line_f(&sLine_dsg6X6ei, VOf(Bf5));
    __hv_line_f(&sLine_UJDov5F7, VOf(Bf6));
    __hv_biquad_f(&sBiquad_s_aJpF5lKa, VIf(Bf7), VIf(Bf2), VIf(Bf3), VIf(Bf4), VIf(Bf5), VIf(Bf6), VOf(Bf6));
    __hv_line_f(&sLine_uOYeDF5E, VOf(Bf5));
    __hv_line_f(&sLine_XWFfnmpl, VOf(Bf4));
    __hv_line_f(&sLine_Q0WoCJFU, VOf(Bf3));
    __hv_line_f(&sLine_QIqdvnOY, VOf(Bf2));
    __hv_line_f(&sLine_jSme1jIA, VOf(Bf7));
    __hv_biquad_f(&sBiquad_s_7ylPCt6K, VIf(Bf6), VIf(Bf5), VIf(Bf4), VIf(Bf3), VIf(Bf2), VIf(Bf7), VOf(Bf7));
    __hv_varread_f(&sVarf_pZjIMQuL, VOf(Bf2));
    __hv_mul_f(VIf(Bf7), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf3), -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f);
    __hv_gt_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f);
    __hv_lte_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f);
    __hv_var_k_f(VOf(Bf3), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f);
    __hv_var_k_f(VOf(Bf8), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f);
    __hv_mul_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_fma_f(VIf(Bf3), VIf(Bf6), VIf(Bf9), VOf(Bf9));
    __hv_fma_f(VIf(Bf5), VIf(Bf4), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf4), -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f);
    __hv_add_f(VIf(Bf9), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf9), -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f);
    __hv_neq_f(VIf(Bf4), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf5), 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f);
    __hv_var_k_f(VOf(Bf6), 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f);
    __hv_gt_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf6), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf6), 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f);
    __hv_gt_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf6), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf6), 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f);
    __hv_lte_f(VIf(Bf8), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f);
    __hv_var_k_f(VOf(Bf6), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f);
    __hv_var_k_f(VOf(Bf12), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf10), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf13), -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f);
    __hv_mul_f(VIf(Bf12), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf6), VIf(Bf11), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf10), VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf8), -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f);
    __hv_add_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf13), -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f);
    __hv_neq_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf10), -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f);
    __hv_gt_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf10), -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f);
    __hv_lte_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf11), 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f);
    __hv_var_k_f(VOf(Bf10), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf12), 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f);
    __hv_var_k_f(VOf(Bf14), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf6), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf15), 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f);
    __hv_mul_f(VIf(Bf14), VIf(Bf15), VOf(Bf15));
    __hv_fma_f(VIf(Bf10), VIf(Bf12), VIf(Bf15), VOf(Bf15));
    __hv_fma_f(VIf(Bf6), VIf(Bf11), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf11), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_add_f(VIf(Bf15), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf15), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_neq_f(VIf(Bf11), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf6), -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f);
    __hv_gt_f(VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf2), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf6), -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f);
    __hv_lte_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_mul_f(VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf12), 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f);
    __hv_var_k_f(VOf(Bf6), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf14), 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f);
    __hv_var_k_f(VOf(Bf16), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf10), VIf(Bf16), VOf(Bf16));
    __hv_var_k_f(VOf(Bf17), 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f);
    __hv_mul_f(VIf(Bf16), VIf(Bf17), VOf(Bf17));
    __hv_fma_f(VIf(Bf6), VIf(Bf14), VIf(Bf17), VOf(Bf17));
    __hv_fma_f(VIf(Bf10), VIf(Bf12), VIf(Bf17), VOf(Bf17));
    __hv_var_k_f(VOf(Bf12), -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f);
    __hv_add_f(VIf(Bf17), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf17), -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f);
    __hv_neq_f(VIf(Bf12), VIf(Bf17), VOf(Bf17));
    __hv_var_k_f(VOf(Bf10), 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f);
    __hv_gt_f(VIf(Bf2), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf10), VIf(Bf14), VOf(Bf14));
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf10), 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f);
    __hv_lte_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf14), 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f);
    __hv_var_k_f(VOf(Bf10), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf6), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf16), -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f);
    __hv_var_k_f(VOf(Bf18), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf6), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf19), 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f);
    __hv_mul_f(VIf(Bf18), VIf(Bf19), VOf(Bf19));
    __hv_fma_f(VIf(Bf10), VIf(Bf16), VIf(Bf19), VOf(Bf19));
    __hv_fma_f(VIf(Bf6), VIf(Bf14), VIf(Bf19), VOf(Bf19));
    __hv_var_k_f(VOf(Bf14), -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f);
    __hv_add_f(VIf(Bf19), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf19), -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f);
    __hv_neq_f(VIf(Bf14), VIf(Bf19), VOf(Bf19));
    __hv_var_k_f(VOf(Bf6), -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f);
    __hv_var_k_f(VOf(Bf16), -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f);
    __hv_lte_f(VIf(Bf2), VIf(Bf16), VOf(Bf16));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf16), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf16), -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f);
    __hv_gt_f(VIf(Bf2), VIf(Bf16), VOf(Bf16));
    __hv_var_k_f(VOf(Bf18), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf16), VIf(Bf18), VOf(Bf18));
    __hv_mul_f(VIf(Bf2), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf2), 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f);
    __hv_lte_f(VIf(Bf18), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf16), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf2), VIf(Bf16), VOf(Bf16));
    __hv_mul_f(VIf(Bf18), VIf(Bf16), VOf(Bf16));
    __hv_var_k_f(VOf(Bf18), 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f);
    __hv_var_k_f(VOf(Bf2), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf16), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf20), 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f);
    __hv_var_k_f(VOf(Bf21), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf16), VIf(Bf21), VOf(Bf21));
    __hv_var_k_f(VOf(Bf22), -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f);
    __hv_mul_f(VIf(Bf21), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf2), VIf(Bf20), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf16), VIf(Bf18), VIf(Bf22), VOf(Bf22));
    __hv_var_k_f(VOf(Bf18), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_add_f(VIf(Bf22), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf22), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_neq_f(VIf(Bf18), VIf(Bf22), VOf(Bf22));
    __hv_mul_f(VIf(Bf18), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf6), VIf(Bf10), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf14), VIf(Bf19), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf12), VIf(Bf17), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf11), VIf(Bf15), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf8), VIf(Bf13), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf5), VIf(Bf3), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf4), VIf(Bf9), VIf(Bf22), VOf(Bf22));
    __hv_var_k_f(VOf(Bf9), -0.5f, -0.5f, -0.5f, -0.5f, -0.5f, -0.5f, -0.5f, -0.5f);
    __hv_mul_f(VIf(Bf22), VIf(Bf9), VOf(Bf9));
    __hv_varread_f(&sVarf_v4vJqqut, VOf(Bf22));
    __hv_mul_f(VIf(Bf9), VIf(Bf22), VOf(Bf22));
    __hv_var_k_f(VOf(Bf9), -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f);
    __hv_lte_f(VIf(Bf22), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf9), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf9), -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f);
    __hv_gt_f(VIf(Bf22), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf9), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf22), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf9), -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f);
    __hv_lte_f(VIf(Bf3), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f);
    __hv_var_k_f(VOf(Bf9), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf13), 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f);
    __hv_var_k_f(VOf(Bf8), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf5), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf15), 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f);
    __hv_mul_f(VIf(Bf8), VIf(Bf15), VOf(Bf15));
    __hv_fma_f(VIf(Bf9), VIf(Bf13), VIf(Bf15), VOf(Bf15));
    __hv_fma_f(VIf(Bf5), VIf(Bf3), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf3), -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f);
    __hv_add_f(VIf(Bf15), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf15), -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f);
    __hv_neq_f(VIf(Bf3), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf5), 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f);
    __hv_gt_f(VIf(Bf22), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf5), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf22), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf5), 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f);
    __hv_lte_f(VIf(Bf13), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf13), 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f);
    __hv_var_k_f(VOf(Bf5), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf8), 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f);
    __hv_var_k_f(VOf(Bf11), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf9), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf17), -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f);
    __hv_mul_f(VIf(Bf11), VIf(Bf17), VOf(Bf17));
    __hv_fma_f(VIf(Bf5), VIf(Bf8), VIf(Bf17), VOf(Bf17));
    __hv_fma_f(VIf(Bf9), VIf(Bf13), VIf(Bf17), VOf(Bf17));
    __hv_var_k_f(VOf(Bf13), -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f);
    __hv_add_f(VIf(Bf17), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf17), -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f);
    __hv_neq_f(VIf(Bf13), VIf(Bf17), VOf(Bf17));
    __hv_var_k_f(VOf(Bf9), -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f);
    __hv_gt_f(VIf(Bf22), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf22), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f);
    __hv_lte_f(VIf(Bf8), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf8), 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f);
    __hv_var_k_f(VOf(Bf9), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f);
    __hv_var_k_f(VOf(Bf12), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf5), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf19), 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f);
    __hv_mul_f(VIf(Bf12), VIf(Bf19), VOf(Bf19));
    __hv_fma_f(VIf(Bf9), VIf(Bf11), VIf(Bf19), VOf(Bf19));
    __hv_fma_f(VIf(Bf5), VIf(Bf8), VIf(Bf19), VOf(Bf19));
    __hv_var_k_f(VOf(Bf8), -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f);
    __hv_add_f(VIf(Bf19), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf19), -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f);
    __hv_neq_f(VIf(Bf8), VIf(Bf19), VOf(Bf19));
    __hv_var_k_f(VOf(Bf5), -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f);
    __hv_gt_f(VIf(Bf22), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf22), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f);
    __hv_lte_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf5), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf11), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf11), 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f);
    __hv_var_k_f(VOf(Bf5), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf9), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf12), 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f);
    __hv_var_k_f(VOf(Bf14), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf9), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf10), 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f);
    __hv_mul_f(VIf(Bf14), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf5), VIf(Bf12), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf9), VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf11), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_add_f(VIf(Bf10), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf10), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_neq_f(VIf(Bf11), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf9), 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f);
    __hv_var_k_f(VOf(Bf12), 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f);
    __hv_gt_f(VIf(Bf22), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf12), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf12), 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f);
    __hv_gt_f(VIf(Bf22), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_mul_f(VIf(Bf22), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf12), 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f);
    __hv_lte_f(VIf(Bf14), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf14), 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f);
    __hv_var_k_f(VOf(Bf12), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf18), -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f);
    __hv_var_k_f(VOf(Bf16), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf6), VIf(Bf16), VOf(Bf16));
    __hv_var_k_f(VOf(Bf20), 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f);
    __hv_mul_f(VIf(Bf16), VIf(Bf20), VOf(Bf20));
    __hv_fma_f(VIf(Bf12), VIf(Bf18), VIf(Bf20), VOf(Bf20));
    __hv_fma_f(VIf(Bf6), VIf(Bf14), VIf(Bf20), VOf(Bf20));
    __hv_var_k_f(VOf(Bf14), -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f);
    __hv_add_f(VIf(Bf20), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf20), -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f);
    __hv_neq_f(VIf(Bf14), VIf(Bf20), VOf(Bf20));
    __hv_var_k_f(VOf(Bf6), -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f);
    __hv_gt_f(VIf(Bf22), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf18), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf6), VIf(Bf18), VOf(Bf18));
    __hv_mul_f(VIf(Bf22), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf22), 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f);
    __hv_lte_f(VIf(Bf18), VIf(Bf22), VOf(Bf22));
    __hv_var_k_f(VOf(Bf6), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf22), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf18), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf18), 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f);
    __hv_var_k_f(VOf(Bf22), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf6), VIf(Bf22), VOf(Bf22));
    __hv_var_k_f(VOf(Bf12), -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f);
    __hv_var_k_f(VOf(Bf16), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf6), VIf(Bf16), VOf(Bf16));
    __hv_var_k_f(VOf(Bf2), 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f);
    __hv_mul_f(VIf(Bf16), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf22), VIf(Bf12), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf6), VIf(Bf18), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf18), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_add_f(VIf(Bf2), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf2), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_neq_f(VIf(Bf18), VIf(Bf2), VOf(Bf2));
    __hv_mul_f(VIf(Bf18), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf14), VIf(Bf20), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf9), VIf(Bf5), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf11), VIf(Bf10), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf8), VIf(Bf19), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf13), VIf(Bf17), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf3), VIf(Bf15), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf1), VIf(Bf4), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf4), -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f);
    __hv_lte_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f);
    __hv_var_k_f(VOf(Bf15), 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f);
    __hv_gt_f(VIf(Bf2), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf15), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf15), -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f);
    __hv_gt_f(VIf(Bf2), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf17), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf15), VIf(Bf17), VOf(Bf17));
    __hv_mul_f(VIf(Bf2), VIf(Bf17), VOf(Bf17));
    __hv_var_k_f(VOf(Bf15), -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f);
    __hv_lte_f(VIf(Bf17), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf15), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf17), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf17), 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f);
    __hv_var_k_f(VOf(Bf15), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf13), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf19), 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f);
    __hv_var_k_f(VOf(Bf8), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf13), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf10), 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f);
    __hv_mul_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf15), VIf(Bf19), VIf(Bf10), VOf(Bf10));
    __hv_fma_f(VIf(Bf13), VIf(Bf17), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf17), -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f);
    __hv_add_f(VIf(Bf10), VIf(Bf17), VOf(Bf17));
    __hv_var_k_f(VOf(Bf10), -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f);
    __hv_neq_f(VIf(Bf17), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf13), -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f);
    __hv_gt_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf19), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf13), VIf(Bf19), VOf(Bf19));
    __hv_mul_f(VIf(Bf2), VIf(Bf19), VOf(Bf19));
    __hv_var_k_f(VOf(Bf13), 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f);
    __hv_lte_f(VIf(Bf19), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf15), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf13), VIf(Bf15), VOf(Bf15));
    __hv_mul_f(VIf(Bf19), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf19), 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f);
    __hv_var_k_f(VOf(Bf13), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf15), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf8), 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f);
    __hv_var_k_f(VOf(Bf11), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf15), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f);
    __hv_mul_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf13), VIf(Bf8), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf15), VIf(Bf19), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf19), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_add_f(VIf(Bf5), VIf(Bf19), VOf(Bf19));
    __hv_var_k_f(VOf(Bf5), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_neq_f(VIf(Bf19), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf15), -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f);
    __hv_gt_f(VIf(Bf2), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf15), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf2), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf15), -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f);
    __hv_lte_f(VIf(Bf8), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf15), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf8), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf8), 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f);
    __hv_var_k_f(VOf(Bf15), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf13), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf11), 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f);
    __hv_var_k_f(VOf(Bf9), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf13), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf20), 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f);
    __hv_mul_f(VIf(Bf9), VIf(Bf20), VOf(Bf20));
    __hv_fma_f(VIf(Bf15), VIf(Bf11), VIf(Bf20), VOf(Bf20));
    __hv_fma_f(VIf(Bf13), VIf(Bf8), VIf(Bf20), VOf(Bf20));
    __hv_var_k_f(VOf(Bf8), -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f);
    __hv_add_f(VIf(Bf20), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf20), -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f);
    __hv_neq_f(VIf(Bf8), VIf(Bf20), VOf(Bf20));
    __hv_var_k_f(VOf(Bf13), 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f);
    __hv_gt_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf11), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf13), VIf(Bf11), VOf(Bf11));
    __hv_mul_f(VIf(Bf2), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf13), 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f);
    __hv_lte_f(VIf(Bf11), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf15), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf13), VIf(Bf15), VOf(Bf15));
    __hv_mul_f(VIf(Bf11), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf11), 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f);
    __hv_var_k_f(VOf(Bf13), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf15), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf9), 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f);
    __hv_var_k_f(VOf(Bf14), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf15), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf18), -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f);
    __hv_mul_f(VIf(Bf14), VIf(Bf18), VOf(Bf18));
    __hv_fma_f(VIf(Bf13), VIf(Bf9), VIf(Bf18), VOf(Bf18));
    __hv_fma_f(VIf(Bf15), VIf(Bf11), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf11), -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f);
    __hv_add_f(VIf(Bf18), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf18), -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f);
    __hv_neq_f(VIf(Bf11), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf15), 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f);
    __hv_gt_f(VIf(Bf2), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf15), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf15), 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f);
    __hv_lte_f(VIf(Bf9), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf15), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf9), 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f);
    __hv_var_k_f(VOf(Bf15), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf13), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf14), 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f);
    __hv_var_k_f(VOf(Bf6), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf12), -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f);
    __hv_mul_f(VIf(Bf6), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf15), VIf(Bf14), VIf(Bf12), VOf(Bf12));
    __hv_fma_f(VIf(Bf13), VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf9), -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f);
    __hv_add_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf12), -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f);
    __hv_neq_f(VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf13), -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f);
    __hv_gt_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf13), VIf(Bf14), VOf(Bf14));
    __hv_mul_f(VIf(Bf2), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf2), -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f);
    __hv_lte_f(VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf13), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf2), VIf(Bf13), VOf(Bf13));
    __hv_mul_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf14), 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f);
    __hv_var_k_f(VOf(Bf2), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf13), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf15), 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f);
    __hv_var_k_f(VOf(Bf6), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf22), 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f);
    __hv_mul_f(VIf(Bf6), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf2), VIf(Bf15), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf13), VIf(Bf14), VIf(Bf22), VOf(Bf22));
    __hv_var_k_f(VOf(Bf14), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_add_f(VIf(Bf22), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf22), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_neq_f(VIf(Bf14), VIf(Bf22), VOf(Bf22));
    __hv_mul_f(VIf(Bf14), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf9), VIf(Bf12), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf11), VIf(Bf18), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf8), VIf(Bf20), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf19), VIf(Bf5), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf17), VIf(Bf10), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf22), VOf(Bf22));
    __hv_fma_f(VIf(Bf0), VIf(Bf1), VIf(Bf22), VOf(Bf22));
    __hv_var_k_f(VOf(Bf1), -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f);
    __hv_gt_f(VIf(Bf22), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf22), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f);
    __hv_lte_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f, 0.62768f);
    __hv_var_k_f(VOf(Bf1), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f, 1.0672f);
    __hv_var_k_f(VOf(Bf10), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf3), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf17), 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f, 0.92483f);
    __hv_mul_f(VIf(Bf10), VIf(Bf17), VOf(Bf17));
    __hv_fma_f(VIf(Bf1), VIf(Bf4), VIf(Bf17), VOf(Bf17));
    __hv_fma_f(VIf(Bf3), VIf(Bf0), VIf(Bf17), VOf(Bf17));
    __hv_var_k_f(VOf(Bf0), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_add_f(VIf(Bf17), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf17), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_neq_f(VIf(Bf0), VIf(Bf17), VOf(Bf17));
    __hv_var_k_f(VOf(Bf3), -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f, -0.00212f);
    __hv_gt_f(VIf(Bf22), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf22), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f);
    __hv_lte_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf1), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f, 0.62766f);
    __hv_var_k_f(VOf(Bf3), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf10), -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f, -0.78522f);
    __hv_var_k_f(VOf(Bf5), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf19), 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f, 1.0563f);
    __hv_mul_f(VIf(Bf5), VIf(Bf19), VOf(Bf19));
    __hv_fma_f(VIf(Bf3), VIf(Bf10), VIf(Bf19), VOf(Bf19));
    __hv_fma_f(VIf(Bf1), VIf(Bf4), VIf(Bf19), VOf(Bf19));
    __hv_var_k_f(VOf(Bf4), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_add_f(VIf(Bf19), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf19), -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f, -0.13322f);
    __hv_neq_f(VIf(Bf4), VIf(Bf19), VOf(Bf19));
    __hv_var_k_f(VOf(Bf1), -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f, -0.32623f);
    __hv_var_k_f(VOf(Bf10), -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f);
    __hv_lte_f(VIf(Bf22), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf3), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf10), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf10), 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f, 0.20041f);
    __hv_gt_f(VIf(Bf22), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf5), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf10), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf22), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf10), 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f);
    __hv_lte_f(VIf(Bf5), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf20), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf10), VIf(Bf20), VOf(Bf20));
    __hv_mul_f(VIf(Bf5), VIf(Bf20), VOf(Bf20));
    __hv_var_k_f(VOf(Bf5), 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f, 0.59147f);
    __hv_var_k_f(VOf(Bf10), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf20), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f, 1.2369f);
    __hv_var_k_f(VOf(Bf18), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf20), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf11), -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f, -1.0856f);
    __hv_mul_f(VIf(Bf18), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf10), VIf(Bf8), VIf(Bf11), VOf(Bf11));
    __hv_fma_f(VIf(Bf20), VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf5), -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f);
    __hv_add_f(VIf(Bf11), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf11), -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f, -0.13081f);
    __hv_neq_f(VIf(Bf5), VIf(Bf11), VOf(Bf11));
    __hv_var_k_f(VOf(Bf20), 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f, 0.70177f);
    __hv_var_k_f(VOf(Bf8), 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f);
    __hv_gt_f(VIf(Bf22), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf10), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf8), VIf(Bf10), VOf(Bf10));
    __hv_var_k_f(VOf(Bf8), -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f);
    __hv_gt_f(VIf(Bf22), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf18), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf8), VIf(Bf18), VOf(Bf18));
    __hv_mul_f(VIf(Bf22), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf8), -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f, -0.20759f);
    __hv_lte_f(VIf(Bf18), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf12), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf8), VIf(Bf12), VOf(Bf12));
    __hv_mul_f(VIf(Bf18), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf18), 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f, 0.56276f);
    __hv_var_k_f(VOf(Bf8), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f, 0.42263f);
    __hv_var_k_f(VOf(Bf14), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf12), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf13), 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f, 0.75441f);
    __hv_mul_f(VIf(Bf14), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf8), VIf(Bf9), VIf(Bf13), VOf(Bf13));
    __hv_fma_f(VIf(Bf12), VIf(Bf18), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf18), -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f);
    __hv_add_f(VIf(Bf13), VIf(Bf18), VOf(Bf18));
    __hv_var_k_f(VOf(Bf13), -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f, -0.13772f);
    __hv_neq_f(VIf(Bf18), VIf(Bf13), VOf(Bf13));
    __hv_var_k_f(VOf(Bf12), 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f, 0.50062f);
    __hv_gt_f(VIf(Bf22), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf9), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf12), VIf(Bf9), VOf(Bf9));
    __hv_mul_f(VIf(Bf22), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf12), 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f, 0.89961f);
    __hv_lte_f(VIf(Bf9), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf12), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf9), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf9), 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f, 1.6548f);
    __hv_var_k_f(VOf(Bf12), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf8), VIf(Bf12), VOf(Bf12));
    __hv_var_k_f(VOf(Bf14), -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f, -0.8872f);
    __hv_var_k_f(VOf(Bf15), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf8), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf2), 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f, 0.32873f);
    __hv_mul_f(VIf(Bf15), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf12), VIf(Bf14), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf8), VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf9), -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f);
    __hv_add_f(VIf(Bf2), VIf(Bf9), VOf(Bf9));
    __hv_var_k_f(VOf(Bf2), -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f, -0.30825f);
    __hv_neq_f(VIf(Bf9), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf8), -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f, -0.98338f);
    __hv_gt_f(VIf(Bf22), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf14), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf8), VIf(Bf14), VOf(Bf14));
    __hv_mul_f(VIf(Bf22), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf22), -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f, -0.50698f);
    __hv_lte_f(VIf(Bf14), VIf(Bf22), VOf(Bf22));
    __hv_var_k_f(VOf(Bf8), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_and_f(VIf(Bf22), VIf(Bf8), VOf(Bf8));
    __hv_mul_f(VIf(Bf14), VIf(Bf8), VOf(Bf8));
    __hv_var_k_f(VOf(Bf14), 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f, 0.2971f);
    __hv_var_k_f(VOf(Bf22), 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f, 2.0f);
    __hv_pow_f(VIf(Bf8), VIf(Bf22), VOf(Bf22));
    __hv_var_k_f(VOf(Bf12), 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f, 0.23041f);
    __hv_var_k_f(VOf(Bf15), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_pow_f(VIf(Bf8), VIf(Bf15), VOf(Bf15));
    __hv_var_k_f(VOf(Bf6), 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f, 0.078101f);
    __hv_mul_f(VIf(Bf15), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf22), VIf(Bf12), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf8), VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_var_k_f(VOf(Bf14), -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f);
    __hv_add_f(VIf(Bf6), VIf(Bf14), VOf(Bf14));
    __hv_var_k_f(VOf(Bf6), -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f, -0.18261f);
    __hv_neq_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_mul_f(VIf(Bf14), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf9), VIf(Bf2), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf18), VIf(Bf13), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf20), VIf(Bf10), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf5), VIf(Bf11), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf1), VIf(Bf3), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf4), VIf(Bf19), VIf(Bf6), VOf(Bf6));
    __hv_fma_f(VIf(Bf0), VIf(Bf17), VIf(Bf6), VOf(Bf6));
    __hv_varread_f(&sVarf_eBpOMQLU, VOf(Bf17));
    __hv_varread_f(&sVarf_S8QvA8SJ, VOf(Bf0));
    __hv_mul_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf7), 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f, 3.0f);
    __hv_min_f(VIf(Bf0), VIf(Bf7), VOf(Bf7));
    __hv_var_k_f(VOf(Bf0), -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f, -3.0f);
    __hv_max_f(VIf(Bf7), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf7));
    __hv_var_k_f(VOf(Bf19), 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f, 27.0f);
    __hv_add_f(VIf(Bf7), VIf(Bf19), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f, 9.0f);
    __hv_fma_f(VIf(Bf7), VIf(Bf3), VIf(Bf19), VOf(Bf19));
    __hv_div_f(VIf(Bf4), VIf(Bf19), VOf(Bf19));
    __hv_mul_f(VIf(Bf0), VIf(Bf19), VOf(Bf19));
    __hv_varread_f(&sVarf_T9YhSHju, VOf(Bf0));
    __hv_mul_f(VIf(Bf19), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf6), VIf(Bf17), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_GXLNSMAu, VOf(Bf17));
    __hv_line_f(&sLine_MNkW16X0, VOf(Bf6));
    __hv_line_f(&sLine_IdIljFsf, VOf(Bf19));
    __hv_line_f(&sLine_pLZbr37q, VOf(Bf4));
    __hv_line_f(&sLine_RX3SIzmS, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_NIhDcufJ, VIf(Bf0), VIf(Bf17), VIf(Bf6), VIf(Bf19), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_lMt0kuwP, VOf(Bf4));
    __hv_line_f(&sLine_5IcMBxhc, VOf(Bf19));
    __hv_line_f(&sLine_25ak13z5, VOf(Bf6));
    __hv_line_f(&sLine_ikgsTeC3, VOf(Bf17));
    __hv_line_f(&sLine_M08qViih, VOf(Bf0));
    __hv_biquad_f(&sBiquad_s_5X0J3c3t, VIf(Bf3), VIf(Bf4), VIf(Bf19), VIf(Bf6), VIf(Bf17), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_8IeX9sUC, VOf(Bf17));
    __hv_line_f(&sLine_JEp2zsve, VOf(Bf6));
    __hv_line_f(&sLine_b59Ql9Mh, VOf(Bf19));
    __hv_line_f(&sLine_loIGPmkN, VOf(Bf4));
    __hv_line_f(&sLine_34lt9XqA, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_Tvveazcv, VIf(Bf0), VIf(Bf17), VIf(Bf6), VIf(Bf19), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_f5rcXkuQ, VOf(Bf4));
    __hv_line_f(&sLine_kOavsUnf, VOf(Bf19));
    __hv_line_f(&sLine_5vVR3XBe, VOf(Bf6));
    __hv_line_f(&sLine_T1zT7z3P, VOf(Bf17));
    __hv_line_f(&sLine_ipSTz39o, VOf(Bf0));
    __hv_biquad_f(&sBiquad_s_phttYyvx, VIf(Bf3), VIf(Bf4), VIf(Bf19), VIf(Bf6), VIf(Bf17), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_EYDACozI, VOf(Bf17));
    __hv_line_f(&sLine_8Dum1PqW, VOf(Bf6));
    __hv_line_f(&sLine_pxhpPhsb, VOf(Bf19));
    __hv_line_f(&sLine_zM1SxRSY, VOf(Bf4));
    __hv_line_f(&sLine_NQX0gTHs, VOf(Bf3));
    __hv_biquad_f(&sBiquad_s_U116WUTG, VIf(Bf0), VIf(Bf17), VIf(Bf6), VIf(Bf19), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_J5oYFgyA, VOf(Bf4));
    __hv_line_f(&sLine_f6vbi6xc, VOf(Bf19));
    __hv_line_f(&sLine_ukJv7fqE, VOf(Bf6));
    __hv_line_f(&sLine_u9bVc2KW, VOf(Bf17));
    __hv_line_f(&sLine_qjksU63Z, VOf(Bf0));
    __hv_biquad_f(&sBiquad_s_uILMhsE4, VIf(Bf3), VIf(Bf4), VIf(Bf19), VIf(Bf6), VIf(Bf17), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_oTYEfnwa, VOf(Bf17));
    __hv_mul_f(VIf(Bf0), VIf(Bf17), VOf(Bf17));
    __hv_add_f(VIf(Bf17), VIf(O0), VOf(O0));
    __hv_add_f(VIf(Bf17), VIf(O1), VOf(O1));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed

}

int Heavy_PolyAmp::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 1 channel(s)
  float **const bIn = &inputBuffers;

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_PolyAmp::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 1 channel(s), uninterleave
  float *const bIn = inputBuffers;

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
