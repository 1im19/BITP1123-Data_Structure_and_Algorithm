// BITP1123 - Data_Structure_and_Algoritm.cpp : This file contains the 'main' function. Program execution begins and ends there.

//C++ Libraries
#include <iostream> 
#include <cmath>
#include <cctype>
#include <string>

//Exercise 2 header file
#include "Date1.h"
#include "Square1.h"
#include "Rectangle1.h"
#include "Whichone1.h"
#include "Info1.h"
#include "Student1.h"

//Exercise 3 header file
#include "Topup1.h"
#include "Math1.h"
#include "Math2.h"

//Exercise 4 header file
#include "Sentinel1.h"
#include "Probability1.h"
#include "OrderedList1.h"
#include "Sequential1.h"
#include "OrderedList2.h"

//Exercise5 header file
#include "List1a.h"
#include "List1b.h"
#include "List1c.h"
#include "List2.h"

//Exercise6 header file
#include "List3.h"
#include "List4.h"
#include "List5.h"

//Exercise7 header file
#include "BubbleSort1.h"
#include "InsertionSort1.h"
#include "BubbleSort2.h"

//Exercise8 header file
#include "Stack1.h"
#include "Stack2.h"
#include "Stack3.h"
#include "Stack4.h"

//Exericse9 header file
#include "StackA1.h"
#include "StackA2.h"
#include "StackA3.h"

//Exercise10 header file
#include "Queue1.h"
#include "Queue2.h"
#include "Queue3.h"
#include "Queue4a.h"
#include "Queue4b.h"

//cpp file is not mandatory to be included, but sometimes compiler didn't get the definition file resulting an unexpected error. (LNK2019)
//If another LNK related error displayed about file already included, remove the include cpp file that the error mentioned.

//Exercise3 cpp file
#include "Topup1.cpp"
#include "Math1.cpp"
#include "Math2.cpp"

//Exercise6 cpp file
#include "List3.cpp"
#include "List4.cpp"
#include "List5.cpp"

//Exercise7 cpp file
#include "BubbleSort1.cpp"
#include "InsertionSort1.cpp"
#include "BubbleSort2.cpp"

//Exercise8 cpp file
#include "Stack1.cpp"
#include "Stack2.cpp"
#include "Stack3.cpp"
#include "Stack4.cpp"

//Exercise9 cpp file
#include "StackA1.cpp"
#include "StackA2.cpp"
#include "StackA3.cpp"

//Exercise10 cpp file
#include "Queue1.cpp"
#include "Queue2.cpp"
#include "Queue3.cpp"

using namespace std;

void Exercise1Question1()
{
	int list1[10] = { 0 };
	for (int i1 = 0; i1 < 5; i1++)
	{
		list1[2 * i1 + 1] = i1 + 2;
	}

	for (int i1 = 0; i1 < 10; i1++)
	{
		cout << list1[i1] << endl;
	}
}

void Exercise1Question2()
{
	char str1[6];
	int a1[3] = { 10, 20, 30 };
	double f1[3] = { 1.1, 10.01, 100.01 };
	double d1[2][10];

	cout << "Enter Hello word" << endl;
	cin >> str1;
	
	for (int i2 = 0; i2 < 5; i2++)
	{
		cout << str1[i2];
	}
	cout << endl << endl << a1[0] << " " << a1[1] << " " << a1[2] << endl;
	d1[1][9] = 2.345;
}

void Exercise1Question3()
{
	const int PTS1 = 5;
	int nums1[PTS1] = { 16, 70, 19, 55, -10 };
	int i2, total1 = 0, *nPT1; // A pointer is a variable that stores the address of another  variable of the same datatype. *variable is a value of a pointer while &variable is the address of a pointer
	nPT1 = nums1;

	for (i2 = 0; i2 < PTS1; i2++)
	{
		nums1[i2] = nums1[i2] + 1;
	}

	for (int i2 = 0; i2 < PTS1; i2++)
	{
		total1 = total1 + *nPT1++;
		cout << total1 << endl;
	}

	cout << "The total for all element is " << total1 << endl;
}

void Exercise1Question4()
{
	char c1[15];
	strcpy_s(c1, "when are raya");
	char* ptrc1 = &c1[5];

	cout << "c1: " << c1 << endl;
	cout << "c1[1]: " << c1[1] << endl;
	cout << "ptrc1: " << ptrc1 << endl;
	cout << "*(ptrc1-3): " << *(ptrc1 - 3) << endl;
	cout << "*ptrc1-3: " << *ptrc1 - 3 << endl;
}

int strange1(int x1, int y1)
{
	return (x1 - y1);
}

void Exercise1Question5()
{
	int a1 = 3, b1 = 5;
	int r1 = strange1(a1, b1);
	int s1 = strange1(b1, a1);
	cout << r1 << " " << s1;
}

// struct is a collection of different data types
struct student1
{
	char name1[200];
	char matric1[200];
	int yearofstudy1;
};

void printData1(struct student1 a2[])
{
	for (int x2 = 0; x2 < 2; x2++)
	{
		cout << "Student name: " << a2[x2].name1 << endl;
		cout << "Matric number: " << a2[x2].matric1 << endl;
		cout << "Year of study: " << a2[x2].yearofstudy1 << endl;
	}
}

void Exercise1Question6()
{
	student1 a2[2];

	a2[0] =	{ "Muhammad Aiman Bin Mohd Nor Azman", "D031710260", 2};
	a2[1] = { "Ahmad Azri Bin Abdul Razak", "D031710310", 3 };

	printData1(a2);
}

void Exercise1Question7()
{
	const int size1 = 10;
	int number1[size1];
	int sum1 = 0;

	for (int i3 = 0; i3 < size1; i3++)
	{
		number1[i3] = pow(i3, i3);
		sum1 += number1[i3];
	}

	cout << "Sum of all 10 numbers: " << sum1 << endl;
}

int parkingCharge1()
{
	char vehicle1;
	int hours1;
	int charge1;

	cout << "c - Car" << endl;
	cout << "b - bus" << endl;
	cout << "t - truck" << endl;
	cout << "\n Please choose your vehicle: \t";
	cin >> vehicle1;
	cout << "Please insert how many hours you have parked: \t";
	cin >> hours1;
	if (tolower(vehicle1) == 'c')
	{
		charge1 = hours1 * 2;
	}
	else if (tolower(vehicle1) == 'b')
	{
		charge1 = hours1 * 3;
	}
	else if (tolower(vehicle1) == 't')
	{
		charge1 = hours1 * 4;
	}

	return charge1;
}

