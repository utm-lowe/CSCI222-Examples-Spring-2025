#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p1{0,0};
    Point p2{1,3};

    cout << "The midpoint between " << p1 << " and " << p2 
         << " is " << p1.midpoint(p2) << endl;
}