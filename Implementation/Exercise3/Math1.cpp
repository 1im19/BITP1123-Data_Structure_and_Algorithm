#include<iostream>

#include "Math1.h"

using namespace std;

template<class Number1>
Math1<Number1>::Math1()
{

}

template<class Number1>
Math1<Number1>::~Math1()
{

}

template<class Number1>
void Math1<Number1>::Input1(Number1 &input1, Number1 &input2, Number1 &output1)
{
	cout << "Number 1: \t";
	cin >> input1;
	cout << "Number 2: \t";
	cin >> input2;
	output1 = input1 * input2;
}