void Exercise1Question8()
{
	int charge1;

	charge1 = parkingCharge1();
	cout << "Your parking charge is: \tRM" << charge1 << endl;
}

void Exercise1Question9v1(const int size2, double price1[5], int unit1[5], double cost1[5], double total2)
{
	cout << "\n\tPrice" << "\tUnit" << "\tCost\n";
	for (int a3 = 0; a3 < size2; a3++)
	{
		cout << "\t" << price1[a3] << "\t" << unit1[a3] << "\t" << cost1[a3] << "\n";
	}

	cout << "\nTotal\t\t\t" << total2 << endl;
}

void Exercise1Question9()
{
	const int size2 = 5;
	double price1[size2], cost1[size2];
	double total2 = 0, average1 = 0;
	int unit1[size2];

	cout << "Enter price and unit for " << size2 << " item:\n";

	for(int i4 = 0; i4 < size2; i4++)
	{
		cout << "Item price " << i4 + 1 << ": ";
		cin >> price1[i4];

		cout << "Item unit " << i4 + 1 << ": ";
		cin >> unit1[i4];

		cost1[i4] = price1[i4] * unit1[i4];
		total2 += cost1[i4];
		average1 = total2 / size2;
	}

	Exercise1Question9v1(size2, price1, unit1, cost1, total2);
	cout << "\nAverage: " << average1 << endl;
}

void Exercise1()
{
	int questionchoice1;
	do
	{
		cout << "1 - Revision Array, Pointer, Function and Struct\n";
		cout << "Please choose a question that ranges from 1 to 9, or other input to cancel: \t";
		cin >> questionchoice1;
		if (questionchoice1 == 1)
		{
			cout << "\n";
			Exercise1Question1();
			cout << "\n";
		}
		else if (questionchoice1 == 2)
		{
			cout << "\n";
			Exercise1Question2();
			cout << "\n";
		}
		else if (questionchoice1 == 3)
		{
			cout << "\n";
			Exercise1Question3();
			cout << "\n";
		}
		else if (questionchoice1 == 4)
		{
			cout << "\n";
			Exercise1Question4();
			cout << "\n";
		}
		else if (questionchoice1 == 5)
		{
			cout << "\n";
			Exercise1Question5();
			cout << "\n";
		}
		else if (questionchoice1 == 6)
		{
			cout << "\n";
			Exercise1Question6();
			cout << "\n";
		}
		else if (questionchoice1 == 7)
		{
			cout << "\n";
			Exercise1Question7();
			cout << "\n";
		}
		else if (questionchoice1 == 8)
		{
			cout << "\n";
			Exercise1Question8();
			cout << "\n";
		}
		else if (questionchoice1 == 9)
		{
			cout << "\n";
			Exercise1Question9();
			cout << "\n";
		}
	} while (questionchoice1 >= 1 && questionchoice1 <= 9);
}

void Exercise2Question1()
{
	Date1 a4, b2; // declare a class followed by an object
	b2.setDate1(25, 12, 2005); //call a method for specific object

	cout << "a ";
	a4.printDate1();
	cout << "b ";
	b2.printDate1();
	cout << endl;
}

void Exercise2Question2()
{
	Square1 box1;

	cout << "Values from constructor\n" << "Height: ";
	box1.getHeight1();
	cout << endl;
	cout << "Width: ";
	box1.getWidth1();
	cout << endl;
	cout << "Area: ";
	box1.area1();
	cout << endl;
	box1.setData1(4,4);
	cout << "Values after setData\n" << "Height: ";
	box1.getHeight1();
	cout << endl;
	cout << "Width: ";
	box1.getWidth1();
	cout << endl;
	cout << "Area: ";
	box1.area1();
	cout << endl;
	cout << "Perimeter: ";
	box1.perimeter1();
	cout << endl;
}

void Exercise2Question3()
{
	Date1 a5, b3, c2(28, 12, 2005);
	b3.setDate1(25, 12, 2005);
	cout << "a ";
	a5.printDate1();
	cout << "b ";
	b3.printDate1();
	cout << "c ";
	c2.printDate1();
	cout << endl;
}

void Exercise2Question4()
{
	Rectangle1 rect1;

	rect1.setData2(4, 5);
	cout << "Height: ";
	rect1.getHeight2();
	cout << endl;
	cout << "Area: ";
	rect1.area2();
	cout << endl;
	cout << "Perimeter: ";
	rect1.perimeter2();
	cout << endl;
}

void Exercise2Question5()
{
	WhichOne1 choose1;
	
	cout << choose1.f1(10, 2) << endl;
	cout << choose1.f1(10) << endl;
}

void Exercise2Question6()
{
	Info1 m1;
	m1.getInfo1(1515, "Siti");
	m1.Print1();

	Student1 p1;
	p1.getInfo2(1010, 89);
	p1.Print2();
}

void Exercise2()
{
	int questionchoice2;
	do
	{
		cout << "2 - Class and Object\n";
		
		cout << "Please choose a question that ranges from 1 to 6, or other input to cancel: \t";
		cin >> questionchoice2;
		if (questionchoice2 == 1)
		{
			cout << "\n";
			Exercise2Question1();
			cout << "\n";
		}
		else if (questionchoice2 == 2)
		{
			cout << "\n";
			Exercise2Question2();
			cout << "\n";
		}
		else if (questionchoice2 == 3)
		{
			cout << "\n";
			Exercise2Question3();
			cout << "\n";
		}
		else if (questionchoice2 == 4)
		{
			cout << "\n";
			Exercise2Question4();
			cout << "\n";
		}
		else if (questionchoice2 == 5)
		{
			cout << "\n";
			Exercise2Question5();
			cout << "\n";
		}
		else if (questionchoice2 == 6)
		{
			cout << "\n";
			Exercise2Question6();
			cout << "\n";
		}
	} while (questionchoice2 >= 1 && questionchoice2 <= 6);
}

template<class Number1> //if a varable contains multiple datatype, use template
void Exercise3Question1v1(Number1 &input1, Number1 &input2, Number1 &output1)
{
	cout << "Number 1: \t";
	cin >> input1;
	cout << "Number 2: \t";
	cin >> input2;
	output1 = input1 * input2;
}

