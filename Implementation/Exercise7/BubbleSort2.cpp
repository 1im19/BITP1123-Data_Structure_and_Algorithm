#include <iostream>

#include "BubbleSort2.h"

using namespace std;

template<class T4>
void BubbleSort2<T4>::bubblesort2(T4 list3[], int last2)
{
	int current3, walker3, temp9;
	bool sorted2;

	for (current3 = 0, sorted2 = false; current3 <= last2 & !sorted2; current3++)
	{
		for (walker3 = last2, sorted2 = true; walker3 > current3; walker3--)
		{
			if (list3[walker3] > list3[walker3 - 1])
			{
				sorted2 = false;
				temp9 = list3[walker3];
				list3[walker3] = list3[walker3 - 1];
				list3[walker3 - 1] = temp9;
			}
		}
	}
}