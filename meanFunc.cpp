//mean file;
#include "constants.h"
#include "meanFunc.h"
#include <iostream> 
#include <vector>
#include <cmath>

using namespace std;

/* mean of a vector */
float mean(std::vector<float> data){
    float m = 0;
    for (int n = 0; n < data.size(); n++){
        m += data[n];
    }
    answer = m / data.size();
    return answer;
}