void Exercise3Question1()
{
	int input1v1, input2v1;
	float input1v2, input2v2;
	int output1v1;
	float output1v2;

	cout << "Input two integers: \n";
	Exercise3Question1v1(input1v1, input2v1, output1v1);
	cout << "Input two floats: \n";
	Exercise3Question1v1(input1v2, input2v2, output1v2);
	cout << "Multiplication of two integers: \t" << output1v1 << endl;
	cout << "Multiplication of two floats: \t" << output1v2 << endl;
}

template<class exercise3question2>
void display1(exercise3question2 number2, exercise3question2 number3, char operation1)
{
	if (operation1 == '+')
	{
		cout << number2 + number3 << endl;
	}
	else if (operation1 == '-')
	{
		cout << number2 - number3 << endl;
	}
	else if (operation1 == '*')
	{
		cout << number2 * number3 << endl;
	}
	else if (operation1 == '/')
	{
		cout << number2 / number3 << endl;
	}
}

void Exercise3Question2()
{
	cout << "10 + 6 = ";
	display1(10, 6, '+');
	cout << "10 * 6 = ";
	display1(10, 6, '*');
	cout << "10 - 6 = ";
	display1(10, 6, '-');
	cout << "10 / 6 = ";
	display1(10, 6, '/');
}

void Exercise3Question3()
{
	Topup1 <int, double> no1(1000, 4.5), no2(20000, 11.1); //specifying a datatype to a template class
	cout << "Output created by the first object\n";
	no1.Display1();
	no1.Execute1();
	cout << "Output created by the second object\n";
	no2.Display1();
	no2.Execute1();
}

void Exercise3Question4()
{
	Math1 <int> integer1;
	Math1 <float> float1;

	int input1v1, input2v1;
	float input1v2, input2v2;
	int output1v1;
	float output1v2;

	cout << "Input two integers: \n";
	integer1.Input1(input1v1, input2v1, output1v1);
	cout << "Input two floats: \n";
	float1.Input1(input1v2, input2v2, output1v2);
	cout << "Multiplication of two integers: \t" << output1v1 << endl;
	cout << "Multiplication of two floats: \t" << output1v2 << endl;

}

void Exercise3Question5()
{
	Math2<float> exercise3question5;

	cout << "10 + 6 = ";
	exercise3question5.display1(10, 6, '+');
	cout << "10 * 6 = ";
	exercise3question5.display1(10, 6, '*');
	cout << "10 - 6 = ";
	exercise3question5.display1(10, 6, '-');
	cout << "10 / 6 = ";
	exercise3question5.display1(10, 6, '/');
}

void Exercise3()
{
	int questionchoice3;
	do
	{
		cout << "3 - Template\n";
		cout << "Please choose a question that ranges from 1 to 5, or other input to cancel: \t";
		cin >> questionchoice3;
		if (questionchoice3 == 1)
		{
			cout << "\n";
			Exercise3Question1();
			cout << "\n";
		}
		else if (questionchoice3 == 2)
		{
			cout << "\n";
			Exercise3Question2();
			cout << "\n";
		}
		else if (questionchoice3 == 3)
		{
			cout << "\n";
			Exercise3Question3();
			cout << "\n";
		}
		else if (questionchoice3 == 4)
		{
			cout << "\n";
			Exercise3Question4();
			cout << "\n";
		}
		else if (questionchoice3 == 5)
		{
			cout << "\n";
			Exercise3Question5();
			cout << "\n";
		}	
	} while (questionchoice3 >= 1 && questionchoice3 <= 5);
}

void Exercise4Question1a()
{
	int target1, i5;
	bool found1;
	Sentinel1 SS1;

	cout << "The Data \n";
	for (i5 = 0; i5 < SIZE1; i5++)
	{
		SS1.array1[i5] = rand() % 500 + 1;
	}

	for (i5 = 0; i5 < SIZE1; i5++)
	{
		cout << SS1.array1[i5] << " ";
	}

	cout << endl;

	do
	{
		cout << "Insert a target, or 0 to stop: \t";
		cin >> target1;

		if (target1 != 0)
		{
			found1 = SS1.SentinelSearch1(SS1.array1, SIZE1, target1, SS1.locationWanted1);

			if (found1)
			{
				cout << "\tFound " << target1 << " at index " << SS1.locationWanted1 << endl;
			}
			else
			{
				cout << "\tTarget not found" << endl;
			}
		}
	} while (target1 != 0);
}

void Exercise4Question1b()
{
	int target2, i6;
	bool found2;
	Probability1 PS1;

	cout << "The Data \n";
	for (i6 = 0; i6 < SIZE1; i6++)
	{
		PS1.array2[i6] = rand() % 500 + 1;
	}

	for (i6 = 0; i6 < SIZE1; i6++)
	{
		cout << PS1.array2[i6] << " ";
	}

	cout << endl;

	do
	{
		cout << "Insert a target, or 0 to stop: \t";
		cin >> target2;

		if (target2 != 0)
		{
			found2 = PS1.ProbabilitySearch1(PS1.array2, SIZE2, target2, PS1.locationWanted2);

			if (found2)
			{
				cout << "\tFound " << target2 << " at index " << PS1.locationWanted2 << endl;
			}
			else
			{
				cout << "\tTarget not found" << endl;
			}
		}
	} while (target2 != 0);
}

void Exercise4Question1c()
{
	int target3, i7;
	bool found3;
	OrderedList1 OLS1;

	cout << "The Data \n";
	for (i7 = 0; i7 < SIZE3; i7++)
	{
		OLS1.array3[i7] = rand() % 500 + 1;
	}

	for (i7 = 0; i7 < SIZE1; i7++)
	{
		cout << OLS1.array3[i7] << " ";
	}

	cout << endl;

	do
	{
		cout << "Insert a target, or 0 to stop: \t";
		cin >> target3;

		if (target3 != 0)
		{
			found3 = OLS1.OrderedListSearch1(OLS1.array3, SIZE3, target3, OLS1.locationWanted3);

			if (found3)
			{
				cout << "\tFound " << target3 << " at index " << OLS1.locationWanted3 << endl;
			}
			else
			{
				cout << "\tTarget not found" << endl;
			}
		}
	} while (target3 != 0);
}

