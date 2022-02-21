// loadFile.cpp file
#include <fstream>
#include <iostream>
#include <tuple>
#include <vector>

#include "loadFile.h"

using namespace std;

ifstream infile;

//std::vector<float> loadData(const std::string filename){
std::tuple<std::vector<float>, std::vector<float>> loadData(const std::string filename){
    infile.open(filename);
    if (infile.fail()){
        cout << "Error reading file!";
    } else{
        // Push items into a vector
        while (!infile.eof()){
            infile >> element1 >> element2 >> element3;
            if(infile.eof() ) break;
            t.push_back(element1);
            y.push_back(element2);
            yerr.push_back(element3);
         }
        infile.close(); // Close the file.
    }
    return {t, y};
}