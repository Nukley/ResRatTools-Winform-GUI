#include "Globals.h"
#include <fstream>
#include <math.h>

//Thanks MusicalProgrammer!

std::string XOrYCalc(int amountOfRats, int RatVals[], int whichVal)
{
    int ResInc = 0;
    int i = 0;
    std::string str2;
    while (ResInc < amountOfRats) {
        i += 1;
        ResInc = RatVals[whichVal] * i;
        int ResValX = RatVals[0] * i;
        int ResValY = RatVals[1] * i;
        if (ResValX % 2 == 0 && ResValY % 2 == 0)
        {
            str2 = str2 + std::to_string(ResValX) + "x" + std::to_string(ResValY) + "\n";
        }
    }
    return str2;
}

std::string RatGen(std::string ratioIn, int amountOfRats, bool xOrY)
{
    int ratioSeperator;

    ratioSeperator = static_cast<int>(ratioIn.find(":"));
    int RatVals[] = { cutStringUp(ratioIn, 0, ratioSeperator), cutStringUp(ratioIn, ratioSeperator + 1, -1) };

    std::string ratVals = std::to_string(RatVals[0]) + std::to_string(RatVals[1]);
    return !xOrY ? XOrYCalc(amountOfRats, RatVals, 0) : XOrYCalc(amountOfRats, RatVals, 1);
}