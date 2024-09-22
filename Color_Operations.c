// color_operations.c
#include "Color_Definitions.h"

const char* MajorColorNames[] = { "White", "Red", "Black", "Yellow", "Violet" };
const char* MinorColorNames[] = { "Blue", "Orange", "Green", "Brown", "Slate" };

int getNumberOfMajorColors() {
    return sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
}

int getNumberOfMinorColors() {
    return sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
}

const char* getMajorColorName(MajorColor major) {
    return MajorColorNames[major];
}

const char* getMinorColorName(MinorColor minor) {
    return MinorColorNames[minor];
}
