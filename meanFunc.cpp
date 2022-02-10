//mean file;
#include <iostream> 
#include <vector>
#include <cmath>

#include "meanFunc.h"

using namespace std;

/* mean of a vector */
float mean(std::vector<float> data){
    m = 0;
    for (n = 0; n < data.size(); n++){
        m += data[n];
    }
    answer = m / data.size();
return answer;
}