#ifndef MATH2_H
#define MATH2_H

template<class Exercise3Question5>
class Math2
{
private:
	Exercise3Question5 number2;
	Exercise3Question5 number3;
	char operation1;

public:
	Math2();
	~Math2();
	void display1(Exercise3Question5 number2, Exercise3Question5 number3, char operation1);
};

#endif