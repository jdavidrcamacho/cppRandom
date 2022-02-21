// main.cpp file
#include <iostream>
#include <fstream>
#include <tuple>
#include <vector>
#include <cmath>

#include "main.h"
#include "loadFile.cpp"
# include "meanFunc.cpp"
using namespace std;

//main function
int main(){
    cout << "Welcome" << endl;
    string dataset = "data.txt";
    auto [t, y] = loadData(dataset);
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
    a = mean(y);
    cout << "Mean: " << a << endl;

return 0;
}
//end of main function

//to run in terminal do
// $ make main
// $ ./main