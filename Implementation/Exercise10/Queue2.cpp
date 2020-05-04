#include <iostream>

#include "Queue2.h"

using namespace std;

template<class MyData9>
Queue2<MyData9>::Queue2()
{
	front2 = NULL;
	rear2 = NULL;
	qty1 = 0;
}

template<class MyData9>
void Queue2<MyData9>::Enqueue2(MyData9 value5)
{
	Node6 <MyData9>* T6 = new Node6<MyData9>;
	cout << "Enqueue " << value5 << " into the queue." << endl;
	T6->data6 = value5;
	T6->link6 = NULL;

	if (!Empty4())
	{
		rear2->link6 = T6;
	}
	else
	{
		front2 = T6;
	}

	qty1++;
	rear2 = T6;
}

template<class MyData9>
void Queue2<MyData9>::Dequeue2()
{
	if (qty1 == 0)
	{
		cout << "Underflow!!!" << endl;
	}
	else
	{
		cout << "Dequeue: " << front2->data6 << endl;
		Node6<MyData9>* temp10 = front2;
		if (qty1 == 1)
		{
			rear2 = front2 = NULL;
		}
		else
		{
			front2 = front2->link6;
		}
		qty1--;
	}
}

template<class MyData9>
void Queue2<MyData9>::printQueue2()
{
	cout << "List of items in a queue: \t";

	curr1 = front2;

	while (curr1 != NULL)
	{
		cout << curr1->data6 << " ";
		curr1 = curr1->link6;
	}

	cout << endl;
}

template<class MyData9>
MyData9 Queue2<MyData9>::QueueFront2()
{
	if (Empty4())
	{
		return false;
	}
	else
	{
		return front2->data6;
	}
}

template<class MyData9>
MyData9 Queue2<MyData9>::QueueRear2()
{
	if (Empty4())
	{
		return false;
	}
	else
	{
		return rear2->data6;
	}
}

template<class MyData9>
bool Queue2<MyData9>::Empty4()
{
	return(qty1 == 0);
}