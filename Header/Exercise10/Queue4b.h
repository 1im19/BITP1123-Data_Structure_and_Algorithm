#ifndef QUEUE4B_H
#define QUEUE4B_H

struct Node7
{
	int data7;
	Node7* link7;
};


class Queue4b
{
private:
	Node7* front4;
	int qty2;
	int qty3;
	Node7* rear4;

public:
	Queue4b();
	void Enqueue4b();
	void Dequeue4b();
	void printQueue4b();
	bool Empty4b();
};

#endif
