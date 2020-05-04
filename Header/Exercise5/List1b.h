#ifndef LIST1B_H
#define LIST1B_H

const int maxSize1b = 10;

class List1b
{
private:
	int size1b;
	char array7[maxSize1b];

public:
	List1b();
	~List1b();
	int NumberofItem1b();
	void addItem1b(char item1b);
	void printItem1b();
};

#endif

