#include <iostream>

#include "Queue4a.h"

using namespace std;


Queue4a::Queue4a()
{
	front3 = -1;
	rear3 = -1;
	bil2 = 0;
}

void Queue4a::Enqueue4a()
{
	if (bil2 < size8)
	{
		rear3++;
		cout << "Queue Number: \t" << rear3 + 1 << endl;

		if (rear3 == size8)
		{
			rear3 = 0;
		}

		if (bil2 == 0)
		{
			front3 = 0;
		}

		bil2++;
	}
	else
	{
		cout << "Queue is full" << endl;
	}
}


void Queue4a::Dequeue4a()
{
	if (bil2 == 0)
	{
		cout << "Queue is empty" << endl;
	}
	else
	{
		front3++;
		cout << "Calling queue number: \t" << front3 << endl;

		if (front3 == size8)
		{
			front3 = 0;
		}

		if (bil2 == 1)
		{
			rear3 = front3 = -1;
		}

		bil2--;
	}
}