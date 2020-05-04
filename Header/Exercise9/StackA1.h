#ifndef STACKA1_H
#define STACKA1_H

const int MaxSizeA1 = 50;

template<class MyData5>
class StackA1
{
private:
	int TopA1;
	MyData5 MyArrayA1[MaxSizeA1];

public:
	StackA1();
	~StackA1();
	void PushA1(MyData5 item12);
	void PopA1();
	bool UnderflowA1();
	bool OverflowA1();
};

#endif
