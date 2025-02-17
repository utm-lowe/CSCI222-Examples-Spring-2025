#include <cmath>
#include <iostream>
#include "point.h"

using namespace std;

// Initialize x and y to 0
Point::Point() 
{
    x = 0;
    y = 0;
}

// Parameterized constructor
Point::Point(double x, double y) 
{
    this->x = x;
    this->y = y;
}

// Copy constructor
Point::Point(const Point &obj) 
{
    x = obj.x;
    y = obj.y;
}

Point::~Point()
{

}

///////////////////////////////////////
// Accessors and Mutators
///////////////////////////////////////
double Point::getX() const
{
    return x;
}

double Point::getY() const
{
    return y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

///////////////////////////////////////
// Member Functions
///////////////////////////////////////
Point Point::midpoint(const Point &other) const
{
    Point p;

    p.x = (this->x + other.x) / 2;
    p.y = (this->y + other.y) / 2;

    return p;
}

double Point::distance(const Point &other) const
{
    double dx;
    double dy;

    dx = this->x - other.x;
    dy = this->y - other.y;
    return sqrt(dx * dx + dy * dy);
}

//insertion operator for Point class
std::ostream& operator<<(std::ostream &os, const Point &p)
{
    os << "(" << p.getX() << ", " << p.getY() << ")";
    return os;
}