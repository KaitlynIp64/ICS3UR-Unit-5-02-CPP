// Copyright (c) 2022 Kaitlyn Ip All rights reserved
//
// Created by: Kaitlyn Ip
// Created on: Nov 2022
// This program calculates the area of a triangle

#include <iostream>
#include <iomanip>
#include <string>

void Area(float base, float height) {
    double areaOfTriangle;

    // process
    areaOfTriangle = base * height / 2;

    // output
    std::cout << "The area of the triangle is "
    << areaOfTriangle << "cm²." << std::endl;
}
int main() {
    std::string stringBase;
    std::string stringHeight;
    int base;
    double height;

    // input
    std::cout << "Enter the base of the triangle (cm): ";
    std::cin >> stringBase;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> stringHeight;

    // process and output
    try {
        base = std::stoi(stringBase);
        height = std::stoi(stringHeight);
        // call functions
        Area(base, height);
    } catch (std::invalid_argument) {
        std::cout << "That is not a valid input.";
    }

    std::cout << "\nDone." << std::endl;
}
