#include <iostream>

#include "Stack1.h"

using namespace std;

template<class MyData1>
Stack1<MyData1>::Stack1()
{
	Top1 = -1;
}

template<class MyData1>
Stack1<MyData1>::~Stack1()
{

}

template<class MyData1>
void Stack1<MyData1>::Push1(MyData1 item9)
{
	Top1++;
	MyArray1[Top1] = item9;
}

template<class MyData1>
void Stack1<MyData1>::Pop1()
{
	Top1--;
}

template<class MyData1>
void Stack1<MyData1>::TopStack1()
{
	cout << MyArray1[Top1] << " ";
}

template<class MyData1>
bool Stack1<MyData1>::Underflow1()
{
	return (Top1 == -1);
}

template<class MyData1>
bool Stack1<MyData1>::Overflow1()
{
	return (Top1 == MaxSize1 - 1);
}