#ifndef DATE1_H //checks if a unique value is defined
#define DATE1_H //define a value

//declaration of class. class is a expanded concept of data structure.
class Date1
{
	// private is an access specifier that can be only be accessed by methods of the same class or friends from other class. It contains data members which acts like a variable
private:
	int day1, month1, year1;

	//public is an access specifier that can be accessed by same class or other class. It contains method which acts like a function.
public:
	Date1();
	Date1(int day3, int month3, int year3);
	~Date1();
	void setDate1(int day2, int month2, int year2);
	void printDate1();
};

#endif //ending an if statement