#ifndef RECTANGLE1_H
#define RECTANGLE1_H

class Square1; //declare another class if you want to access data from another class, provided that they are friends
class Rectangle1
{
protected:
	float height2, width2;

public:
	Rectangle1();
	~Rectangle1();
	void getHeight2();
	void setData2(float p2, float l2);
	void area2();
	void perimeter2();
};

#endif