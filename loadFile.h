// loadFile.h file
#include <iostream>
#include <fstream>
#include <tuple>
#include <vector>
#include <string>

#ifndef loadFile_H
#define loadFile_H

using namespace std;

//std::vector<float> loadData(const std::string filename);
std::tuple<std::vector<float>, std::vector<float>> loadData(const std::string filename);

std::vector<float> t, y, yerr;
std::vector<float> result;

float element1, element2, element3;

#endif