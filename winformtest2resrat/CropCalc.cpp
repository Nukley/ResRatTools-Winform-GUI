#include "Globals.h"
#include <math.h>

//Thanks MusicalProgrammer!

int findX(std::string input)
{
    return static_cast<int>(input.find("x"));
}

std::string CropCalc(std::string ratioIn, std::string cropTo)
{
    int ratioSeperator;
    int splitCropTo;

    ratioSeperator = findX(ratioIn);
    splitCropTo = findX(cropTo);
    double RatVals[] = { cutStringUp(ratioIn, 0, ratioSeperator), cutStringUp(ratioIn, ratioSeperator + 1, -1) };
    double CropVals[] = { cutStringUp(cropTo, 0, splitCropTo), cutStringUp(cropTo, splitCropTo + 1, -1) };
    double finalResOne = (RatVals[0] - CropVals[0]) / 2;
    double finalResTwo = (RatVals[1] - CropVals[1]) / 2;

    std::string Out = "Left and Right: " + std::to_string(finalResOne) + "\nTop and Bottom: " + std::to_string(finalResTwo) + "\n";
    return Out;
}