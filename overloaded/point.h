// File: point.h
// Purpose: Class definition of the Point class
#ifndef POINT_H
#define POINT_H
#include <iostream>

class Point
{
public:
    ///////////////////////////////////////
    // Constructors & Destructor
    ///////////////////////////////////////
    Point();
    Point(double x, double y);
    Point(const Point &obj);
    virtual ~Point();

    ///////////////////////////////////////
    // Accessors and Mutators
    ///////////////////////////////////////
    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    ///////////////////////////////////////
    // Member Functions
    ///////////////////////////////////////
    Point midpoint(const Point &other) const;
    double distance(const Point &other) const;

    ///////////////////////////////////////
    // Member Operators
    ///////////////////////////////////////
    Point operator*(double rhs) const;
    Point& operator=(const Point &rhs);
private:
    double x;
    double y;    
};

////////////////////////////
// Operators
////////////////////////////

//insertion operator for Point class
std::ostream& operator<<(std::ostream &os, const Point &p);

//double * Point multiplication
Point operator*(double lhs, const Point &rhs);
#endif