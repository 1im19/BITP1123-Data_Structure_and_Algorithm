#ifndef LIST1C_H
#define LIST1C_H

const int maxSize1c = 10;

class List1c
{
private:
	int size1c;
	int array8[maxSize1c];
	char array9[maxSize1c];

public:
	List1c();
	~List1c();
	int NumberofItem1c();
	void addItem1cv1(int item1cv1_1);
	void addItem1cv1(int item1cv1_2, int index6);
	void addItem1cv2(char item1cv2_1);
	void addItem1cv2(char item1cv2_2, int index7);
	void printItem1cv1();
	void printItem1cv2();
};

#endif

