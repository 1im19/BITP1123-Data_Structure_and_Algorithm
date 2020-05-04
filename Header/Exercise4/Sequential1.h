#ifndef SEQUENTIAL1_H
#define SEQUENTIAL1_H

const int SIZE4 = 100;
class Sequential1
{
public:
	int locationWanted4;
	int array4[SIZE4];
	bool SequentialSearch1(int array4[], int SIZE4, int target4, int& locationWanted4);
};

#endif