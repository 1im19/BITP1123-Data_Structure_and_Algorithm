#include <iostream>

#include "BubbleSort1.h"

using namespace std;

template<class T3>
void BubbleSort1<T3>::bubblesort1(T3 list1[], int last1)
{
	int current1, walker1, temp7;
	bool sorted1;

	for (current1 = 0, sorted1 = false; current1 <= last1 & !sorted1; current1++)
	{
		for (walker1 = last1, sorted1 = true; walker1 > current1; walker1--)
		{
			if (list1[walker1] < list1[walker1 - 1])
			{
				sorted1 = false;
				temp7 = list1[walker1];
				list1[walker1] = list1[walker1 - 1];
				list1[walker1 - 1] = temp7;
			}
		}
	}
}