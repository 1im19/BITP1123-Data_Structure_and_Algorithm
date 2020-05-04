#include <iostream>

#include "Probability1.h"

using namespace std;

bool Probability1::ProbabilitySearch1(int array2[], int SIZE2, int target2, int &locationWanted2)
{
	int temp1;
	int index2 = 0;
	bool found2 = false;

	while (index2 < SIZE2)
	{
		if (array2[index2] != target2)
		{
			index2++;
		}
		else
		{
			found2 = true;
			locationWanted2 = index2;
			if (index2 != 0)
			{
				temp1 = array2[index2 - 1];
				array2[index2 - 1] = array2[index2];
				array2[index2] = temp1;
			}
			break;
		}
	}

	return found2;
}