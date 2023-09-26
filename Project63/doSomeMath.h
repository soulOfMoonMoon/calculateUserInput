#pragma once
//links function calculate and passes all nessecary input from user to be calculated 
void calculate(const double& a, const double& b, const char& c);

//links function getUserInput to prompt user to enter 
void getUserInput();

//check if user is trying to divide by 0
bool isDivisible(const double& userInput1, const double& userInput2);

//function for error handling
void handleInputError();