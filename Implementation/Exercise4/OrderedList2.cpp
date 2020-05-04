#include <iostream>

#include "OrderedList2.h"

using namespace std;

bool OrderedList2::OrderedListSearch2(int array5[], int SIZE5, int target5, int& locationWanted5)
{
	int index5;
	bool found5;

	if (target5 < array5[SIZE5 - 1])
	{
		index5 = 0;

		while (target5 > array5[index5])
		{
			index5++;
		}
	}
	else
	{
		index5 = SIZE5 - 1;
	}

	if (target5 == array5[index5])
	{
		found5 = true;
	}
	else
	{
		found5 = false;
	}

	locationWanted5 = index5;

	return found5;
}