#include <iostream>

#include "Stack2.h"

using namespace std;

template<class MyData2>
Stack2<MyData2>::Stack2()
{
	top2 = 0;
	count1 = 0;
}

template<class MyData2>
void Stack2<MyData2>::Push2(MyData2& value1)
{
	Node4<MyData2>* T3 = new Node4<MyData2>;
	T3->data4 = value1;
	T3->link4 = top2;
	top2 = T3;
	count1++;
}

template<class MyData2>
void Stack2<MyData2>::Pop2()
{
	if (!Empty2())
	{
		Node4<MyData2>* temp7 = top2;
		top2 = top2->link4;
		delete temp7; //deleting the first pointer
		count1--;
	}
	else
	{
		cout << "\nStack is empty, can't Top and Pop the Stack" << endl;
	}
}

template<class MyData2>
bool Stack2<MyData2>::Empty2()
{
	return(count1 == 0);
}

template<class MyData2>
void Stack2<MyData2>::TopStack2()
{
	if (Empty2())
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << top2->data4 << " ";
	}
}