void Exercise4Question1()
{
	char questionchoice4_1;

	do
	{
		cout << "a - Sentinel Search\n";
		cout << "b - Probability Search\n";
		cout << "c - Ordered List Search\n";
		cout << "Please choose the output that you would like to view, or other input to cancel: \t";
		cin >> questionchoice4_1;
		if (questionchoice4_1 == 'a')
		{
			cout << "\n";
			Exercise4Question1a();
			cout << "\n";
		}
		else if (questionchoice4_1 == 'b')
		{
			cout << "\n";
			Exercise4Question1b();
			cout << "\n";
		}
		else if (questionchoice4_1 == 'c')
		{
			cout << "\n";
			Exercise4Question1c();
			cout << "\n";
		}
	} while (questionchoice4_1 == 'a' || questionchoice4_1 == 'b' || questionchoice4_1 == 'c');
}

void Exercise4Question2()
{
	int target4[100], i8;
	bool found4;
	Sequential1 SS2;

	cout << "The Data\n";
	
	for (i8 = 0; i8 < SIZE4; i8++)
	{
		SS2.array4[i8] = rand() % 300 + 1;
		cout << " " << SS2.array4[i8] << " ";
	}

	cout << endl;

	for (int i9 = 0; i9 < 100; i9++)
	{
		target4[i9] = rand() % 300 + 1;

		found4 = SS2.SequentialSearch1(SS2.array4, SIZE4, target4[i9], SS2.locationWanted4);

		if (found4)
		{
			cout << "\tFound " << target4[i9] << " at index " << SS2.locationWanted4 << endl;
		}
		else
		{
			cout << "\tTarget not found" << endl;
		}
	}

	
}

void Exercise4Question3()
{
	int target5[100], i10;
	int number1 = 0;
	bool found5;
	OrderedList2 OLS2;

	cout << "The Data\n";

	for (i10 = 0; i10 < SIZE5; i10++)
	{
		OLS2.array5[i10] = rand() % 300 + 1;
		cout << " " << OLS2.array5[i10] << " ";
	}

	cout << endl;

	for (int i11 = 0; i11 < 100; i11++)
	{
		if (i11 % 2 == 0)
		{
			target5[i11] = number1 + 1;
			number1 += 1;
		}
		else
		{
			target5[i11] = number1 + 2;
			number1 += 2;
		}

		found5 = OLS2.OrderedListSearch2(OLS2.array5, SIZE5, target5[i11], OLS2.locationWanted5);

		if (found5)
		{
			cout << "\tFound " << target5[i11] << " at index " << OLS2.locationWanted5 << endl;
		}
		else
		{
			cout << "\tTarget not found" << endl;
		}
	}
}

void Exercise4()
{
	int questionchoice4;
	do
	{
		cout << "4 - Algorithm Efficiency and Searching\n";
		cout << "Please choose a question that ranges from 1 to 3, or other input to cancel: \t";
		cin >> questionchoice4;
		if (questionchoice4 == 1)
		{
			cout << "\n";
			Exercise4Question1();
			cout << "\n";
		}
		else if (questionchoice4 == 2)
		{
			cout << "\n";
			Exercise4Question2();
			cout << "\n";
		}
		else if (questionchoice4 == 3)
		{
			cout << "\n";
			Exercise4Question3();
			cout << "\n";
		}
	} while (questionchoice4 >= 1 && questionchoice4 <= 3);
}

void Exercise5Question1a()
{
	List1a ItemList1a;
	int item1a;

	cout << "Now there are " << ItemList1a.NumberofItem1a() << " item(s) in the list\n\n";
	cout << "Enter a digit: \t";
	cin >> item1a;

	for (int i13 = 0; i13 < 10; i13++)
	{
		ItemList1a.addItem1a(item1a);
		cout << "Item " << item1a << " is added" << endl;
		item1a += 2;
	}

	cout << "Now there are " << ItemList1a.NumberofItem1a() << " item(s) in the list\n\n";
	cout << "The list are: \n";
	ItemList1a.printItem1a();
}

void Exercise5Question1b()
{
	List1b ItemList1b;
	char item1b;

	cout << "Now there are " << ItemList1b.NumberofItem1b() << " item(s) in the list\n\n";
	cout << "Enter a character: \t";
	cin >> item1b;

	for (int i15 = 0; i15 < 10; i15++)
	{
		ItemList1b.addItem1b(item1b);
		cout << "Item " << item1b++ << " is added" << endl;
	}

	cout << "Now there are " << ItemList1b.NumberofItem1b() << " item(s) in the list\n\n";
	cout << "The list are: \n";
	ItemList1b.printItem1b();
}

void Exercise5Question1cv1()
{
	List1c ItemList1cv1;
	int item1cv1_1;
	int index6;
	int item1cv1_2;

	cout << "Now there are " << ItemList1cv1.NumberofItem1c() << " item(s) in the list\n\n";
	cout << "Enter a number: \t";
	cin >> item1cv1_1;

	for (int i18 = 0; i18 < 10; i18++)
	{
		ItemList1cv1.addItem1cv1(item1cv1_1);
		cout << "Item " << item1cv1_1 << " is added" << endl;
		item1cv1_1 += 2;
	}

	cout << "Now there are " << ItemList1cv1.NumberofItem1c() << " item(s) in the list\n\n";
	cout << "The list are: \n";
	ItemList1cv1.printItem1cv1();

	cout << endl;
	cout << "Enter a number: \t";
	cin >> item1cv1_2;

	index6 = 0;
	ItemList1cv1.addItem1cv1(item1cv1_2, index6);
	cout << "Item " << item1cv1_2 << " is added at index 0" << endl;

	cout << "There are still " << ItemList1cv1.NumberofItem1c() << " item(s) in the list\n\n";
	cout << "The updated list are: \n";
	ItemList1cv1.printItem1cv1();
}

