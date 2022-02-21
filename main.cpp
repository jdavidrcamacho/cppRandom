// main.cpp file
#include <iostream>
#include <fstream>
#include <tuple>
#include <vector>
#include <cmath>

#include "main.h"

#include "loadFile.cpp"
#include "meanFunc.cpp"
#include "rmsFunc.cpp"
#include "linearFunc.cpp"

using namespace std;

//main function
int main(){
    cout << "Welcome" << endl;
    string dataset = "data.txt";
    auto [t, y, yerr] = loadData(dataset);
        // Display the time;
        cout << "The time: ";
        for (int n = 0; n < t.size(); n++){
            cout << t[n] << " ";
        }
        cout << endl;
        // Display the data:
        cout << "The data: ";
        for (int n = 0; n < y.size(); n++){
            cout << y[n] << " ";
        }
        cout << endl;
        // Display the data error:
        cout << "The errors: ";
        for (int n = 0; n < yerr.size(); n++){
            cout << yerr[n] << " ";
        }
        cout << endl;
    a = mean(y);
    cout << "Mean: " << a << endl;
    float res = rms(y, linearFunc(t, 1, 0));
    cout << "RMS: " << res << endl;
return 0;
}
//end of main function

//to run in terminal do
// $ make main
// $ ./main