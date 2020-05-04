#include <iostream>

#include "Queue4b.h"

using namespace std;

Queue4b::Queue4b()
{
	front4 = 0;
	rear4 = 0;
	qty2 = 0;
	qty3 = 0;
}

void Queue4b::Enqueue4b()
{
	Node7 * T7 = new Node7;
	T7->data7 = qty3;
	T7->link7 = 0;

	if (!Empty4b())
	{
		rear4->link7 = T7;
	}
	else
	{
		front4 = T7;
	}

	qty2++;
	qty3++;
	rear4 = T7;
	cout << "Queue Number: \t" << rear4->data7 + 1<< endl;
}

void Queue4b::Dequeue4b()
{
	if (qty2 == 0)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		cout << "Calling queue number: " << front4->data7 + 1 << endl;
		Node7* temp11 = front4;
		if (qty2 == 1)
		{
			rear4 = front4 = 0;
		}
		else
		{
			front4 = front4->link7;
		}
		qty2--;
	}
}

bool Queue4b::Empty4b()
{
	return(qty2 == 0);
}