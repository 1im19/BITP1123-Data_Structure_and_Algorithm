#ifndef LIST3_H
#define LIST3_H

template<class DataType1>
class List3
{
private:
	// Nested Class. To call this class, "Class object = new class"
	class Node1
	{
	public:
		DataType1 data1;
		Node1* link1;
	};

	Node1* pHead1;
	Node1* pCurr1;
	int numItem1;

public:
	List3();
	~List3();
	void AddToFront3();
	void AddToMiddle3();
	void printData3();
	int NumberOfItem3();
};

#endif