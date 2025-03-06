// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: March 3, 2025
// This program gets the area and
// circumference of a circle based on user input

// import all libraries
#include <cmath>
#include <iomanip>
#include <iostream>

int main() {
    // Get radius
    float radius;
    std::cout << "Enter the radius of your circle in cm: ";
    std::cin >> radius;

    // Calculate area and circumference
    float area = M_PI * (radius * radius);
    float circumference = 2 * M_PI * radius;

    // Display results
    std::cout << "The area of your circle is: " << area << " cm^2" << std::endl;
    std::cout << "The circumference of your circle is: "
    << circumference << " cm" << std::endl;
}
