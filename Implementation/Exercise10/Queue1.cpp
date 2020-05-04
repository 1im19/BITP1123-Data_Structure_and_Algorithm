#include <iostream>

#include "Queue1.h"

using namespace std;

template<class MyData8>
Queue1<MyData8>::Queue1()
{
	front1 = -1;
	rear1 = -1;
	bil1 = 0;
}
template<class MyData8>
void Queue1<MyData8>::Enqueue1(MyData8 value4)
{
	if (bil1 < size6)
	{
		cout << "Insert " << value4 << " into queue" << endl;
		rear1++;

		if (rear1 == size6)
		{
			rear1 = 0;
		}

		if (bil1 == 0)
		{
			front1 = 0;
		}

		array11[rear1] = value4;
		bil1++;
	}
	else
	{
		cout << "Overflow!!!" << endl;
	}
}

template<class MyData8>
void Queue1<MyData8>::Dequeue1()
{
	if (bil1 == 0)
	{
		cout << "Underflow!!!";
	}
	else
	{
		cout << "Dequeue: \t" << array11[front1] << endl;
		front1++;

		if (front1 == size6)
		{
			front1 = 0;
		}

		if (bil1 == 1)
		{
			rear1 = front1 = -1;
		}

		bil1--;
	}
}

template<class MyData8>
void Queue1<MyData8>::printQueue1()
{
	cout << "List of Items in a Queue: \t";

	for (int i33 = front1; i33 <= rear1; i33++)
	{
		cout << array11[i33] << " ";
	}

	cout << endl;
}

template<class MyData8>
MyData8 Queue1<MyData8>::QueueFront1()
{
	if (Empty3())
	{
		return false;
	}
	else
	{
		return array11[front1];
	}
}

template<class MyData8>
MyData8 Queue1<MyData8>::QueueRear1()
{
	if (Empty3())
	{
		return false;
	}
	else
	{
		return array11[rear1];
	}
}

template<class MyData8>
bool Queue1<MyData8>::Empty3()
{
	return (bil1 == 0);
}