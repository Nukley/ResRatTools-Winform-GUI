#include "Globals.h"
#include "Windows.h"
#include "msclr\marshal_cppstd.h"
int cutStringUp(std::string in, int Value1, int Value2)
{
    std::stringstream RatVal;
    RatVal << in.substr(Value1, Value2);
    double Rat;
    RatVal >> Rat;
    return Rat;
}

std::string TextToString(System::String^ managedString)
{
    msclr::interop::marshal_context context;
    std::string standardString = context.marshal_as<std::string>(managedString);
    return standardString;
}

System::String^ StringToText(std::string managedString)
{
    msclr::interop::marshal_context context;
    System::String^ standardString = context.marshal_as<System::String^>(managedString);
    return standardString;
}