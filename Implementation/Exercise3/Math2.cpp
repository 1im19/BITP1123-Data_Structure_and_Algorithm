#include <iostream>

#include "Math2.h"

using namespace std;

template<class Exercise3Question5>
Math2<Exercise3Question5>::Math2()
{

}

template<class Exercise3Question5>
Math2<Exercise3Question5>::~Math2()
{

}

template<class Exercise3Question5>
void Math2<Exercise3Question5>::display1(Exercise3Question5 number2, Exercise3Question5 number3, char operation1)
{
	if (operation1 == '+')
	{
		cout << number2 + number3 << endl;
	}
	else if (operation1 == '-')
	{
		cout << number2 - number3 << endl;
	}
	else if (operation1 == '*')
	{
		cout << number2 * number3 << endl;
	}
	else if (operation1 == '/')
	{
		cout << number2 / number3 << endl;
	}
}