#include <iostream>
#include "doSomeMath.h"

// Function to get user input and check for valid input
void getUserInput() {

    double userInput1{ 0.0 };
    double userInput2{ 0.0 };
    char userOperator{ 'a' };
        
    while (true) {
        std::cout << "Enter a number followed by an operator (+, -, *, /) and another number to calculate the total: ";
        std::cin >> userInput1 >> userOperator >> userInput2;

        //check if input has failed or if the operator is invalid
        if (std::cin.fail() || (userOperator != '+' && userOperator != '-' && userOperator != '*' && userOperator != '/')) {
            std::cout << "Invalid input. Please try again." << std::endl;
            handleInputError();
        }
        else if (!isDivisible(userInput1, userInput2)) {
            std::cout << "Cannot divide by 0, please try again." << std::endl;
            handleInputError();
        }
        else {
            break;
        }
    }

    // Call the calculate function to perform a calculation based on user input values.
    calculate(userInput1, userInput2, userOperator);
}
