/**
 * @file triangle.cpp
 * @author your name (you@domain.com)
 * @brief Implementation of the Triangle class.
 * @version 0.1
 * @date 2025-04-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include "triangle.h"

#include <cmath>

// Constructor to initialize the triangle with three vertices
Triangle::Triangle(double v1[2], double v2[2], double v3[2]) {
    vertices[0][0] = v1[0];
    vertices[0][1] = v1[1];
    vertices[1][0] = v2[0];
    vertices[1][1] = v2[1];
    vertices[2][0] = v3[0];
    vertices[2][1] = v3[1];
}
// Function to calculate the area of the triangle
double Triangle::area() const {
    double a = sqrt(pow(vertices[1][0] - vertices[0][0], 2) + pow(vertices[1][1] - vertices[0][1], 2));
    double b = sqrt(pow(vertices[2][0] - vertices[1][0], 2) + pow(vertices[2][1] - vertices[1][1], 2));
    double c = sqrt(pow(vertices[0][0] - vertices[2][0], 2) + pow(vertices[0][1] - vertices[2][1], 2));
    
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to calculate the perimeter of the triangle
double Triangle::perimeter() const {
    double a = sqrt(pow(vertices[1][0] - vertices[0][0], 2) + pow(vertices[1][1] - vertices[0][1], 2));
    double b = sqrt(pow(vertices[2][0] - vertices[1][0], 2) + pow(vertices[2][1] - vertices[1][1], 2));
    double c = sqrt(pow(vertices[0][0] - vertices[2][0], 2) + pow(vertices[0][1] - vertices[2][1], 2));
    
    return a + b + c;
}