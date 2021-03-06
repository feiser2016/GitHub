/*********************************************************************
*                SEGGER MICROCONTROLLER SYSTEME GmbH                 *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*
* C-file generated by
*
*        Bitmap converter for emWin V5.04.
*        Compiled Jan  8 2010, 16:37:17
*        (C) 1998 - 2005 Segger Microcontroller Systeme GmbH
*
**********************************************************************
*
* Source file: Signal4
* Dimensions:  38 * 35
* NumColors:   256
*
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

/*   Palette
The following are the entries of the palette table.
Every entry is a 32-bit value (of which 24 bits are actually used)
the lower   8 bits represent the Red component,
the middle  8 bits represent the Green component,
the highest 8 bits (of the 24 bits used) represent the Blue component
as follows:   0xBBGGRR
*/

static GUI_CONST_STORAGE GUI_COLOR ColorsSignal4[] = {
     0xF1FFDF,0x000000,0x414141,0x393939
    ,0x222222,0x3E3E3E,0x2C2C2C,0x353535
    ,0x323232,0x2A2A2A,0x090909,0x262627
    ,0x1A1B1A,0x1F1E1F,0x0E0E0E,0x121312
    ,0x161617,0x050505,0xE5FFD3,0x1C1A1D
    ,0x1D2A19,0x4E6545,0x55694D,0xCDF4BB
    ,0x0C130A,0x4A6241,0x81B169,0xA1CE8D
    ,0xCAEDB9,0x050905,0x080E07,0x091206
    ,0x111B0D,0x151914,0x373638,0x2C4921
    ,0x36512B,0x5E9545,0x6DA154,0x74A65D
    ,0x9DCC88,0xAED99A,0xB5DDA3,0x010402
    ,0x020802,0x151E11,0x191D18,0x1B2816
    ,0x1E201E,0x21291E,0x242126,0x242E21
    ,0x383638,0x354F2A,0x38512D,0x316E2A
    ,0x34712A,0x48603E,0x497E34,0x485E40
    ,0x4D6144,0x526648,0x55654C,0x5A7C4E
    ,0x468132,0x4A8136,0x4A8434,0x4F8638
    ,0x528A3A,0x528C38,0x5A9040,0x689C4D
    ,0x699158,0x759D64,0x79AC62,0x7AA964
    ,0x7EB165,0x82B56B,0x89AE79,0x8CBD75
    ,0x90BF79,0x91C17A,0x92C17D,0xAAC89B
    ,0xA5D290,0xA9D594,0xAFD99C,0xB1DB9D
    ,0xB2DD9D,0xBAE4A7,0xBCE6A9,0xC1EBAD
    ,0xC5EDB2,0xD4F9C2,0xE1FFCF,0xEEFFDC
    ,0x040603,0x050107,0x040903,0x070708
    ,0x080509,0x070C08,0x0B090C,0x071005
    ,0x0F180D,0x0F0D10,0x120F12,0x141214
    ,0x121B10,0x181D17,0x181619,0x162312
    ,0x1B2717,0x1B2518,0x273D1F,0x201F21
    ,0x29272A,0x2C2F2B,0x2B2A2C,0x2C2A2D
    ,0x273722,0x283324,0x303A2E,0x313C2F
    ,0x2F2D30,0x312F32,0x333D31,0x383E36
    ,0x3B3A3C,0x29471E,0x31402B,0x37532C
    ,0x3A542F,0x3B4A34,0x3B4D34,0x3D4B38
    ,0x3A5330,0x3D5533,0x296726,0x3F722E
    ,0x38752D,0x3C772E,0x3C7531,0x3F7930
    ,0x434D3F,0x405736,0x45573E,0x445A3A
    ,0x445C38,0x435A3C,0x455B3D,0x485E3F
    ,0x407B2F,0x436A34,0x427930,0x437D31
    ,0x447D31,0x457A37,0x4B5D44,0x4C6043
    ,0x4C6443,0x53634B,0x54684B,0x526C49
    ,0x537249,0x547549,0x56764C,0x5E7B55
    ,0x607056,0x62735A,0x64765C,0x617C59
    ,0x488333,0x4E8637,0x50823E,0x588C3F
    ,0x568941,0x5D8F46,0x598B4B,0x5D9542
    ,0x609745,0x61934A,0x619749,0x65954D
    ,0x669252,0x6B9855,0x6B9C54,0x689759
    ,0x6E9A58,0x709E5A,0x6AA150,0x6CA053
    ,0x6FA456,0x70A559,0x77AC5E,0x78A95F
    ,0x719366,0x79936E,0x789D69,0x77A161
    ,0x7CAD64,0x7DA569,0x7CA06C,0x7EA46D
    ,0x7FB168,0x7FA770,0x81AF6B,0x86B16F
    ,0x85B76C,0x80A372,0x82A871,0x85AC70
    ,0x85A874,0x88AF74,0x86B770,0x89B175
    ,0x8AB676,0x88B870,0x89B874,0x95C37F
    ,0x95C57F,0x91B582,0x92B982,0x97BB89
    ,0xA3BE94,0x95C380,0x99C783,0x9CCB86
    ,0x9DC08F,0xA3C594,0xA7C799,0xA8C79A
    ,0xACD797,0xADDA97,0xB0CBA2,0xB6E1A1
    ,0xBEE8AB,0xC0ECAB,0xC2ECAF,0xC5E1B4
    ,0xC8EAB7,0xCBE6BA,0xD0EFBF,0xC8F1B5
    ,0xD0F5BE,0xD0F8BE,0xD1EDC0,0xD8F2C6
    ,0xD2F9C0,0xD7FDC4,0xD9FCC6,0xDCF5CA
    ,0xD9FBC8,0xDBFFC9,0xDEFFCC,0xF1FFDF
};

