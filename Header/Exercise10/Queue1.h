#ifndef QUEUE1_H
#define QUEUE1_H

const int size6 = 5;
template<class MyData8>
class Queue1
{
private:
	MyData8 array11[size6];
	int bil1;
	int front1;
	int rear1;

public:
	Queue1();
	void Enqueue1(MyData8 value4);
	void Dequeue1();
	void printQueue1();
	MyData8 QueueFront1();
	MyData8 QueueRear1();
	bool Empty3();
};
 
#endif