void Exercise5Question1cv2()
{
	List1c ItemList1cv2;
	char item1cv2_1;
	int index7;
	char item1cv2_2;

	cout << "Now there are " << ItemList1cv2.NumberofItem1c() << " item(s) in the list\n\n";
	cout << "Enter a charcter: \t";
	cin >> item1cv2_1;

	for (int i19 = 0; i19 < 10; i19++)
	{
		ItemList1cv2.addItem1cv2(item1cv2_1);
		cout << "Item " << item1cv2_1++ << " is added" << endl;
	}

	cout << "Now there are " << ItemList1cv2.NumberofItem1c() << " item(s) in the list\n\n";
	cout << "The list are: \n";
	ItemList1cv2.printItem1cv2();

	cout << endl;
	cout << "Enter a character: \t";
	cin >> item1cv2_2;

	index7 = 0;
	ItemList1cv2.addItem1cv2(item1cv2_2, index7);
	cout << "Item " << item1cv2_2 << " is added at index 0" << endl;

	cout << "Now there are still " << ItemList1cv2.NumberofItem1c() << " item(s) in the list\n\n";
	cout << "The updated list are: \n";
	ItemList1cv2.printItem1cv2();
}

void Exercise5Question1c()
{
	char questionchoice5_1_1;

	do
	{
		cout << "Please choose between 'a' or 'b' for the output that you would like to view, or other input to cancel: \t";
		cin >> questionchoice5_1_1;
		if (questionchoice5_1_1 == 'a')
		{
			cout << "\n";
			Exercise5Question1cv1();
			cout << "\n";
		}
		else if (questionchoice5_1_1 == 'b')
		{
			cout << "\n";
			Exercise5Question1cv2();
			cout << "\n";
		}
	} while (questionchoice5_1_1 == 'a' || questionchoice5_1_1 == 'b');
}

void Exercise5Question1()
{
	char questionchoice5_1;

	do
	{
		cout << "Please choose between 'a', 'b' or 'c' for the output that you would like to view, or other input to cancel: \t";
		cin >> questionchoice5_1;
		if (questionchoice5_1 == 'a')
		{
			cout << "\n";
			Exercise5Question1a();
			cout << "\n";
		}
		else if (questionchoice5_1 == 'b')
		{
			cout << "\n";
			Exercise5Question1b();
			cout << "\n";
		}
		else if (questionchoice5_1 == 'c')
		{
			cout << "\n";
			Exercise5Question1c();
			cout << "\n";
		}
	} while (questionchoice5_1 == 'a' || questionchoice5_1 == 'b' || questionchoice5_1 == 'c');
}

void Exercise5Question2a()
{
	List2 ItemList2a;
	int item2a;
	int index8;

	cout << "Now there are: " << ItemList2a.NumberofItem2() << " item(s) in the list\n\n";

	cout << "Enter a digit: \t";
	cin >> item2a;

	for (int i22 = 0; i22 < 10; i22++)
	{
		ItemList2a.addItem2(item2a);
		cout << "Item " << item2a++ << " is added" << endl;
	}

	cout << endl;
	cout << "Now there are: " << ItemList2a.NumberofItem2() << " item(s) in the list\n\n";
	cout << "The list are: \n";
	ItemList2a.printItem2();

	cout << "Now one item will be deleted.\n";
	cout << "Select 1 if you want to delete an item from the last index, or other number if you want to delete item from first index: \t";
	cin >> index8;

	if (index8 == 1)
	{
		ItemList2a.deleteItem2();
	}
	else
	{
		ItemList2a.deleteItem2(index8);
	}

	cout << "Now there are: " << ItemList2a.NumberofItem2() << " item(s) in the list\n\n";
	cout << "The list are: \n";
	ItemList2a.printItem2();
}

void Exercise5Question2b()
{
	List2 ItemList2b;
	int item2b;
	int total3;

	cout << "Now there are: " << ItemList2b.NumberofItem2() << " item(s) in the list\n\n";

	cout << "Enter a digit: \t";
	cin >> item2b;

	for (int i23 = 0; i23 < 10; i23++)
	{
		ItemList2b.addItem2(item2b);
		cout << "Item " << item2b++ << " is added" << endl;
	}

	cout << endl;
	cout << "Now there are: " << ItemList2b.NumberofItem2() << " item(s) in the list\n\n";
	cout << "The list are: \n";
	ItemList2b.printItem2();

	total3 = ItemList2b.Total1();

	cout << "The total number of the item in the list is " << total3 << endl;
}

void Exercise5Question2c()
{
	List2 ItemList2c;
	int item2c;
	int target6;
	bool found7;
	int repeat1;

	cout << "Now there are: " << ItemList2c.NumberofItem2() << " item(s) in the list\n\n";

	cout << "Enter a digit: \t";
	cin >> item2c;

	for (int i26 = 0; i26 < 10; i26++)
	{
		ItemList2c.addItem2(item2c);
		cout << "Item " << item2c++ << " is added" << endl;
	}

	cout << endl;
	cout << "Now there are: " << ItemList2c.NumberofItem2() << " item(s) in the list\n\n";
	cout << "The list are: \n";
	ItemList2c.printItem2();

	do
	{
		cout << "Please insert a number that you would like to find: \t";
		cin >> target6;

		found7 = ItemList2c.findItem1(target6);

		if (!found7)
		{
			cout << "Item could not be found." << endl;
		}

		cout << "Do you want to try again? Press 1 to search another number in your current list, or other input to quit: \t";
		cin >> repeat1;
	} while (repeat1 == 1);
}

void Exercise5Question2()
{
	char questionchoice5_2;

	do
	{
		cout << "Please choose between 'a', 'b' or 'c' for the output that you would like to view, or other input to cancel: \t";
		cin >> questionchoice5_2;
		if (questionchoice5_2 == 'a')
		{
			cout << "\n";
			Exercise5Question2a();
			cout << "\n";
		}
		else if (questionchoice5_2 == 'b')
		{
			cout << "\n";
			Exercise5Question2b();
			cout << "\n";
		}
		else if (questionchoice5_2 == 'c')
		{
			cout << "\n";
			Exercise5Question2c();
			cout << "\n";
		}
	} while (questionchoice5_2 == 'a' || questionchoice5_2 == 'b' || questionchoice5_2 == 'c');
}

void Exercise5()
{
	int questionchoice5;
	do
	{
		cout << "5 - Linear List\n";
		cout << "Please choose a question that ranges from 1 to 2, or other input to cancel: \t";
		cin >> questionchoice5;
		if (questionchoice5 == 1)
		{
			cout << "\n";
			Exercise5Question1();
			cout << "\n";
		}
		else if (questionchoice5 == 2)
		{
			cout << "\n";
			Exercise5Question2();
			cout << "\n";
		}
	} while (questionchoice5 >= 1 && questionchoice5 <= 2);
}

