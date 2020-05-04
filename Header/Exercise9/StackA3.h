#ifndef STACKA3_H
#define STACKA3_H

const int MaxSizeA3 = 50;

template<class MyData7>
class StackA3
{
private:
	int TopA3;
	MyData7 MyArrayA3[MaxSizeA3];

public:
	StackA3();
	~StackA3();
	void PushA3(MyData7& item14);
	void PopA3();
	MyData7 TopStackA3();
	bool UnderflowA3();
	bool OverflowA3();
};

#endif
