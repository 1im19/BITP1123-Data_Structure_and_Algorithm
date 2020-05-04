#ifndef STACK4_H
#define STACK4_H

template<class MyData4>
struct Node5
{
	MyData4 data5;
	Node5<MyData4>* link5;
};

template<class MyData4>
class Stack4
{
private:
	int count2;
	int count3;
	Node5<MyData4>* top3;
	Node5<MyData4>* top4;

public:
	Stack4();
	void Push4(MyData4& value2, MyData4& value3);
	void Pop4();
	bool Empty4();
	void TopStack4();
};

#endif
