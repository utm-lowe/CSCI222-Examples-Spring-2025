#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p1{0,0};
    Point p2{1,3};
    Point p3;

    cout << "The midpoint between " << p1 << " and " << p2 
         << " is " << p1.midpoint(p2) << endl;

    cout << "p1 * 2 = " << p1 * 2 << endl;
    cout << "p2 * 2 = " << p2 * 2 << endl;
    cout << "2 * p2 = " << 2 * p2 << endl;

    p3 = p2;
    cout << "Assignment test p3=" << p3 << endl;
}