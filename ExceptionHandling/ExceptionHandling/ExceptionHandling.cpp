// ExceptionHandling.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//exception handling

#include <iostream>
using namespace std;

/*
-An exception is an unexpected problem that arises during the execution of a program.
-Exception handling mechanism provide a way to transfer control from one part of a program to another. This 
makes it easy to seperate the error handling code from the code written to handle the actual functionality of 
the program
-C++ exception handling is built upon three keywords: try, catch & throw.
*/

/*
-try: A block of code which may cause an exception is typically placed inside the try block. It's followed by 
one or more catch blocks. If an exception occurs, it is thrown from the try block.
-catch: this block catches the exception thrown from the try block. Code handle the exception is written inside 
this catch block
-throw: A program throws an exception when a problem shows up. This is done using a throw keyword.

Every try catch should have a correspodning catch block. A single try block can have multuple blocks.
*/

int main()
{
	int numerator, denominator, result;
	cout << "Enter two numbers, the numerator and denominator" << endl;
	cin >> numerator >> denominator;

	try
	{
		if (denominator == 0) //Thrown to catch block
		{
			throw denominator;
		}	
		result = numerator / denominator; //divison happens here
	}
	catch (int ex)
	{
		cout << "Division by zero not allowed" << ex;
	}

	cout << "Division is" << result;

	return 0;
   
}

