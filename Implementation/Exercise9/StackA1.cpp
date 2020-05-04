#include <iostream>

#include "StackA1.h"

using namespace std;

template<class MyData5>
StackA1<MyData5>::StackA1()
{
	TopA1 = -1;
}

template<class MyData5>
StackA1<MyData5>::~StackA1()
{

}

template<class MyData5>
void StackA1<MyData5>::PushA1(MyData5 item12)
{
	TopA1++;
	MyArrayA1[TopA1] = item12;
}

template<class MyData5>
void StackA1<MyData5>::PopA1()
{
	TopA1--;
}

template<class MyData5>
bool StackA1<MyData5>::UnderflowA1()
{
	return (TopA1 == -1);
}

template<class MyData5>
bool StackA1<MyData5>::OverflowA1()
{
	return (TopA1 == MaxSizeA1 - 1);
}