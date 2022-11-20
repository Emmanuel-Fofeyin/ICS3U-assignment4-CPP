// Copyright (c) 2022 Emmanuel All rights reserved.

// Created by : Emmanuel
// Created on : Oct 2022
// This program determines if a triangle is a Scalene,
// Equilateral, or Isosceles triangle.

#include <iostream>
#include <string>

int main() {
    // In this program the letters x, y and z
    // represent the three angle in a triangle.

    // creating variables
    std::string xAsString;
    int xAsNumber;
    std::string yAsString;
    int yAsNumber;
    std::string zAsString;
    int zAsNumber;

    // input
    std::cout << "Enter in the 1st angle: ";
    std::cin >> xAsString;
    std::cout << "Enter in the 2nd angle: ";
    std::cin >> yAsString;
    std::cout << "Enter in the 3rd angle: ";
    std::cin >> zAsString;
    std::cout << "\n";

    // process and output
    try {
        xAsNumber = std::stoi(xAsString);
        yAsNumber = std::stoi(yAsString);
        zAsNumber = std::stoi(zAsString);
        if (xAsNumber + yAsNumber + zAsNumber == 180
            && xAsNumber > 0 && yAsNumber > 0 && zAsNumber > 0) {
            if (xAsNumber == yAsNumber && yAsNumber == zAsNumber
                && zAsNumber == xAsNumber) {
                std::cout <<"These angles make an Equilateral triangle!" << std::endl;
            } else if (xAsNumber == yAsNumber
                       || yAsNumber == zAsNumber || xAsNumber == zAsNumber) {
                std::cout << "These angles make an Isosceles triangle!" << std::endl;
            } else {
                std::cout << "These angles make a Scalene triangle!" << std::endl;
            }
        } else {
            std::cout << "This is not a triangle" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Sorry This is invalid input";
    }

    std::cout << "\n\nDone.";
}
