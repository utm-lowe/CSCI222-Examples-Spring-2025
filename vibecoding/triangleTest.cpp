#include <iostream>
#include <cmath>
#include "triangle.h"

void testTriangle() {
    // Test case 1: Create a triangle with vertices (0, 0), (0, 1), (1, 0)
    double v1[2] = {0, 0};
    double v2[2] = {0, 1};
    double v3[2] = {1, 0};
    Triangle triangle(v1, v2, v3);

    // Test area
    double expectedArea = 0.5; // Area of the triangle
    double calculatedArea = triangle.area();
    std::cout << "Test Area: " << (abs(calculatedArea - expectedArea) < 1e-5 ? "Passed" : "Failed") << std::endl;
    std::cout << "Test Area: " << (calculatedArea == expectedArea ? "Passed" : "Failed") << std::endl;

    // Test perimeter
    double expectedPerimeter = 3.41421; // Perimeter of the triangle
    double calculatedPerimeter = triangle.perimeter();
    std::cout << "Test Perimeter: " << (abs(calculatedPerimeter - expectedPerimeter) < 1e-5 ? "Passed" : "Failed") << std::endl;
    std::cout << "Test Perimeter: " << (abs(calculatedPerimeter - expectedPerimeter) < 1e-5 ? "Passed" : "Failed") << std::endl;
}

int main() {
    testTriangle();
    return 0;
}