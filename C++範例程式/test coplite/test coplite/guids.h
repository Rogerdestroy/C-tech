// guids.h: definitions of GUIDs/IIDs/CLSIDs used in this VsPackage

/*
Do not use #pragma once, as this file needs to be included twice.  Once to declare the externs
for the GUIDs, and again right after including initguid.h to actually define the GUIDs.
*/



// package guid
// { ea6dd98a-071c-4774-a6f3-e4fdd9029919 }
#define guidtest_coplitePkg { 0xEA6DD98A, 0x71C, 0x4774, { 0xA6, 0xF3, 0xE4, 0xFD, 0xD9, 0x2, 0x99, 0x19 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_test_coplite,
0xEA6DD98A, 0x71C, 0x4774, 0xA6, 0xF3, 0xE4, 0xFD, 0xD9, 0x2, 0x99, 0x19 );
#endif

// Command set guid for our commands (used with IOleCommandTarget)
// { ba6fe524-3066-4202-852c-1b9f9d1102d7 }
#define guidtest_copliteCmdSet { 0xBA6FE524, 0x3066, 0x4202, { 0x85, 0x2C, 0x1B, 0x9F, 0x9D, 0x11, 0x2, 0xD7 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_test_copliteCmdSet, 
0xBA6FE524, 0x3066, 0x4202, 0x85, 0x2C, 0x1B, 0x9F, 0x9D, 0x11, 0x2, 0xD7 );
#endif

//Guid for the image list referenced in the VSCT file
// { 40c50b6e-765b-44f0-ba4d-98dd8358dc84 }
#define guidImages { 0x40C50B6E, 0x765B, 0x44F0, { 0xBA, 0x4D, 0x98, 0xDD, 0x83, 0x58, 0xDC, 0x84 } }
#ifdef DEFINE_GUID
DEFINE_GUID(CLSID_Images, 
0x40C50B6E, 0x765B, 0x44F0, 0xBA, 0x4D, 0x98, 0xDD, 0x83, 0x58, 0xDC, 0x84 );
#endif


