#include <iostream>
#include <string>

#include "Student1.h"

using namespace std;

Student1::Student1()
{

}

Student1::~Student1()
{

}

void Student1::getInfo2(int metric2, int marks2)
{
	metric1 = metric2;
	marks1 = marks2;
}

void Student1::Print2()
{
	cout << "\nmetric: " << metric1;
	cout << "\nmarks: " << marks1 << endl;
}