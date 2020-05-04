#include <iostream>
#include <string>

#include "Info1.h"

using namespace std;

Info1::Info1()
{

}

Info1::~Info1()
{

}

void Info1::getInfo1(int ic1, const char *n1)
{
	id1 = ic1;
	strcpy_s(name2, n1);
}

void Info1::Print1()
{
	cout << "\nID: " << id1;
	cout << "\nName: " << name2 << endl;
}