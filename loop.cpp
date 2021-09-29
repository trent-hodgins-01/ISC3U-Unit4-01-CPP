// Copyright (c) 2021 Trent Hodgins All rights reserved

// Created by Trent Hodgins
// Created on 09/28/2021
// This is the Loop program
// The user enters in a positive integer
// The program tells the user the sum the numbers from 1 to the number typed in

#include <iostream>

int main() {
    // this function uses a while loop and calculates the sum
    int loopCounter = 0;
    int answer = 0;
    std::string numberAsString;
    int numberAsInteger;

    // input
    std::cout << "Enter in a positive integer: ";
    std::cin >> numberAsString;
    std::cout << "" << std::endl;

    // process and output
    try {
        // convert string to int
        numberAsInteger = std::stoi(numberAsString);

    while (loopCounter < numberAsInteger) {
        loopCounter = loopCounter + 1;
        answer = answer  + loopCounter;
    } std::cout << "The sum of all the positive numbers from 1 to "
              << numberAsString << " is " << answer << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "You didn’t enter in a positive integer" << std::endl;
    }

    std::cout << "\nDone." << std::endl;
}
