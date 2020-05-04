#include <iostream>

#include "Sentinel1.h"

using namespace std;

bool Sentinel1::SentinelSearch1(int array1[], int SIZE1, int target1, int &locationWanted1)
{
	int last1 = array1[SIZE1 - 1];
	array1[SIZE1 - 1] = target1;
	int index1 = 0;
	bool found1 = false;
	
	while (array1[index1] != target1)
	{
		index1++;
	}

	array1[SIZE1 - 1] = last1;

	if (index1 < SIZE1 - 1 || target1 == array1[SIZE1 - 1])
	{
		found1 = true;
		locationWanted1 = index1;
	}

	return found1;
}