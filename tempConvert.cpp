// Copyright (c) 2025 Adwok Adiebo All rights reserved.
//.
// Created by: Adwok Adiebo
// Created on: May 6th, 2025
// This program converts celsius to Fahrenheit
#include <iostream>
#include <string>

void Fahrenheit() {
    // Define the Fahrenheit function
    std::string celsiusStr;
    std::cout << "Enter the temperature: ";
    std::cin >> celsiusStr;
    // Get the celsius from the user as a string

    try {
        // convert the user input to a float
        float celsius = std::stof(celsiusStr);
        // Calculate the Fahrenheit
        float Fahrenheit = ((9.0 / 5.0) * celsius) + 32;
        // Display the celsius is equivalent to Fahrenheit
        std::cout << celsius << " celsius is equivalent to " <<
         Fahrenheit << " Fahrenheit" << std::endl;
    } catch (std::invalid_argument) {
        // Display the code below for any unknown input
        std::cout << "Please enter a valid number." << std::endl;
    }
    // Display Thank you and Have a nice day once everything is done
    std::cout << "Thank you\nHave a nice day" << std::endl;
}
int main() {
    // Call the Fahrenheit function
    Fahrenheit();

    return 0;
}
