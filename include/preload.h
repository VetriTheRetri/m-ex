#ifndef MEX_H_PRELOAD
#define MEX_H_PRELOAD

#include "structs.h"
#include "datatypes.h"

struct PreloadChar
{
    int kind;
    u8 costume;
};

struct Preload
{
    int x0;
    int x4;
    u8 xc;
    int stage;
    PreloadChar fighters[8];
    int defragNum;
};

/*** Functions ***/

void (*Preload_Update)() = 0x80018254;       // checks for new files to preload and begins loading them synchronously
Preload *(*Preload_GetTable)() = 0x8001822c; // gets preload table

#endif