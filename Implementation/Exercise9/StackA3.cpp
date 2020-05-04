#include <iostream>

#include "StackA3.h"

using namespace std;

template<class MyData7>
StackA3<MyData7>::StackA3()
{
	TopA3 = -1;
}

template<class MyData7>
StackA3<MyData7>::~StackA3()
{

}

template<class MyData7>
void StackA3<MyData7>::PushA3(MyData7& item14)
{
	TopA3++;
	MyArrayA3[TopA3] = item14;
}

template<class MyData7>
void StackA3<MyData7>::PopA3()
{
	TopA3--;
}

template<class MyData7>
MyData7 StackA3<MyData7>::TopStackA3()
{
	return MyArrayA3[TopA3] * pow(2,TopA3);
}

template<class MyData7>
bool StackA3<MyData7>::UnderflowA3()
{
	return (TopA3 == -1);
}

template<class MyData7>
bool StackA3<MyData7>::OverflowA3()
{
	return (TopA3 == MaxSizeA3 - 1);
}