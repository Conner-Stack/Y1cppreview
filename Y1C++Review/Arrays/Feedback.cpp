#include <iostream>

using namespace std;

int main()
{
	//////////////////////////////COMMENTS///////////////////////////////////////////////////////////////////////////////////////
	/*
	1. oh look, you've been given a set of 4 free correct answers. As the instructions say, all you're doing is declaring a variable as
	an array with a type specific to the data it's intended for, and you can specify just any size (up to 255) for example a.
	Also, for the size-specified examples I'd hate to be the parent of an adult who got d wrong and I'd give up on him/her if he/she even sighed at b and c.
	I don't think anyone who listened to the lecture could get this wrong.

	2. Easy. If they write down the sizes of each primitive data types there's no way to get this wrong.

	3. This one had me confused for a moment, however it may be a result of not using c++ for a while.
	For a moment i thought you meant to declare an array where spaces 1 - 10 can be accessed.
	Then I realized you meant to store the values in the array on decleration. Maybe consider re-wording.

	4. A spelling error threw me off. Correct "created" and  the problem is easily solvable.

	5. More spelling errors. Were you drinking when you wrote this file?
	I have confidence anybody who finished the exercise on loops shouldn't have too much of a problem with this.

	6. I remember having troubles with this one because I was taking the directions word for word and never realized I needed a loop.
	Some students might have a problem but it'll click once it's
	solved.

	7. This one is literally the finger before the Daenery's question on the Week1Assignment file gives you the arm. Up to the elbow. Like a puppeteer.
	As long as nested loops are well explained and the user has a good understanding of how c++ reads the program there shouldn't be too much confusion
	*/
	////////////////////////////ENDCOMMENTS/////////////////////////////////////////////////////////////////////////////////////
	//1. Declare an array for each of the following(size of array does not matter unless
	//sepcified).
	//a. heights of students
	float Student[255];
	//b. age of parents
	int parentAge[1];
	//c. true of false questions
	bool TF[255];
	//d. letters of the alphabet
	char abcLettersp[25];
	//2. What is the size in memory of the following arrays
	
	//a. 
	float heights[5];
	//Answer: 20Bytes
	
	//b. 
	int ages[10];
	//Answer: 20Bytes
	
	//c. 
	char letters[26];
	//Answer: 26Bytes
	
	//3. Declare an array with the values 1 - 10;
	int thisArray[10] = { 1,2,3,4,5,6,7,8,9,10};

	//4. Using the array create in problem 3 print the 5th index.
	cout << "the fifth index of this array is; "<<endl<<thisArray[4]<< endl;

	//5. Using a loop populate and array of size 10 with the values of 10 - 1.
	int anotherArray[10];
	cout << "this array is populated with the numbers: " << endl;
	for (int i = 10; i > 0; i--)
	{
		anotherArray[i - 1] = i;
		cout <<anotherArray[i - 1] << endl;
	}
	//6. Create a an array of size five then ask the user to input five 
	//number into the array. Display the largest and smallest numbers 
	//to the console.

	int yetanotherArray[5];
	for(int i = 0; i < 5; i++)
	{
		cin >> yetanotherArray[i];
	}
	int largest = 0;
	
	for(int i = 0;i < 5; i++)
	{
		if (largest < yetanotherArray[i])
			largest = yetanotherArray[i];
	}
	int smallest = largest;
	for(int i = 0; i < 5; i++)
	{
		if(smallest > yetanotherArray[i])
			smallest = yetanotherArray[i];
	}
	cout << "The largest number in the array is: " << endl << largest << endl << " The smallest number in the array is: " << endl << smallest << endl;
	//7. Create a program that creates a small 3x3 array of integers.Use a nested for 
	//loop to initialise the numbers 1 - 9. Output the numbers in a grid format
	int offset = 0;
	int finalArray[3][3];
	for(int i=0; i < 3; i++)
	{

		for(int j=0; j < 3; j++)
		{
			offset += 1;
			finalArray[i][j] = offset;

			cout << finalArray[i][j] << endl;
		}

	}
	system("pause");
	return 0;
}