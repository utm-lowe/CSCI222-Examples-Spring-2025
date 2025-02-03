// File: point.h
// Purpose: Class definition of the Point class
#ifndef POINT_H
#define POINT_H

class Point
{
public:
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
private:
    double x;
    double y;    
};


#endif