#ifndef QUEUE3_H
#define QUEUE3_H

const int size7 = 17;
template<class MyData10>
class Queue3
{
private:
	MyData10 array12[size7];
	int front3;
	int rear3;

public:
	Queue3();
	void Enqueue3(MyData10 value6);
	void Dequeue3();
	void printQueue3();
};

#endif