#include <iostream>

#include "Square1.h" //include a header file of another class to reference another class
#include "Rectangle1.h"

using namespace std;

Square1 square2;

Rectangle1::Rectangle1()
{
	width2 = square2.width1;
	height2 = square2.height1;
}

Rectangle1::~Rectangle1()
{

}


void Rectangle1::getHeight2()
{
	square2.getHeight1();
}

void Rectangle1::setData2(float p2, float l2)
{
	square2.setData1(p2, l2);
}

void Rectangle1::area2()
{
	square2.area1();
}

void Rectangle1::perimeter2()
{
	square2.perimeter1();
}