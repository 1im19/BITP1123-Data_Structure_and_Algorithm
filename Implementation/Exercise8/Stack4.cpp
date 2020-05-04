#include <iostream>

#include "Stack4.h"

using namespace std;

template<class MyData4>
Stack4<MyData4>::Stack4()
{
	top3 = 0;
	top4 = 0;
	count2 = 0;
	count3 = 0;
}

template<class MyData4>
void Stack4<MyData4>::Push4(MyData4& value1, MyData4& value2)
{
	Node5<MyData4>* T4 = new Node5<MyData4>;
	Node5<MyData4>* T5 = new Node5<MyData4>;
	T4->data5 = value1;
	T4->link5 = top3;
	T5->data5 = value2;
	T5->link5 = top4;
	top3 = T4;
	top4 = T5;
	count2++;
	count3++;
}

template<class MyData4>
void Stack4<MyData4>::Pop4()
{
	if (!Empty4())
	{
		Node5<MyData4>* temp8 = top3;
		Node5<MyData4>* temp9 = top4;
		top3 = top3->link5;
		top4 = top4->link5;
		delete temp8;
		delete temp9;
		count2--;
		count3--;
	}
	else
	{
		cout << "\nStack is empty, can't Top and Pop the Stack" << endl;
	}
}

template<class MyData4>
bool Stack4<MyData4>::Empty4()
{
	return(count2 == 0);
}

template<class MyData4>
void Stack4<MyData4>::TopStack4()
{
	if (Empty4())
	{
		cout << "-1" << endl;
	}
	else
	{
		cout << top3->data5 << " " << top4->data5 << endl;
	}
}