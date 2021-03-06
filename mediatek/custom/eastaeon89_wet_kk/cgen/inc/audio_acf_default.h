/*******************************************************************************
 *
 * Filename:
 * ---------
 * audio_acf_default.h
 *
 * Project:
 * --------
 *   ALPS
 *
 * Description:
 * ------------
 * This file is the header of audio customization related parameters or definition.
 *
 * Author:
 * -------
 * Tina Tsai
 *
 *============================================================================
 *             HISTORY
 * Below this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *------------------------------------------------------------------------------
 * $Revision:$
 * $Modtime:$
 * $Log:$
 *
 *
 *
 *
 *------------------------------------------------------------------------------
 * Upper this line, this part is controlled by CC/CQ. DO NOT MODIFY!!
 *============================================================================
 ****************************************************************************/
#ifndef AUDIO_ACF_DEFAULT_H
#define AUDIO_ACF_DEFAULT_H

    /* Compensation Filter HSF coeffs: default all pass filter       */
    /* BesLoudness also uses this coeffs    */ 
    #define BES_LOUDNESS_HSF_COEFF \
0x7915c50,   0xf0dd4760,   0x7915c50,   0x78e5c6ba,   0x0,     \
0x787de35,   0xf0f04396,   0x787de35,   0x7845c749,   0x0,     \
0x75c4ba5,   0xf14768b6,   0x75c4ba5,   0x755bc9d2,   0x0,     \
0x728aba0,   0xf1aea8bf,   0x728aba0,   0x71d5ccbf,   0x0,     \
0x716be89,   0xf1d282ed,   0x716be89,   0x7096cdbe,   0x0,     \
0x6c58c6d,   0xf274e725,   0x6c58c6d,   0x6ad4d222,   0x0,     \
0x6679cfd,   0xf330c606,   0x6679cfd,   0x63e7d6f4,   0x0,     \
0x6478e52,   0xf370e35c,   0x6478e52,   0x617ad888,   0x0,     \
0x5b9d488,   0xf48c56ef,   0x5b9d488,   0x5655df1a,   0x0,     \
    \
0x0,   0x0,   0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,   0x0,   0x0

    /* Compensation Filter BPF coeffs: default all pass filter      */ 
    #define BES_LOUDNESS_BPF_COEFF \
0x3d23bf43,   0x376240bc,   0xcb790000,     \
0x3ce8c85a,   0x36b137a5,   0xcc660000,     \
0x3be0f513,   0x33960aec,   0xd0880000,     \
0x3ab428db,   0x300fd724,   0xd53c0000,     \
0x3a4e386e,   0x2eddc791,   0xd6d30000,     \
0x0,   0x0,   0x0,     \
    \
0x3f9584bc,   0x3c5c7b43,   0xc40e0000,     \
0x3f8c8534,   0x3c0c7acb,   0xc4670000,     \
0x3f62877e,   0x3a9f7881,   0xc5fe0000,     \
0x3f308a7f,   0x38ef7580,   0xc7df0000,     \
0x3f1f8b9d,   0x38597462,   0xc8860000,     \
0x3ed1912d,   0x35b46ed2,   0xcb790000,     \
    \
0x41418bb2,   0x375d744d,   0xc7610000,     \
0x415c8d13,   0x36a572ec,   0xc7fe0000,     \
0x41d59427,   0x33606bd8,   0xcac90000,     \
0x42639e10,   0x2f9261ef,   0xce0a0000,     \
0x4293a1de,   0x2e435e21,   0xcf280000,     \
0x436db541,   0x286a4abe,   0xd4280000,     \
    \
0x4156955d,   0x36576aa2,   0xc8510000,     \
0x41739851,   0x358a67ae,   0xc9010000,     \
0x41f3a7e3,   0x31ec581c,   0xcc1f0000,     \
0x4288be03,   0x2dba41fc,   0xcfbd0000,     \
0x42bbc672,   0x2c4a398d,   0xd0fa0000,     \
0x439fef7f,   0x25de1080,   0xd6810000,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
    \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0

#define BES_LOUDNESS_LPF_COEFF \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0,     \
0x0,   0x0,   0x0

    #define BES_LOUDNESS_WS_GAIN_MAX  0
           
    #define BES_LOUDNESS_WS_GAIN_MIN  0
           
    #define BES_LOUDNESS_FILTER_FIRST  0
           
    #define BES_LOUDNESS_GAIN_MAP_IN \
    0, 0, 0, 0,  0
   
    #define BES_LOUDNESS_GAIN_MAP_OUT \            
    0, 0, 0, 0, 0

	#define BES_LOUDNESS_ATT_TIME	164
	#define BES_LOUDNESS_REL_TIME	16400              

#endif
