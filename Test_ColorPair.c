// test_colorpair.c
#include "Test_ColorPair.h"
#include "ColorPair_definitions.h"
#include <assert.h>
#include <stdio.h>

// Helper function to print the result of number-to-pair test
static void printNumberToPairResult(const char* colorPairNames) {
    printf("Got pair %s\n", colorPairNames);
}

// Test function to verify number-to-pair conversion
void testNumberToPair(int pairNumber, MajorColor expectedMajor, MinorColor expectedMinor) {
    ColorPair colorPair = getColorFromPairNumber(pairNumber);
    char colorPairNames[32];  // Adjusted buffer size for better clarity
    colorPairToString(&colorPair, colorPairNames);
    printNumberToPairResult(colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
}

// Test function to verify pair-to-number conversion
void testPairToNumber(MajorColor major, MinorColor minor, int expectedPairNumber) {
    ColorPair colorPair = { major, minor };
    int pairNumber = getPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
}

// Run all the ColorPair tests
void runColorPairTests() {
    // Run number-to-pair tests
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    // Run pair-to-number tests
    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
}
