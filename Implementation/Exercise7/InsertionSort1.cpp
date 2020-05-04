#include <iostream>

#include "InsertionSort1.h"

using namespace std;

template<class T4>
void InsertionSort1<T4>::insertionsort1(T4 list2[], int size4)
{
	int current2, temp8, j1;

	for (current2 = 0; current2 <= size4 - 1; current2++)
	{
		temp8 = list2[current2];
		j1 = current2 - 1;

		while (j1 >= 0 && list2[j1] < temp8)
		{
			list2[j1 + 1] = list2[j1];
			j1--;
		}
		list2[j1 + 1] = temp8;
	}
}