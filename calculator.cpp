/* Calculator.cpp
my first major c++ program, it's shit but I can live with it.
created with microsoft visual studio 2010, so the syntax is without c++11 unfortunately
feel free to copy this all you want
*/

#include "stdafx.h"
#include <iostream>

int GetUserInput()
{
	std::cout << "Please enter in an integer " << std::endl;
	int nValue;
	std::cin >> nValue;
	return nValue;
}

int GetMathematicalOperator()
{
	std::cout << "Please enter in the operator you want( 1. = +, 2 = -, 3 = *, 4 = / ): " << std::endl;

	char n0perator;
	std::cin >> n0perator;

	//is hard

	return n0perator;
}

int CalculateResult(int nX, int n0perator, int nY)
{
	//calculating what they entered into userinput() and mathematicaloperator()
	if(n0perator == '+')
		return nX + nY;
	if(n0perator == '-')
		return nX - nY;
	if(n0perator == '*')
		return nX * nY;
	if(n0perator == '/')
		return nX / nY;
	return 0;
}

void PrintResult(int nResult)
{
	std::cout << "Your result is: " << nResult << std::endl;
}

int main()
{
	//Get first number
	int nInput1 = GetUserInput();

	//Get mathematical operator
	int n0perator = GetMathematicalOperator();

	//Get second number
	int nInput2 = GetUserInput();

	//Calculate result and store in temporary variable(for readability/debugability)
	int nResult = CalculateResult(nInput1,n0perator,nInput2);

	//print result 
	PrintResult(nResult);
}
