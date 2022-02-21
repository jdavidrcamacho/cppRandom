//linear function file;
#include <iostream> 
#include <vector>
#include <cmath>

#include "linearFunc.h"

using namespace std;

/* linear function (y = ax + b) */
std::vector<float> linearFunc(std::vector<float> data, float a, float b){
    for (int n = 0; n < data.size(); n++){
        data[n] = a*data[n] + b;
    }
    v_answer = data;
    return v_answer; 
}