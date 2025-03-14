/**
 * @file monte-carlo.cpp
 * @author Bob Lowe < rlowe8@utm.edu >
 * @brief A Monte-Carlo computation of pi
 * @version 0.1
 * @date 2025-03-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <unistd.h>
#include <cmath>

using namespace std;

double randDouble()
{
    return (double) rand() / RAND_MAX;
}

int main(int argc, char **argv)
{
    double n = 100000;
    double nInside = 0;
    double x;
    double y;

    // seed the random number generator
    srand(time(NULL));

    // see if we have a command line argument
    if(argc == 2) {
        n = atoi(argv[1]);
    }

    // make n random shots, count the ones that are in the circle
    for(int i=0; i<n; i++) {
        x = randDouble();
        y = randDouble();
        
        // check for being inside the circle
        if(x*x + y*y <= 1.0) {
            nInside++;
        }
    }

    cout << "Number Inside: " << nInside << endl;
    cout << n << " random shots yields pi=" << setprecision(19) << 4.0 * nInside/n << endl;
    cout << "Cmath's Pi: " << M_PI << endl;
}