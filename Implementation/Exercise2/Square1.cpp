#include <iostream>

#include "Square1.h"

using namespace std;

Square1::Square1()
{
	width1 = 0;
	height1 = 0;
}

Square1::~Square1()
{

}


void Square1::getHeight1()
{
	cout << height1;
}

void Square1::getWidth1()
{
	cout << width1;
}

void Square1::setData1(float p1, float l1)
{
	height1 = p1;
	width1 = l1;
}

void Square1::area1()
{
	cout << height1 * width1;
}

void Square1::perimeter1()
{
	cout << (height1 * 2) + (width1 * 2);
}