void Exercise6Question1()
{
	List3<char> x3;
	x3.AddToFront3();
	for (int i24 = 0; i24 < 2; i24++)
	{
		x3.AddToMiddle3();
	}
	cout << endl;
	cout << "Number of Item now: " << x3.NumberOfItem3() << endl;
	cout << "The List are: " << endl;
	x3.printData3();
}

void Exercise6Question2()
{
	List4<char> x4;
	char item5;
	x4.AddToFront4();
	for (int i25 = 0; i25 < 2; i25++)
	{
		x4.AddToMiddle4();
	}
	cout << endl;
	do
	{
		cout << "Add after item: \t";
		cin >> item5;
		if (x4.Traverse4(item5))
		{
			x4.AddToMiddle4(item5);
		}
		else
		{
			cout << "Target not found" << endl;
		}
	} while (!x4.Traverse4(item5));
	cout << "Number of Item now: " << x4.NumberOfItem4() << endl;
	cout << "The List are: " << endl;
	x4.printData4();
}

void Exercise6Question3()
{
	List5<char> x5;
	char item8;
	for (int i26 = 0; i26 < 3; i26++)
	{
		x5.AddToFront5();
	}
	cout << endl;
	cout << "Number of Item now: " << x5.NumberOfItem5() << endl;
	cout << "The List are: " << endl;
	x5.printData5();
	cout << endl;
	do
	{
		cout << "Delete item: \t";
		cin >> item8;
		if (x5.Traverse5(item8))
		{
			x5.DeleteMiddle5(item8);
			break;
		}
		else
		{
			cout << "Target not found" << endl;
		}
	} while (!x5.Traverse5(item8));
	cout << "Number of Item now: " << x5.NumberOfItem5() << endl;
	cout << "The List are: " << endl;
	x5.printData5();
}

void Exercise6()
{
	int questionchoice6;
	do
	{
		cout << "6 - Linked List\n";
		cout << "Please choose a question that ranges from 1 to 3, or other input to cancel: \t";
		cin >> questionchoice6;
		if (questionchoice6 == 1)
		{
			cout << "\n";
			Exercise6Question1();
			cout << "\n";
		}
		else if (questionchoice6 == 2)
		{
			cout << "\n";
			Exercise6Question2();
			cout << "\n";
		}
		else if (questionchoice6 == 3)
		{
			cout << "\n";
			Exercise6Question3();
			cout << "\n";
		}
	} while (questionchoice6 >= 1 && questionchoice6 <= 3);
}

void Exercise7Question1()
{
	BubbleSort1<int> sort1;
	int data1[10] = { 23, 34, 45, 8, 7, 78, 34, 55, 40, 2 };

	cout << "The Data: \n";
	for (int i27 = 0; i27 < size3; i27++)
	{
		sort1.array6[i27] = data1[i27];
		cout << sort1.array6[i27] << " ";
	}
	cout << endl;
	sort1.bubblesort1(sort1.array6, size3 - 1);

	cout << "Data after sorted ascending: " << endl;
	for (int i28 = 0; i28 < size3; i28++)
	{
		cout << sort1.array6[i28] << " ";
	}
	cout << endl;
}

void Exercise7Question2()
{
	InsertionSort1<int> sort2;
	int data2[10] = { 25, 34, 45, 8, 7, 78, 34, 55, 40, 2};

	cout << "The Data: \n";
	for (int i29 = 0; i29 < size4; i29++)
	{
		sort2.array7[i29] = data2[i29];
		cout << sort2.array7[i29] << " ";
	}
	cout << endl;
	sort2.insertionsort1(sort2.array7, size4);

	cout << "Data after sorted descending: " << endl;
	for (int i30 = 0; i30 < size4; i30++)
	{
		cout << sort2.array7[i30] << " ";
	}
	cout << endl;
}

void Exercise7Question3()
{
	BubbleSort2<int> sort3;
	int data3[10] = { 23, 34, 45, 8, 7, 78, 34, 55, 40, 2 };

	cout << "The Data: \n";
	for (int i31 = 0; i31 < size5; i31++)
	{
		sort3.array8[i31] = data3[i31];
		cout << sort3.array8[i31] << " ";
	}
	cout << endl;
	sort3.bubblesort2(sort3.array8, size5 - 1);

	cout << "Data after sorted descending: " << endl;
	for (int i32 = 0; i32 < size3; i32++)
	{
		cout << sort3.array8[i32] << " ";
	}
	cout << endl;
}

void Exercise7()
{
	cout << "7 - Sorting\n";
	cout << "\n";
	Exercise7Question1();
	cout << "\n";
	cout << "\n";
	Exercise7Question2();
	cout << "\n";
	cout << "\n";
	Exercise7Question3();
	cout << "\n";
}

void Exercise8Question1()
{
	Stack1<int> StackItem1;
	int item9;
	bool full1 = false;

	do
	{
		cout << "Enter a number or 0 to stop: \t";
		cin >> item9;
		if (!StackItem1.Overflow1() && item9 != 0)
		{
			StackItem1.Push1(item9);
		}
		else if(StackItem1.Overflow1())
		{
			cout << "\nStack is full. Can't push item " << item9 << endl;
			full1 = true;
		}
	} while (!full1 && item9 != 0);

	cout << endl << endl;
	cout << "The data in reverse order: \t";
	while (!StackItem1.Underflow1())
	{
		StackItem1.TopStack1();
		StackItem1.Pop1();
	}
	cout << endl;
}

void Exercise8Question2()
{
	Stack2<int> StackItem2;
	int value1;

	do
	{
		cout << "Enter a number, then 0 to stop: \t";
		cin >> value1;
		if (value1 != 0)
		{
			StackItem2.Push2(value1);
		}
	} while (value1 != 0);

	cout << endl << endl;
	cout << "The data in reverse order: \t";
	while (!StackItem2.Empty2())
	{
		StackItem2.TopStack2();
		StackItem2.Pop2();
	}
	cout << endl;
}

