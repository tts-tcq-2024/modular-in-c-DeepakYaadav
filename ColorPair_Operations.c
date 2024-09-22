// colorpair_operations.c
#include <stdio.h>
#include "colorpair_definitions.h"

// Helper function to calculate the major color based on the pair number
static MajorColor getMajorColorFromPairNumber(int zeroBasedPairNumber) {
    return (MajorColor)(zeroBasedPairNumber / getNumberOfMinorColors());
}

// Helper function to calculate the minor color based on the pair number
static MinorColor getMinorColorFromPairNumber(int zeroBasedPairNumber) {
    return (MinorColor)(zeroBasedPairNumber % getNumberOfMinorColors());
}

// Converts a ColorPair to a readable string
void colorPairToString(const ColorPair* colorPair, char* buffer) {
    sprintf(buffer, "%s %s", 
            getMajorColorName(colorPair->majorColor), 
            getMinorColorName(colorPair->minorColor));
}

// Get the ColorPair from the pair number
ColorPair getColorFromPairNumber(int pairNumber) {
    ColorPair colorPair;
    int zeroBasedPairNumber = pairNumber - 1;
    colorPair.majorColor = getMajorColorFromPairNumber(zeroBasedPairNumber);
    colorPair.minorColor = getMinorColorFromPairNumber(zeroBasedPairNumber);
    return colorPair;
}

// Get the pair number from a ColorPair
int getPairNumberFromColor(const ColorPair* colorPair) {
    return colorPair->majorColor * getNumberOfMinorColors() + colorPair->minorColor + 1;
}
