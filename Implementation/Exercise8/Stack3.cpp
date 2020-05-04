#include <iostream>

#include "Stack3.h"

using namespace std;

template<class MyData3>
Stack3<MyData3>::Stack3()
{
	Top3 = -1;
}

template<class MyData3>
Stack3<MyData3>::~Stack3()
{

}

template<class MyData3>
void Stack3<MyData3>::Push3(MyData3 item10, MyData3 item11)
{
	Top3++;
	MyArray3[Top3] = item10;
	MyArray4[Top3] = item11;
}

template<class MyData3>
void Stack3<MyData3>::Pop3()
{
	Top3--;
}

template<class MyData3>
void Stack3<MyData3>::TopStack3()
{
	cout << MyArray3[Top3] << " " << MyArray4[Top3] << endl;
}

template<class MyData3>
bool Stack3<MyData3>::Underflow3()
{
	return (Top3 == -1);
}

template<class MyData3>
bool Stack3<MyData3>::Overflow3()
{
	return (Top3 == MaxSize3 - 1);
}