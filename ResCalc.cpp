#include "Globals.h"
#include <numeric>

//Thanks MusicalProgrammer!

std::string ResCalc(std::string ratioIn)
{
    int ratioSeperator;

    ratioSeperator = static_cast<int>(ratioIn.find("x"));
    int RatVals[] = { cutStringUp(ratioIn, 0, ratioSeperator), cutStringUp(ratioIn, ratioSeperator + 1, -1) };
    int ratioFromRes = std::gcd(RatVals[0], RatVals[1]);
    int finalVals[] = { RatVals[0] / ratioFromRes , RatVals[1] / ratioFromRes };

    std::string Out = std::to_string(finalVals[0]) + ":" + std::to_string(finalVals[1]) + "\n";
    return Out;
}