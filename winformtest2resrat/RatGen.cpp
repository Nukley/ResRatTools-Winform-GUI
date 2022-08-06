#include "Globals.h"
#include <fstream>
#include <math.h>

//Thanks MusicalProgrammer!
std::string str;

std::string XOrYCalc(int amountOfRats, int RatVals[], int whichVal)
{
    int ResInc = 0;
    int i = 0;
    std::string str2;
    while (ResInc < amountOfRats) {
        i += 1;
        ResInc = RatVals[whichVal] * i;
        str2 = str2 + std::to_string(RatVals[0] * i) + "x" + std::to_string(RatVals[1] * i) + "\n";
    }
    return str2;
}

std::string RatGen(std::string ratioIn, int amountOfRats, bool xOrY)
{
    int ratioSeperator;

    ratioSeperator = static_cast<int>(ratioIn.find(":"));
    int RatVals[] = { cutStringUp(ratioIn, 0, ratioSeperator), cutStringUp(ratioIn, ratioSeperator + 1, -1) };

    std::string ratVals = std::to_string(RatVals[0]) + std::to_string(RatVals[1]);
        if (!xOrY)
        {
            str = XOrYCalc(amountOfRats, RatVals, 0);
        }
        else 
        {
            str = XOrYCalc(amountOfRats, RatVals, 1);
        }
    return str;
}