#include <iostream>
#include "point.h"

using namespace std;

int main()
{
    Point p1, p2, mid;
    double distance;

    // set some points
    p1.setX(12);
    p1.setY(14);
    p2.setX(10);
    p2.setY(90);

    // compute the midpoint and distance
    mid = p1.midpoint(p2);
    distance = p1.distance(p2);

    cout << "Midpoint: (" << mid.getX() << ", " << mid.getY() << ")" << endl;
    cout << "Distance: " << distance << endl; 
}