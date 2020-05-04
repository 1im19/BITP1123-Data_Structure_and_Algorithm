#include <iostream>

#include "List4.h"

using namespace std;

template<class DataType2>
List4<DataType2>::List4()
{
	numItem2 = 0;
	pHead2 = 0;
}

template<class DataType2>
List4<DataType2>::~List4()
{

}

template<class DataType2>
void List4<DataType2>::AddToFront4()
{
	DataType2 item4;
	Node2* pNew3 = new Node2; 
	cout << "Enter data: \t";
	cin >> item4;
	pNew3->data2 = item4; 
	pNew3->link2 = pHead2; 
	pHead2 = pNew3; 
	numItem2++;
}

template<class DataType2>
void List4<DataType2>::AddToMiddle4()
{
	DataType2 item4;
	Node2* pNew4 = new Node2;
	cout << "Enter data: \t";
	cin >> item4;
	pNew4->data2 = item4;
	pNew4->link2 = 0; 
	Node2* temp2 = pHead2; 
	while (temp2->link2 != 0)
	{
		temp2 = temp2->link2; 
	}
	temp2->link2 = pNew4;
	numItem2++;
}

template<class DataType2>
void List4<DataType2>::AddToMiddle4(char item5)
{
	DataType2 item6;
	Node2* pNew4 = new Node2;
	cout << "Enter data: \t";
	cin >> item6;
	Node2* prev1 = new Node2; //this is used to store the previous node location
	Node2* temp3 = new Node2; //this is used to store the current node location
	Node2* temp4 = new Node2; //this is used to store the temporary data and address that is newly inputted
	temp3 = pHead2;
	while (temp3->link2 != 0 && temp3->data2 != item5)
	{
		prev1 = temp3;
		temp3 = temp3->link2;
	}
	prev1 = temp3;
	temp3 = temp3->link2;
	temp4->data2 = item6;
	prev1->link2 = temp4;
	temp4->link2 = temp3;
	numItem2++;
}

template<class DataType2>
bool List4<DataType2>::Traverse4(char item5)
{
	pCurr2 = pHead2;
	//traverse to find the target in the Linked List
	while (pCurr2->data2 != item5 && pCurr2->link2 != 0)
	{
		pCurr2 = pCurr2->link2;
	}

	if (pCurr2->data2 == item5)
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class DataType2>
void List4<DataType2>::printData4()
{
	pCurr2 = pHead2;
	while (pCurr2 != 0)
	{
		cout << pCurr2->data2 << " ";
		pCurr2 = pCurr2->link2;
	}
	cout << endl;
}

template<class DataType2>
int List4<DataType2>::NumberOfItem4()
{
	return numItem2;
}