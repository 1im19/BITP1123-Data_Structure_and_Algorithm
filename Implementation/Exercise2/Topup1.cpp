#include <iostream>

#include "Topup1.h"

using namespace std;

template<class T1, class T2>
Topup1<T1, T2>::Topup1(T1 x3, T2 y2)
{
	value1 = x3;
	value2 = y2;
}

template<class T1, class T2>
void Topup1<T1, T2>::Display1()
{
	cout << "Total loan: " << value1 << endl;
	cout << "Interest rate: " << value2 << endl;
}

template<class T1, class T2>
void Topup1<T1, T2>::Execute1()
{
	cout << "Total must be paid: " << value1 + (value1 * value2) << endl;
}