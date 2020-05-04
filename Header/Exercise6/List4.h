#ifndef LIST4_H
#define LIST4_H

template<class DataType2>
class List4
{
private:
	// Nested Class. To call this class, "Class object = new class"
	class Node2
	{
	public:
		DataType2 data2;
		DataType2 data3;
		Node2* link2;
	};

	Node2* pHead2;
	Node2* pCurr2;
	int numItem2;

public:
	List4();
	~List4();
	void AddToFront4();
	void AddToMiddle4();
	void AddToMiddle4(char item5);
	bool Traverse4(char item5);
	void printData4();
	int NumberOfItem4();
};

#endif
