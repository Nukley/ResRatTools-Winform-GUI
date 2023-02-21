#include "Globals.h"
#include <vector>

//Thanks MusicalProgrammer!
double dividedValue;

std::string calcFinalVals(double WhichRat)
{
    std::stringstream MakeFinal;
    MakeFinal << floor(WhichRat * dividedValue);
    std::string FinalRat;
    FinalRat = MakeFinal.str();
    return FinalRat;
}

std::string RatCalc(std::string ratioIn, double resVal)
{
    int ratioSeperator;

    ratioSeperator = static_cast<int>(ratioIn.find(":"));

    double RatVals[] = { cutStringUp(ratioIn, 0, ratioSeperator), cutStringUp(ratioIn, ratioSeperator + 1, -1) };
    std::vector < std::string > FinalVals = {};
    for (int i = 0; i < 2; i++) {
        dividedValue = resVal / RatVals[i];
        FinalVals.push_back(calcFinalVals(RatVals[0]) + "x" + calcFinalVals(RatVals[1]));
    }
    std::string Out = "X " + FinalVals[0] + "\nY " + FinalVals[1] + "\n";
    return Out;
}