void Exercise8Question3a()
{
	Stack3<string> StackItem3;
	string item10;
	string item11;

	cout << "\t\t\tMY-RA BOOK STORE" << endl;
	cout << "Please enter data, and 0 to stop: \n";
	do
	{
		cout << "Code:\t";
		cin >> item10;
		cout << "Value:\t";
		cin >> item11;
		if (!StackItem3.Overflow3() && (item10 != "0" && item11 != "0"))
		{
			StackItem3.Push3(item10, item11);
		}
		cout << endl;
	} while (!StackItem3.Overflow3() && (item10 != "0" && item11 != "0"));

	cout << endl;
	cout << "The list of item received:\n";
	while (!StackItem3.Underflow3())
	{
		StackItem3.TopStack3();
		StackItem3.Pop3();
	}
}

void Exercise8Question3b()
{
	Stack4<string> StackItem4;
	string value2, value3;

	cout << "\t\t\tMY-RA BOOK STORE" << endl;
	cout << "Please enter data, and 0 to stop: \n";
	do
	{
		cout << "Code:\t";
		cin >> value2;
		cout << "Value:\t";
		cin >> value3;
		if (value2 != "0" && value3 != "0")
		{
			StackItem4.Push4(value2, value3);
		}
		cout << endl;
	} while (value2 != "0" && value3 != "0");

	cout << endl << endl;
	cout << "The list of items received: \n";
	while (!StackItem4.Empty4())
	{
		StackItem4.TopStack4();
		StackItem4.Pop4();
	}
	cout << endl;
}

void Exercise8Question3()
{
	char questionchoice8_1;

	do
	{
		cout << "Choose 'a' to view Array output 'b' to view linked list output, or other input to cancel: \t";
		cin >> questionchoice8_1;
		if (questionchoice8_1 == 'a')
		{
			cout << "\n";
			Exercise8Question3a();
			cout << "\n";
		}
		else if (questionchoice8_1 == 'b')
		{
			cout << "\n";
			Exercise8Question3b();
			cout << "\n";
		}
	} while (questionchoice8_1 == 'a' || questionchoice8_1 == 'b');
}

void Exercise8()
{
	int questionchoice8;
	do
	{
		cout << "8 - Stack\n";
		cout << "Please choose a question that ranges from 1 to 3, or other input to cancel: \t";
		cin >> questionchoice8;
		if (questionchoice8 == 1)
		{
			cout << "\n";
			Exercise8Question1();
			cout << "\n";
		}
		else if (questionchoice8 == 2)
		{
			cout << "\n";
			Exercise8Question2();
			cout << "\n";
		}
		else if (questionchoice8 == 3)
		{
			cout << "\n";
			Exercise8Question3();
			cout << "\n";
		}
	} while (questionchoice8 >= 1 && questionchoice8 <= 3);
}

void Exercise9Question1()
{
	StackA1<char> StackItemA1;
	int index1 = 0;
	string exp1;
	char exp2[50];

	cout << "Enter an arithmetic expression: \t";
	cin >> exp1;
	strcpy_s(exp2, exp1.c_str());

	while (index1 < strlen(exp2))
	{
		switch (exp2[index1])
		{
		case'(': StackItemA1.PushA1(exp2[index1]); break;
		case')': if (!StackItemA1.UnderflowA1())
		{
			StackItemA1.PopA1();
		}
			   else
		{
			cout << "Error: Missing left bracket" << endl;
		}
		}
		index1++;
	}

	if (!StackItemA1.UnderflowA1())
	{
		cout << "Error: Missing right bracket" << endl;
	}
}

void Exercise9Question2()
{
	StackA2<int> StackItemA2;
	int index2 = 0;
	int integer1;
	int number1, number2, result1;
	string exp3;
	char exp4[50];

	result1 = 0;

	cout << "Enter a postfix expression: \t";
	cin >> exp3;
	strcpy_s(exp4, exp3.c_str());

	while (index2 < strlen(exp4))
	{
		if (exp4[index2] == '+' || exp4[index2] == '-' || exp4[index2] == '*' || exp4[index2] == '/')
		{
			number1 = StackItemA2.TopStackA2();
			StackItemA2.PopA2();
			number2 = StackItemA2.TopStackA2();
			StackItemA2.PopA2();
			if (exp4[index2] == '+')
			{
				result1 = number1 + number2;
			}
			else if (exp4[index2] == '-')
			{
				result1 = number1 - number2;
			}
			else if (exp4[index2] == '*')
			{
				result1 = number1 * number2;
			}
			else if (exp4[index2] == '/')
			{
				result1 = number1 / number2;
			}
			StackItemA2.PushA2(result1);
		}
		else
		{
			integer1 = exp4[index2] - '0';
			StackItemA2.PushA2(integer1);
		}
		index2++;
	}
	cout << "The result of a calculation is: \t" << result1 << endl;
}

void Exercise9Question3()
{
	StackA3<int> StackItemA3;
	int number3, digit1;

	cout << "Enter a binary to convert to decimal: \t";
	cin >> number3;
	while (number3 > 0)
	{
		digit1 = number3 % 10;
		if (!StackItemA3.OverflowA3())
		{
			StackItemA3.PushA3(digit1);
		}
		else
		{
			cout << "Stack Overflow" << endl;
			break;
		}
		number3 /= 10;
	}

	while (!StackItemA3.UnderflowA3())
	{
		number3 += StackItemA3.TopStackA3();
		StackItemA3.PopA3();
	}

	cout << "Decimal number: \t" << number3 << endl;
}

void Exercise9()
{
	int questionchoice9;
	do
	{
		cout << "9 - Stack Application and Queue\n";
		cout << "Please choose a question that ranges from 1 to 3, or other input to cancel: \t";
		cin >> questionchoice9;
		if (questionchoice9 == 1)
		{
			cout << "\n";
			Exercise9Question1();
			cout << "\n";
		}
		else if (questionchoice9 == 2)
		{
			cout << "\n";
			Exercise9Question2();
			cout << "\n";
		}
		else if (questionchoice9 == 3)
		{
			cout << "\n";
			Exercise9Question3();
			cout << "\n";
		}
	} while (questionchoice9 >= 1 && questionchoice9 <= 3);
}

void Exercise10Question1()
{
	Queue1<char> MyQ1;
	char input3;
	
	do
	{
		cout << "Please insert data, 1 to Dequeue data or 0 to stop: \t";
		cin >> input3;
		if (input3 != '0')
		{
			if (input3 == '1')
			{
				MyQ1.Dequeue1();
			}
			else
			{
				MyQ1.Enqueue1(input3);
			}

			if (!MyQ1.Empty3())
			{
				cout << "Queue front now is: \t" << MyQ1.QueueFront1() << endl;
				cout << "Queue rear now is: \t" << MyQ1.QueueRear1() << endl;
				MyQ1.printQueue1();
			}
			cout << endl;
		}
	} while (input3 != '0');
}

