#ifndef MATH1_H
#define MATH1_H

template<class Number1>
class Math1
{
private:
	Number1 input1;
	Number1 input2;
	Number1 output1;

public:
	Math1();
	~Math1();
	void Input1(Number1 &input1, Number1 &input2, Number1 &output1);
};

#endif