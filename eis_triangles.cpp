// Copyright (c) 2022 Emmanuel All rights reserved.

// Created by : Emmanuel
// Created on : Oct 2022
// This program determines if a triangle is a Scalene,
// Equilateral, or Isosceles triangle.

#include <iostream>
#include <string>

int main() {
    // In this program the letters x, y and z represent the three angle in a triangle.
    // creating variables
    
    std::string xString;
    int xNumber;
    std::string yString;
    int yNumber;
    std::string zString;
    int zNumber;

    // input
    std::cout << "Enter in the 1st angle: ";
    std::cin >> xNumber;
    std::cout << "Enter in the 2nd angle: ";
    std::cin >> yNumber;
    std::cout << "Enter in the 3rd angle: ";
    std::cin >> zNumber;
    std::cout << "\n";

    // process and output
    try {
        xNumber = std::stoi(xString);
        yNumber = std::stoi(yString);
        zNumber = std::stoi(zString);
        if (xNumber == yNumber == zNumber) {
            std::cout << "The angles" << xString << yString << "and" << zString << "make an Equilateral triangle! " << std::endl;
        } else if(xNumber == yNumber or yNumber == zNumber or xNumber == zNumber){
            std::cout << "The angles" << xString << yString << "and" << zString << "make an Isosceles triangle! " << std::endl;
        } else {
            std::cout << "The angles " << xString << yString << " and " << zString << " make an Scalene triangle!" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Sorry This is invalid input";
        std::cout << "\n\nDone.";
    }
}
