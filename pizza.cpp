// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program calculates the cost of pizza
//    with the size (inches) that is given by the user

#include <iostream>
#include <iomanip>

int main() {
    // This function calculates the cost of the pizza

    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;
    int diameter;
    double sub_total;
    double total;

    // input
    std::cout << "Enter the diameter of the pizza that you"
    <<" would like (inches): ";
    std::cin >> diameter;

    // process
    sub_total = LABOR + RENT + (diameter * COST_PER_INCH);
    total = sub_total + (sub_total * HST);

    // output
    std::cout << "The cost for a " << diameter << " inch pizza is $"
    << std::fixed << std::setprecision(2) << std::setfill('0') << total
    << std::endl;
    std::cout << "\nDone." << std::endl;
}
