#include <iostream>

#include "StackA2.h"

using namespace std;

template<class MyData6>
StackA2<MyData6>::StackA2()
{
	TopA2 = -1;
}

template<class MyData6>
StackA2<MyData6>::~StackA2()
{

}

template<class MyData6>
void StackA2<MyData6>::PushA2(MyData6& item13)
{
	TopA2++;
	MyArrayA2[TopA2] = item13;
}

template<class MyData6>
void StackA2<MyData6>::PopA2()
{
	TopA2--;
}

template<class MyData6>
MyData6 StackA2<MyData6>::TopStackA2()
{
	return MyArrayA2[TopA2];
}

template<class MyData6>
bool StackA2<MyData6>::UnderflowA2()
{
	return (TopA2 == -1);
}

template<class MyData6>
bool StackA2<MyData6>::OverflowA2()
{
	return (TopA2 == MaxSizeA2 - 1);
}