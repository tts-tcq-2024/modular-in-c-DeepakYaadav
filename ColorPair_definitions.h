// colorpair_definitions.h
#ifndef COLORPAIR_DEFINITIONS_H
#define COLORPAIR_DEFINITIONS_H

#include "Color_Definitions.h"

// Struct for ColorPair
typedef struct {
    MajorColor majorColor;
    MinorColor minorColor;
} ColorPair;

// Function prototypes for ColorPair operations
void colorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair getColorFromPairNumber(int pairNumber);
int getPairNumberFromColor(const ColorPair* colorPair);

#endif // COLORPAIR_DEFINITIONS_H
