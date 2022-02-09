// main.cpp file
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "main.h"
#include "loadFile.h"

using namespace std;

//main function
int main(){    
    dataset = "data.txt";
    y = loadData(dataset);
        // Display the data:
        for (n = 0; n < y.size(); n++){
            cout << y[n] << " ";
        }
        cout << endl;
    return 0;
}
//end of main function

//to run in terminal do
// $ make main
// $ ./main