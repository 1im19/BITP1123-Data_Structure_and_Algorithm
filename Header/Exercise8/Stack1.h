#ifndef STACK1_H
#define STACK1_H

const int MaxSize1 = 10;

template<class MyData1>
class Stack1
{
private:
	int Top1;
	MyData1 MyArray1[MaxSize1];

public:
	Stack1();
	~Stack1();
	void Push1(MyData1 item9);
	void Pop1();
	void TopStack1();
	bool Underflow1();
	bool Overflow1();
};

#endif
