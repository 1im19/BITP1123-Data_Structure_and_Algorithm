#ifndef STACK3_H
#define STACK3_H

const int MaxSize3 = 10;

template<class MyData3>
class Stack3
{
private:
	int Top3;
	MyData3 MyArray3[MaxSize3];
	MyData3 MyArray4[MaxSize3];

public:
	Stack3();
	~Stack3();
	void Push3(MyData3 item10, MyData3 item11);
	void Pop3();
	void TopStack3();
	bool Underflow3();
	bool Overflow3();
};

#endif