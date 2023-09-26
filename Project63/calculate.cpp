#include <iostream>
#include "doSomeMath.h"

//preforms nessecary calculations based on user input and out puts calculations to the console
void calculate(const double& userInput1, const double& userInput2, const char& userOperator) {

	switch (userOperator)
	{
	case '*':
	case 'x':
	{
		std::cout << userInput1 << " times " << userInput2 << " = " << userInput1 * userInput2;
		break;
	}
	case '-':
	{
		std::cout << userInput1 << " minus " << userInput2 << " = " << userInput1 - userInput2;
		break;
	}
	case '+':
	{
		std::cout << userInput1 << " plus " << userInput2 << " = " << userInput1 + userInput2;
		break;
	}
	case '/':
	{
		std::cout << userInput1 << " divided by " << userInput2 << " = " << userInput1 / userInput2;
		break;
	}
	default:
		std::cout << "I don't know how but you entered in something invalid didn't you?";
		handleInputError();
		break;
	}

}