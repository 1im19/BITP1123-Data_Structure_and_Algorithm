#ifndef LIST5_H
#define LIST5_H

template<class DataType3>
class List5
{
private:
	// Nested Class. To call this class, "Class object = new class"
	class Node3
	{
	public:
		DataType3 data3;
		Node3* link3;
	};

	Node3* pHead3;
	Node3* pCurr3;
	int numItem3;

public:
	List5();
	~List5();
	void AddToFront5();
	void DeleteMiddle5(char item7);
	bool Traverse5(char item7);
	void printData5();
	int NumberOfItem5();
};

#endif