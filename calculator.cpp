// Copyright (c) 2022 All rights reserved.
// .
// Created by: Spencer S
// Date : Dec 18, 2022
// A program which calculations two numbers using a inputted sign (+, -, * etc)

#include <iostream>
using std::string;

// Defining the function that returns the percentage
float Calculator(string sign, float firstNumber, float secondNumber) {
    float quotient;
    float divisor;
    if (sign == "+") {
        return firstNumber + secondNumber;
    } else if (sign == "-") {
        return firstNumber - secondNumber;
    } else if (sign == "*") {
        return firstNumber * secondNumber;
    } else {
        return firstNumber / secondNumber;
    }
    if (sign == "%") {
        quotient = firstNumber / secondNumber;
        divisor = quotient * secondNumber;
        return divisor;
    }
}

int main() {
    // Declaring variables
    std::string userSign, userFirstNumb, userSecondNumb;
    float floFirstNumb, floSecondNumb, result;

    // inputs
    std::cout << "Enter a sign to use in calculation: ";
    std::cin >> userSign;
    std::cout << "Enter first number: ";
    std::cin >> userFirstNumb;
    std::cout << "Enter second number: ";
    std::cin >> userSecondNumb;

    try {
        // Convert the numbers to floats
        floFirstNumb = std::stof(userFirstNumb);
        floSecondNumb = std::stof(userSecondNumb);

        if (userSign == "+" || userSign == "-" || userSign == "*"
        || userSign == "/" || userSign == "%") {
            result = Calculator(userSign, floFirstNumb, floSecondNumb);
            // Displaying the result
            std::cout << floFirstNumb << " "
            << userSign << " " << floSecondNumb << " = " << result << ".\n";


        } else {
            std::cout << "Invalid input for sign.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input. Please enter numbers only";
    }
}
