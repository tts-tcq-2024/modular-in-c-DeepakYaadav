// colorpair_operations.c
#include <stdio.h>
#include "ColorPair_definitions.h"

static MajorColor getMajorColorFromPairNumber(int zeroBasedPairNumber) {  
    return (MajorColor)(zeroBasedPairNumber / getNumberOfMinorColors());    
}
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
    
    // Error handling for invalid pair number
    if (zeroBasedPairNumber < 0 || zeroBasedPairNumber >= getNumberOfMajorColors() * getNumberOfMinorColors()) {
        // Handle error (e.g., assert or return an error value)            
    }
    
    colorPair.majorColor = getMajorColorFromPairNumber(zeroBasedPairNumber);
    colorPair.minorColor = getMinorColorFromPairNumber(zeroBasedPairNumber); 
    return colorPair;                                                   
}

// Get the pair number from a ColorPair
int getPairNumberFromColor(const ColorPair* colorPair) {            
    return colorPair->majorColor * getNumberOfMinorColors() + colorPair->minorColor + 1; 
}

//  to print the reference manual for color coding
void printColorCodeManual() {                                             
    int totalPairs = getNumberOfMajorColors() * getNumberOfMinorColors();  
    printf("Color Code Reference Manual:\n");                              
    printf("----------------------------------\n");                          
    
    for (int i = 1; i <= totalPairs; i++) {                                
        ColorPair colorPair = getColorFromPairNumber(i);                 
        char colorPairNames[32];  // Buffer for color pair name             
        colorPairToString(&colorPair, colorPairNames);                    
        printf("Pair Number: %d, Colors: %s\n", i, colorPairNames);       
    }                                                                       
    
    printf("----------------------------------\n");                         
}                                                                         
