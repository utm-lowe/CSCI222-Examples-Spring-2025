/**
 * @file triangle.h
 * @author your name (you@domain.com)
 * @brief A class to represent a triangle by its vertices.
 * @version 0.1
 * @date 2025-04-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#ifndef TRIANGLE_H
#define TRIANGLE_H

class Triangle {
public:
    /** 
     * Constructor to initialize the triangle with three vertices.
     * @param v1 First vertex of the triangle.
     * @param v2 Second vertex of the triangle.
     */
    Triangle(double v1[2], double v2[2], double v3[2]);

    /**
     * Function to calculate the area of the triangle.
     * @return Area of the triangle.
     */
    double area() const;

    /**
     * Function to calculate the perimeter of the triangle.
     * @return Perimeter of the triangle.
     */
    double perimeter() const;
    
private:
    double vertices[3][2]; // 3 vertices, each with 3 coordinates (x, y)
};
#endif