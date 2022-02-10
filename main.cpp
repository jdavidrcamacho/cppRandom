// main.cpp file
#include <iostream>
#include <fstream>
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
    y = loadData(dataset);
        // Display the data:
        cout << "The data: ";
        for (int n = 0; n < y.size(); n++){
            cout << y[n] << " ";
        }
        cout << endl;
    /*
    vec = {16.0, 2.0, 77.0, 40.0};
    vec.push_back(1.0);
    */
    a = mean(y);
    cout << "Mean: " << a << endl;

return 0;
}
//end of main function

//to run in terminal do
// $ make main
// $ ./main