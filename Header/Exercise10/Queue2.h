#ifndef QUEUE2_H
#define QUEUE2_H

template<class MyData9>
struct Node6
{
	MyData9 data6;
	Node6 <MyData9>* link6;
};

template<class MyData9>
class Queue2
{
private:
	Node6 <MyData9>* front2;
	int qty1;
	Node6 <MyData9>* rear2;
	Node6 <MyData9>* curr1;

public:
	Queue2();
	void Enqueue2(MyData9 value5);
	void Dequeue2();
	void printQueue2();
	MyData9 QueueFront2();
	MyData9 QueueRear2();
	bool Empty4();
};

#endif 
