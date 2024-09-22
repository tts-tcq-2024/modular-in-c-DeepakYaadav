// color_definitions.h
#ifndef COLOR_DEFINITIONS_H
#define COLOR_DEFINITIONS_H

// Enum definitions for MajorColor and MinorColor
typedef enum {
    WHITE, RED, BLACK, YELLOW, VIOLET
} MajorColor;

typedef enum {
    BLUE, ORANGE, GREEN, BROWN, SLATE
} MinorColor;

// Externally declared color names for easy access in other files
extern const char* MajorColorNames[];
extern const char* MinorColorNames[];

// Helper functions
int getNumberOfMajorColors();
int getNumberOfMinorColors();
const char* getMajorColorName(MajorColor major);
const char* getMinorColorName(MinorColor minor);

#endif // COLOR_DEFINITIONS_H