static GUI_CONST_STORAGE GUI_LOGPALETTE PalSignal4 = {
  256,	/* number of entries */
  0, 	/* No transparency */
  &ColorsSignal4[0]
};

static GUI_CONST_STORAGE unsigned char acSignal4[] = {
  0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
  0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
  0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06,
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
  0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
  0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
  0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
  0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05, 0x05,
  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x03, 0x22, 0x22, 0x22, 0x22, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
  0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x34, 0x90, 0xA7, 0xA6, 0xA5, 0xA4, 0x7F, 0x34, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03, 0x03,
  0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x7C, 0xAA, 0xD7, 0xB9, 0xB7, 0x1A, 0x96, 0x7D, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
  0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x77, 0xA9, 0xC9, 0xAE, 0x41, 0xC3, 0x39, 0x7C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
  0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x09, 0x09, 0x09, 0x74, 0x76, 0x74, 0xA8, 0xB2, 0x8A, 0x9C, 0x4C, 0x39, 0x74, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C, 0x7C,
  0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x09, 0x75, 0x9E, 0x15, 0x19, 0xA3, 0x87, 0x32, 0x94, 0x37, 0x37, 0x44, 0x4F, 0x19, 0x0B, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76, 0x76,
  0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x32, 0x7E, 0x4E, 0xC7, 0xBD, 0xDA, 0xC6, 0x30, 0x84, 0x38, 0x8D, 0x25, 0xE2, 0x19, 0x73, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B, 0x0B,
  0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x73, 0x7B, 0xD4, 0xB8, 0xB1, 0xC8, 0xCB, 0x30, 0x36, 0x8C, 0x40, 0xBF, 0x54, 0xA0, 0x13, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04,
  0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x13, 0x13, 0x13, 0x13, 0x13, 0x7A, 0x49, 0x8E, 0x42, 0x4C, 0xD2, 0x2E, 0x24, 0x98, 0x44, 0x4A, 0x58, 0x15, 0x6E, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D, 0x0D,
  0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x31, 0x33, 0x33, 0x31, 0x10, 0x79, 0x9D, 0x38, 0x46, 0x4F, 0x4E, 0x21, 0x35, 0xAC, 0x25, 0xD6, 0x5A, 0x15, 0x6B, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C, 0x0C,
  0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x6A, 0x92, 0xCA, 0x48, 0x49, 0xDE, 0x85, 0x71, 0x9A, 0x9B, 0x47, 0xE3, 0xDD, 0x0F, 0x35, 0x45, 0x26, 0xE1, 0xF3, 0x15, 0x69, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x66, 0x16, 0xD5, 0xBC, 0x4B, 0x57, 0x16, 0x2D, 0x3A, 0xAD, 0x27, 0x55, 0xDF, 0x0E, 0x24, 0xB3, 0x4A, 0x1B, 0xF8, 0x15, 0x66, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F, 0x0F,
  0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x64, 0x3D, 0xBB, 0x41, 0xC0, 0x58, 0xA2, 0x6C, 0x43, 0x46, 0x4D, 0xEB, 0xE4, 0x65, 0x36, 0xBE, 0xD9, 0x29, 0xFD, 0x15, 0x11, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E, 0x0E,
  0x66, 0x66, 0x66, 0x66, 0x11, 0x65, 0x65, 0x1D, 0x2B, 0x61, 0x83, 0x8F, 0x43, 0xCC, 0x5B, 0x16, 0x68, 0xAF, 0x47, 0x50, 0xEE, 0xE5, 0x60, 0x88, 0xC2, 0xDB, 0x59, 0x5E, 0x3C, 0x2B, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66, 0x66,
  0x63, 0x63, 0x63, 0x0A, 0x95, 0x3F, 0x3F, 0xC4, 0xAB, 0x63, 0x23, 0x40, 0xB6, 0x51, 0x17, 0x16, 0x18, 0xB5, 0x27, 0x28, 0x17, 0xE6, 0x2B, 0x89, 0xD0, 0x1B, 0x5C, 0x12, 0x9F, 0x01, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63, 0x63,
  0x11, 0x11, 0x01, 0x18, 0xD1, 0xD3, 0xCF, 0x57, 0x17, 0x2E, 0x81, 0x45, 0xC1, 0x1B, 0xFA, 0x16, 0x1F, 0xBA, 0x4D, 0x55, 0xF9, 0x53, 0x01, 0x91, 0x51, 0x29, 0x17, 0x12, 0x19, 0x01, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11, 0x11,
  0x2B, 0x2B, 0x01, 0x18, 0x48, 0xB0, 0xBF, 0xE8, 0x1C, 0x6D, 0x23, 0xB4, 0x1A, 0x56, 0x5E, 0x3E, 0x1F, 0x27, 0x50, 0xEB, 0xFE, 0x53, 0x01, 0x93, 0x28, 0x59, 0x5D, 0x12, 0x3B, 0x01, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B, 0x2B,
  0x01, 0x01, 0x01, 0x1E, 0x8B, 0x42, 0xCC, 0x5A, 0xF2, 0x21, 0x23, 0xC0, 0x52, 0xEC, 0x12, 0xA1, 0x67, 0xCE, 0x28, 0x5B, 0x12, 0xE7, 0x01, 0x97, 0xE9, 0x5C, 0xFC, 0x12, 0x3B, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x1E, 0x3A, 0x25, 0xDC, 0xF4, 0xFB, 0x21, 0x83, 0x4D, 0x54, 0xF5, 0x00, 0x3E, 0x1F, 0x52, 0x56, 0xF5, 0x5F, 0xEA, 0x01, 0x3D, 0xED, 0x5D, 0x5E, 0x5F, 0x3C, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x2B, 0x99, 0x4B, 0x1B, 0x1C, 0xE0, 0x1D, 0x72, 0xD8, 0x56, 0x1C, 0xF1, 0x82, 0x2C, 0xCD, 0x2A, 0xF0, 0xF7, 0xC5, 0x01, 0x86, 0x2A, 0x1C, 0xF6, 0xEF, 0x78, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x62, 0x6F, 0x2F, 0x14, 0x1F, 0x01, 0x01, 0x20, 0x14, 0x14, 0x6C, 0x01, 0x01, 0x1E, 0x2F, 0x14, 0x70, 0x2C, 0x01, 0x01, 0x2D, 0x14, 0x14, 0x20, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
  0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01
};

GUI_CONST_STORAGE GUI_BITMAP bmSignal4 = {
  38, /* XSize */
  35, /* YSize */
  38, /* BytesPerLine */
  8, /* BitsPerPixel */
  acSignal4,  /* Pointer to picture data (indices) */
  &PalSignal4  /* Pointer to palette */
};

/* *** End of file *** */
