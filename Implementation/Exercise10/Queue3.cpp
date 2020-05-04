#include <iostream>

#include "Queue3.h"

using namespace std;

template<class MyData10>
Queue3<MyData10>::Queue3()
{
	front3 = 0;
	rear3 = 0;
}

template<class MyData10>
void Queue3<MyData10>::Enqueue3(MyData10 value6)
{
	array12[rear3] = value6;
	rear3++;
}

template<class MyData10>
void Queue3<MyData10>::Dequeue3()
{
	int i34 = 0;
	while (i34 < size7)
	{
		if (array12[i34] < 0)
		{
			int i35 = i34;
			while (i35 < size7)
			{
				array12[i35] = array12[i35 + 1];
				i35++;
			}
			rear3--;
		}
		else
		{
			i34++;
		}
	}
}

template<class MyData10>
void Queue3<MyData10>::printQueue3()
{
	for (int i35 = front3; i35 < rear3; i35++)
	{
		cout << array12[i35] << " ";
	}

	cout << endl;
}
