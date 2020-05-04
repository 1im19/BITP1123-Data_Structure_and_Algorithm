#include <iostream>

#include "List1b.h"

using namespace std;

List1b::List1b()
{
	size1b = 0;
}

List1b::~List1b()
{

}

int List1b::NumberofItem1b()
{
	return size1b;
}

void List1b::addItem1b(char item1b)
{
	if (size1b == maxSize1b)
	{
		cout << "***There is no more space left*****\n";
		return;
	}
	array7[size1b] = item1b;
	size1b++;
}

void List1b::printItem1b()
{
	for (int i14 = 0; i14 < size1b; i14++)
	{
		cout << array7[i14] << " ";
	}
	cout << endl;
}