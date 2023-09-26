#include <iostream>
#include "doSomeMath.h"

//check if user is trying to divide by 0
bool isDivisible(const double& userInput1,const double& userInput2) {

	if (userInput1 == 0.0 ||  userInput2 == 0.0) {
		return false;
	}
	else {
		return true;
	}

}