/**
 * @file gregory-leibniz.cpp
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief Compute pi using the gregory-leibniz series
 * @version 0.1
 * @date 2025-03-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
    double pi;
    int n=10;

    // see if we have a command line argument
    if(argc == 2) {
        n = atoi(argv[1]);
    }

    pi = 0;
    for(int i=0; i<=n; i++) {
        pi += 4*pow(-1, i) / (2*i+1);
        cout << i << ": " << setprecision(19) << pi << endl;
    }
    cout << "CMath's PI: " << M_PI << endl;
}