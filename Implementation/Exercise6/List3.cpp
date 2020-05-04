#include <iostream>

#include "List3.h"

using namespace std;

template<class DataType1>
List3<DataType1>::List3()
{
	numItem1 = 0;
	pHead1 = 0;
}

template<class DataType1>
List3<DataType1>::~List3()
{

}

template<class DataType1>
void List3<DataType1>::AddToFront3()
{
	DataType1 item3;
	Node1* pNew1 = new Node1; //calling a class inside a class
	cout << "Enter data: \t";
	cin >> item3;
	//declaring a varible inside of nested class
	pNew1->data1 = item3; //stores a data of a node
	pNew1->link1 = pHead1; //stores an address of a node
	pHead1 = pNew1; //overwrite a new pHead to a new address
	numItem1++;
}

template<class DataType1>
void List3<DataType1>::AddToMiddle3()
{
	DataType1 item3;
	Node1* pNew2 = new Node1;
	cout << "Enter data: \t";
	cin >> item3;
	pNew2->data1 = item3;
	pNew2->link1 = 0; //assign an address for a node that we want to insert at the end
	Node1* temp1 = pHead1; //add a temporary variable to traverse into the list
	while (temp1->link1 != 0)
	{
		temp1 = temp1->link1; //search for a 0 address (which indicates the end of the list)
	}
	temp1->link1 = pNew2; 
	numItem1++;
}

template<class DataType1>
void List3<DataType1>::printData3()
{
	pCurr1 = pHead1;
	while (pCurr1 != 0)
	{
		cout << pCurr1->data1 << " ";
		pCurr1 = pCurr1->link1;
	}
	cout << endl;
}

template<class DataType1>
int List3<DataType1>::NumberOfItem3()
{
	return numItem1;
}