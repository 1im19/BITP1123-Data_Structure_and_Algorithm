#ifndef LIST1A_H
#define LIST1A_H

const int maxSize1a = 10;

class List1a
{
private:
	int size1a;
	int array6[maxSize1a];

public:
	List1a();
	~List1a();
	int NumberofItem1a();
	void addItem1a(int item1a);
	void printItem1a();
};

#endif

