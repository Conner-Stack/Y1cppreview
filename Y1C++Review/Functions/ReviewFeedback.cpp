#include <iostream>
using namespace std;
//Functions
//All functions must have a prototype above the main function and be defined below.

//1. Find the error in each of the following functions and explain how to fix them.
//DO NOT PUT THE CODE INTO VISUAL STUDIO
//a. 
/*int sum(int x, int y)
{
int result;
result = x + y;
}*/

//The function needs a return value of type integer

//b. 
/*int sum(int n)
{
if (0 == n)
return 0;
else
n = n + n;
}*/

//The function needs a return value of type integer in the body of the "else" conditional

//c.
/*#include <iostream>
int main()
{
double x = 13.6;
std::cout << "square of 13.6 = " << square(x) << std::endl;
}
int square (int x)
{
return x * x;
}*/

//the type of returned variable (double)does not match the return type of the function (int)

//2. Create a function for each of the following math operators. They must return a value.
//and take in at least two argument. Once all the functions have been created you will need to 
//invoke them and print out the return.
//a. Addition
//b. Subtraction
//c. Multiplication
//d. Division

int Addition(int a, int b)
{
	a += b;
	return a;
}
int Subtraction(int a, int b)
{
	a -= b;
	return a;
}
int Multiplication(int a, int b)
{
	a *= b;
	return a;
}
float Division(float a, float b)
{
	a /= b;
	return a;
}
//3. Create a function that takes in two arguments, one beign an array of float and the other
//being the size of the array. It must return the largest value in the array.
float Array(float Array[], float arrayLength)
{
	float largestValue = 0;
	for (int i = 0; i < arrayLength; i++)
	{
		cin >> Array[i];
		if(i == 0)
		{
			largestValue = Array[0];
		}
		else if (largestValue < Array[i])
		{
			largestValue = Array[i];
		}
	}
	return largestValue;
}

//4. Using recursion write a function that prints out the Fibonacci sequence.
void FibSeq(int a, int b)
{
	cout << a + b << endl;
	FibSeq(b, a);
	cout << b + a <<   endl;
	
}

int main()
{

}