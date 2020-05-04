#ifndef SQUARE1_H
#define SQUARE1_H

class Square1
{
	friend class Rectangle1; //friend is an another class that is allowed to access data from this class

private:
	float height1, width1;

public:
	Square1();
	~Square1();
	void getHeight1();
	void getWidth1();
	void setData1(float p1, float l1);
	void area1();
	void perimeter1();
};

#endif