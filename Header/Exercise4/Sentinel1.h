#ifndef SENTINEL1_H
#define SENTINEL1_H

const int SIZE1 = 10;
class Sentinel1
{
public:
	int locationWanted1;
	int array1[SIZE1];
	bool SentinelSearch1(int array1[], int SIZE1, int target1, int& locationWanted1);
};

#endif