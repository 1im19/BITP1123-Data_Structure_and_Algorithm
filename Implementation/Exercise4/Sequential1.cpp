#include <iostream>

#include "Sequential1.h"

using namespace std;

bool Sequential1::SequentialSearch1(int array4[], int SIZE4, int target4, int& locationWanted4)
{
	int index4 = 0;
	bool found4 = false;

	while (index4 < SIZE4 - 1)
	{
		if(array4[index4] != target4)
		{
			index4++;
		}
		else
		{
			found4 = true;
			locationWanted4 = index4;
			break;
		}
	}

	return found4;
}