#include <iostream>

#include "List2.h"

using namespace std;

List2::List2()
{
	size2 = 0;
}

List2::~List2()
{

}

int List2::NumberofItem2()
{
	return size2;
}

void List2::addItem2(int item2)
{
	if (size2 == maxSize2)
	{
		cout << "***There is no more space left*****\n";
		return;
	}

	array10[size2] = item2;
	size2++;
}

void List2::deleteItem2()
{
	if (size2 == 0)
	{
		cout << "***No more itemto be deleted*****\n";
		return;
	}

	cout << "Item " << array10[size2 - 1] << " at index " << size2 - 1 << " is deleted from the list" << endl;
	size2--;
}

void List2::deleteItem2(int index8)
{
	if (size2 == 0)
	{
		cout << "***No more item to be deleted*****\n";
		return;
	}

	cout << "Item " << array10[index8 - index8] << " at index " << index8 - index8 << " is deleted from the list" << endl;

	for (int i20 = 0; i20 < size2 - 1; i20++)
	{
		array10[i20] = array10[i20 + 1];
	}
	size2--;
}

int List2::Total1()
{
	int total2 = 0;
	for (int i24 = 0; i24 < size2; i24++)
	{
		total2 += array10[i24];
	}
	return total2;
}

bool List2::findItem1(int target6)
{
	int i25 = 0;
	bool found6;
	while (i25 < size2)
	{
		if (array10[i25] == target6)
		{
			found6 = true;
			cout << "Item " << target6 << " found at index " << i25 << endl;
			break;
		}
		else
		{
			found6 = false;
			i25++;
		}
	}
	return found6;
}

void List2::printItem2()
{
	for (int i21 = 0; i21 < size2; i21++)
	{
		cout << array10[i21] << " ";
	}
	cout << endl;
}