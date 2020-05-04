#ifndef STACK2_H
#define STACK2_H

template<class MyData2>
struct Node4
{
	MyData2 data4;
	Node4<MyData2>* link4;
};

template<class MyData2>
class Stack2
{
private:
	int count1;
	Node4<MyData2>* top2;

public:
	Stack2();
	void Push2(MyData2& value1);
	void Pop2();
	bool Empty2();
	void TopStack2();
};

#endif