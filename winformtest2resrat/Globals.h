#pragma once
#include <iostream>
#include <string>
#include <sstream>

int cutStringUp(std::string, int, int);
std::string RatCalc(std::string, double);
std::string ResCalc(std::string);
std::string CropCalc(std::string, std::string);
std::string RatGen(std::string, int, bool);
std::string TextToString(System::String^);
System::String^ StringToText(std::string);