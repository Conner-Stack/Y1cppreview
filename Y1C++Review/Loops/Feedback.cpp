#include <iostream>

using namespace std;

int main()
{
	/*
	/////////////////////////////////////////////////COMMENTS//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	///
	///

	Note:I don't know the order that the lessons are layed out but I think teaching loops after conditionals would ease the learning curve,
	especially with the very last question as they will definately be using conditionals to solve it and it would resolve confusion.

	///

	///

	bF: This question should not be too difficult to answer either as the base format of the question is practically the same and though the iteration of the loop has been
	altered a bit, it's still basic math and shouldn't be a challenge if you can understand the syntax and know how to subtract.  (NOTE: some students may become confused if
	it isn't mentioned that increment operators can be used outside of for loops.)

	///
	///


	cF: there should not be any problems with this problem given the students have an understanding of
	c++'s order of evaluation (otherwise they might think that the iterator needs to increment first
	regardless of it's position).

	///

	dF: due to the way a dowhile loop is formatted, it should be obvious that it's just a while loop with the
	conditional check happening at the end of the iteration instead of the beginning. You may want to mention that
	because of this you will run the first iteration regardless of the condition being met unless you hit a break
	statement.

	///

	And then there's this one.

	F: this is the only question in this lesson that would be particularly daunting to the majority of the
	class. In my opinion, the modulus is without a doubt the hardest concept to understandand moreso implement
	correctly due to it's behaviour However once that is figured out I don't think they will have a problem.
	*/

	////////////////////////////////////////////////ENDCOMMENTS/////////////////////////////////////////////////////////////////////////////////////////////////////////////

	//1. What is the out put of the following code samples?
	//a. 
	for (int i = 0; i < 100; i++)
	{
		cout << i << endl;
	}

	//b. 
	for (int i = 100; i >= 0; i -= 2)
	{
		cout << i << endl;
	}
	//c. 
	int iter = 0;
	while (iter != 25)
	{
		cout << iter << endl;
		iter += 5;
	}
	//d. 
	int counter = 0;
	do
	{
		counter++;
		if (counter == 1)
			break;
		cout << counter << endl;
	}
	while (counter < 10);

	//2. Using a for loop, iterate through numbers 0 to 100.
	//-For multiples of 3 print “Fizz”
	//- For multiples of 5 print “Buzz”
	//- For multiples of 3 and 5 print “FizzBuzz”
	//- Otherwise print the number.
	//Note, you will need to use the modulus operator (%)
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			cout << "fizz" << endl;
		else if (i % 5 == 0)
			cout << "buzz" << endl;
		else if (i % 3 == 0 && i % 5 == 0)
			cout << "fizzbuzz" << endl;
		else
			cout << i << endl;
	}


	//3. Repeat problem 2 using a while loop and a do while loop.
	//while loop
	iter = 0;
	while (iter <= 100)
	{
		if (iter % 3 == 0)
			cout << "fizz" << endl;
		else if (iter % 5 == 0)
			cout << "buzz" << endl;
		else if (iter % 3 == 0 && iter % 5 == 0)
			cout << "fizzbuzz" << endl;
		else
			cout << iter << endl;
		iter++;
	}

	iter = 0;

	do
	{
	if (iter % 3 == 0)
		cout << "fizz" << endl;
	if (iter % 5 == 0)
		cout << "buzz" << endl;
	if (iter % 3 == 0 && iter % 5 == 0)
		cout << "fizzbuzz" << endl;
	else
		cout << iter << endl;
		iter++; 
	}
	while (iter <= 100);
	//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100
	
	
	system("pause");
	return 0;
}
