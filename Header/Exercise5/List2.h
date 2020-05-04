#ifndef LIST2_H
#define LIST2_H

const int maxSize2 = 10;

class List2
{
private:
	int size2;
	int array10[maxSize2];

public:
	List2();
	~List2();
	int NumberofItem2();
	void addItem2(int item2);
	void deleteItem2();
	void deleteItem2(int index8);
	int Total1();
	bool findItem1(int target6);
	void printItem2();
};

#endif

