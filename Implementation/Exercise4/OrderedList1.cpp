#include <iostream>

#include "OrderedList1.h"

using namespace std;

bool OrderedList1::OrderedListSearch1(int array3[], int SIZE3, int target3, int& locationWanted3)
{
	int index3;
	bool found3;

	if (target3 < array3[SIZE3 - 1])
	{
		index3 = 0;
		//In Ordered List Searching, you are supposed to have a list of number that is sorted (from smallest to largest)
		//And you need to compare whether the target is larger than the number in array to increment the index until the target is equal or smaller than the array in an index
		//However, since list of numbers in the main is generated randomly, there are number that is in the larger index is smaller than the current index. You can't compare with using '>'
		//So in this coding, the comparison used '!=' instead
		while (target3 != array3[index3])
		{
			index3++;
		}
	}
	else
	{
		index3 = SIZE3 - 1;
	}

	if (target3 == array3[index3])
	{
		found3 = true;
	}
	else
	{
		found3 = false;
	}

	locationWanted3 = index3;

	return found3;
}