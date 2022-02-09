// loadFile.h file
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#ifndef loadFile_H
#define loadFile_H

using namespace std;

std::vector<float> loadData(const std::string filename);

std::vector<float> t;
std::vector<float> y;
std::vector<float> yerr;
std::vector<float> result;

float element1, element2, element3;

#endif