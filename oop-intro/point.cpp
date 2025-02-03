#include <cmath>
#include "point.h"

using namespace std;

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