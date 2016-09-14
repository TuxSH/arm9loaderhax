/*
*   fs.h
*/

#pragma once

#include "types.h"

extern u32 console;

void mountSD(void);
void unmountSD(void);
u32 mountCTRNAND(void);
u32 fileRead(void *dest, const char *path);
u32 firmRead(void *dest, u32 firmType);