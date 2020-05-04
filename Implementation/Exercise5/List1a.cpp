#include <iostream>

#include "List1a.h"

using namespace std;

List1a::List1a()
{
	size1a = 0;
}

List1a::~List1a()
{

}

int List1a::NumberofItem1a()
{
	return size1a;
}

void List1a::addItem1a(int item1a)
{
	if (size1a == maxSize1a)
	{
		cout << "***There is no more space left*****\n";
		return;
	}
	array6[size1a] = item1a;
	size1a++;
}

void List1a::printItem1a()
{
	for (int i12 = 0; i12 < size1a; i12++)
	{
		cout << array6[i12] << " ";
	}
	cout << endl;
}