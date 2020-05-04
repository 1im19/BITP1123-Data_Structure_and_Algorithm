#include <iostream>

#include "List1c.h"

using namespace std;

List1c::List1c()
{
	size1c = 0;
}

List1c::~List1c()
{

}

int List1c::NumberofItem1c()
{
	return size1c;
}

void List1c::addItem1cv1(int item1cv1_1)
{
	if (size1c == maxSize1c)
	{
		cout << "***There is no more space left*****\n";
		return;
	}
	array8[size1c] = item1cv1_1;
	size1c++;
}

void List1c::addItem1cv1(int item1cv1_2, int index6)
{
	array8[index6] = item1cv1_2;
}

void List1c::addItem1cv2(char item1cv2_1)
{
	if (size1c == maxSize1c)
	{
		cout << "***There is no more space left*****\n";
		return;
	}
	array9[size1c] = item1cv2_1;
	size1c++;
}

void List1c::addItem1cv2(char item1cv2_2, int index7)
{
	array9[index7] = item1cv2_2;
}

void List1c::printItem1cv1()
{
	for (int i16 = 0; i16 < size1c; i16++)
	{
		cout << array8[i16] << " ";
	}
	cout << endl;
}

void List1c::printItem1cv2()
{
	for (int i17 = 0; i17 < size1c; i17++)
	{
		cout << array9[i17] << " ";
	}
	cout << endl;
}