void Exercise10Question2()
{
	Queue2<char> MyQ2;
	char input4;

	do
	{
		cout << "Please insert a data, 1 to dequeue data or 0 to stop: \t";
		cin >> input4;
		if (input4 != '0')
		{
			if (input4 == '1')
			{
				MyQ2.Dequeue2();
			}
			else
			{
				MyQ2.Enqueue2(input4);
			}

			if (!MyQ2.Empty4())
			{
				cout << "Queue Front now is: \t" << MyQ2.QueueFront2() << endl;
				cout << "Queue Rear now is: \t" << MyQ2.QueueRear2() << endl;
				MyQ2.printQueue2();
			}
			cout << endl;
		}
	} while (input4 != '0');
}

void Exercise10Question3()
{
	Queue3<int> MyQ3;
	int data3[17] = { 60, 59, -76, 29, 28, -1, -9, 26, -23, 22, 20, -33, 16, -6, 15, 0 ,10 };

	for (int i36 = 0; i36 < size7; i36++)
	{
		MyQ3.Enqueue3(data3[i36]);
	}
	cout << "List of items before deleting all integers: \t";
	MyQ3.printQueue3();
	MyQ3.Dequeue3();
	cout << "List of items after deleting all integers: \t";
	MyQ3.printQueue3();
}

void Exercise10Question4a()
{
	Queue4a MyQ4a;
	int input5;

	cout << "\t\t\tZIMY BANK" << endl;
	do
	{
		cout << "1: Get a queue number\n";
		cout << "2: Next Customer\n";
		cout << "3: Exit\n";
		cout << " >>";
		cin >> input5;
		if (input5 != 3)
		{
			if (input5 == 1)
			{
				MyQ4a.Enqueue4a();
			}
			else if (input5 == 2)
			{
				MyQ4a.Dequeue4a();
			}
			else
			{
				cout << "Invalid Input" << endl;
			}
		}
		cout << endl;
	} while (input5 != 3);
}

void Exercise10Question4b()
{
	Queue4b MyQ4b;
	int input5;

	cout << "\t\t\tZIMY BANK" << endl;
	do
	{
		cout << "1: Get a queue number\n";
		cout << "2: Next Customer\n";
		cout << "3: Exit\n";
		cout << " >>";
		cin >> input5;
		if (input5 != 3)
		{
			if (input5 == 1)
			{
				MyQ4b.Enqueue4b();
			}
			else if (input5 == 2)
			{
				MyQ4b.Dequeue4b();
			}
			else
			{
				cout << "Invalid Input" << endl;
			}
		}
		cout << endl;
	} while (input5 != 3);
}

void Exercise10Question4()
{
	char questionchoice10_1;

	do
	{
		cout << "Please choose 'a' for array output, 'b' for linked list output: \t";
		cin >> questionchoice10_1;
		if (questionchoice10_1 == 'a')
		{
			cout << "\n";
			Exercise10Question4a();
			cout << "\n";
		}
		else if (questionchoice10_1 == 'b')
		{
			cout << "\n";
			Exercise10Question4b();
			cout << "\n";
		}
	} while (questionchoice10_1 == 'a' || questionchoice10_1 == 'b');
}

void Exercise10()
{
	int questionchoice10;
	do
	{
		cout << "10 - Queue(Part 2)\n";
		cout << "Please choose a question that ranges from 1 to 4 or other input to cancel: \t";
		cin >> questionchoice10;
		if (questionchoice10 == 1)
		{
			cout << "\n";
			Exercise10Question1();
			cout << "\n";
		}
		else if (questionchoice10 == 2)
		{
			cout << "\n";
			Exercise10Question2();
			cout << "\n";
		}
		else if (questionchoice10 == 3)
		{
			cout << "\n";
			Exercise10Question3();
			cout << "\n";
		}
		else if (questionchoice10 == 4)
		{
			cout << "\n";
			Exercise10Question4();
			cout << "\n";
		}
	} while (questionchoice10 >= 1 && questionchoice10 <= 4);
}

int main()
{
	int topicchoice1;

	do
	{
		cout << "BITP 1123 - DATA STRUCTURE AND ALGORITM\n";
		cout << "1 - Revision Array, Pointer, Function and Struct\n";
		cout << "2 - Class and Object\n";
		cout << "3 - Template\n";
		cout << "4 - Algorithm Efficiency and Searching\n";
		cout << "5 - Linear List\n";
		cout << "6 - Linked List\n";
		cout << "7 - Sorting\n";
		cout << "8 - Stack\n";
		cout << "9 - Stack Application and Queue\n";
		cout << "10 - Queue(Part 2)\n";
		cout << "\nPlease choose one of the topics: \t";
		cin >> topicchoice1;

		if (topicchoice1 == 1)
		{
			cout << "\n";
			Exercise1();
			cout << "\n";
		}
		else if (topicchoice1 == 2)
		{
			cout << "\n";
			Exercise2();
			cout << "\n";
		}
		else if (topicchoice1 == 3)
		{
			cout << "\n";
			Exercise3();
			cout << "\n";
		}
		else if (topicchoice1 == 4)
		{
			cout << "\n";
			Exercise4();
			cout << "\n";
		}
		else if (topicchoice1 == 5)
		{
			cout << "\n";
			Exercise5();
			cout << "\n";
		}
		else if (topicchoice1 == 6)
		{
			cout << "\n";
			Exercise6();
			cout << "\n";
		}
		else if (topicchoice1 == 7)
		{
			cout << "\n";
			Exercise7();
			cout << "\n";
		}
		else if (topicchoice1 == 8)
		{
			cout << "\n";
			Exercise8();
			cout << "\n";
		}
		else if (topicchoice1 == 9)
		{
			cout << "\n";
			Exercise9();
			cout << "\n";
		}
		else if (topicchoice1 == 10)
		{
			cout << "\n";
			Exercise10();
			cout << "\n";
		}
	} while (topicchoice1 >= 1 && topicchoice1 <= 10);

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
