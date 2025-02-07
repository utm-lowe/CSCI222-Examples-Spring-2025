#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p1{12, 14}, p2{10, 90};
    double distance;

    // compute the midpoint and distance
    Point mid = p1.midpoint(p2);
    distance = p1.distance(p2);

    cout << "Midpoint: (" << mid.getX() << ", " << mid.getY() << ")" << endl;
    cout << "Distance: " << distance << endl; 
}