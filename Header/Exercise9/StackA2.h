#ifndef STACKA2_H
#define STACKA2_H

const int MaxSizeA2 = 50;

template<class MyData6>
class StackA2
{
private:
	int TopA2;
	MyData6 MyArrayA2[MaxSizeA2];

public:
	StackA2();
	~StackA2();
	void PushA2(MyData6& item13);
	void PopA2();
	MyData6 TopStackA2();
	bool UnderflowA2();
	bool OverflowA2();
};

#endif
