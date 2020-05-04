#include <iostream>

#include "List5.h"

using namespace std;

template<class DataType3>
List5<DataType3>::List5()
{
	numItem3 = 0;
	pHead3 = 0;
}

template<class DataType3>
List5<DataType3>::~List5()
{

}

template<class DataType3>
void List5<DataType3>::AddToFront5()
{
	DataType3 item7;
	Node3* pNew5 = new Node3; 
	cout << "Enter data: \t";
	cin >> item7;
	pNew5->data3 = item7; 
	pNew5->link3 = pHead3; 
	pHead3 = pNew5; 
	numItem3++;
}

template<class DataType3>
void List5<DataType3>::DeleteMiddle5(char item8)
{
	Node3* pNew6 = new Node3;
	pNew6->data3 = item8;
	pNew6->link3 = pHead3;
	Node3* temp6 = new Node3;
	Node3* prev2 = new Node3;
	temp6 = pHead3;
	if (temp6->data3 == item8)
	{
		pHead3 = pHead3->link3; //deleting item in front of a data
	}
	else
	{
		//deleting item in the middle or at the rear of data
		while (temp6->link3 != 0 && temp6->data3 != item8)
		{
			prev2 = temp6;
			temp6 = temp6->link3;
		}
		prev2->link3 = temp6->link3;
	}	
	numItem3--;
}

template<class DataType3>
bool List5<DataType3>::Traverse5(char item8)
{
	pCurr3 = pHead3;
	while (pCurr3->data3 != item8 && pCurr3->link3 != 0)
	{
		pCurr3 = pCurr3->link3;
	}

	if (pCurr3->data3 == item8)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class DataType3>
void List5<DataType3>::printData5()
{
	pCurr3 = pHead3;
	while (pCurr3 != 0)
	{
		cout << pCurr3->data3 << " ";
		pCurr3 = pCurr3->link3;
	}
	cout << endl;
}

template<class DataType3>
int List5<DataType3>::NumberOfItem5()
{
	return numItem3;
}