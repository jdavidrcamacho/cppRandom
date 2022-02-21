//root mean squared error file;
#include <iostream> 
#include <vector>
#include <cmath>

#include "rmsFunc.h"

using namespace std;

/* Root mean square error*/
float rms(std::vector<float> data, std::vector<float> func){
    for (int n = 0; n < data.size(); n++){
        data[n] = func[n] - data[n];
    }
    float m = mean(data);
    for (int n = 0; n < data.size(); n++){
        data[n] = (data[n] - m) * (data[n] - m);
    }
    m = 0;
    for (int n = 0; n < data.size(); n++){
        m += data[n];
    }
    answer = sqrt(m / data.size());
    return answer;
}