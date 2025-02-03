// Object Oriented Example, but in a single file coding directly in the class
// definition.
#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
    ///////////////////////////////////////
    // Accessors and Mutators
    ///////////////////////////////////////
    double getX() const
    {
        return x;
    }

    double getY() const
    {
        return y;
    }

    void setX(double x)
    {
        this->x = x;
    }

    void setY(double y) 
    {
        this->y = y;
    }

    ///////////////////////////////////////
    // Member Functions
    ///////////////////////////////////////
    Point midpoint(const Point &other) const
    {
        Point p;

        p.x = (this->x + other.x) / 2;
        p.y = (this->y + other.y) / 2;

        return p;
    }

    double distance(const Point &other) const
    {
        double dx;
        double dy;

        dx = this->x - other.x;
        dy = this->y - other.y;
        return sqrt(dx*dx+dy*dy);
    }
private:
    double x;
    double y;    
};

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