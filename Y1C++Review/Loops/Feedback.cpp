#include <iostream>

using namespace std;

int main()
{
	/////////////////////////////////////////////////COMMENTS//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	/*
	///
	///
	///

	Note:I don't know the order that the lessons are layed out but I think teaching loops after conditionals would ease the learning curve,
	especially with the very last question as they will definately be using conditionals to solve it and it would resolve confusion.

	///

	a: it shouldn't be hard to figure out this problem because you're simply having the current increment of iterator "i" output for each loop and adding 1 to the iterator
	when it recycles. The only legitimate mistake I can see happening with this is forgetting to start at 0 and/or stop at 99

	///

	b: This question should not be too difficult to answer either as the base format of the question is practically the same and though the iteration of the loop has been
	altered a bit, it's still basic math and shouldn't be a challenge if you can understand the syntax and know how to subtract.  (NOTE: some students may become confused if
	it isn't mentioned that increment operators can be used outside of for loops.)

	///

	c: there should not be any problems with this problem given the students have an understanding of
	c++'s order of evaluation (otherwise they might think that the iterator needs to increment first
	regardless of it's position).

	///

	d: due to the way a dowhile loop is formatted, it should be obvious that it's just a while loop with the
	conditional check happening at the end of the iteration instead of the beginning. You may want to mention that
	because of this you will run the first iteration regardless of the condition being met unless you hit a break
	statement.
	dA: there is no output as the break statement is hit on the very first increment.

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
		std::cout << i << std::endl;
	}

	//Answer: 0,1,2,3,...99

	//b. 
	for (int i = 100; i >= 0; i -= 2)
	{
		std::cout << i << std::endl;
	}

	//Answer: 100, 98, 96, 94... 0

	//c. 
	int iter = 0;
	while (iter != 25)
	{
		std::cout << iter << std::endl;
		iter += 5;
	}

	//Answer: 0, 5, 10, 15, 20

	//d. 
	int counter = 0;
	do
	{
		counter++;
		if (counter == 1)
			break;
		else
			std::cout << counter << std::endl;
	} while (counter < 10);
	//Answer = nothing


	//2. Using a for loop, iterate through numbers 0 to 100.
	//-For multiples of 3 print “FizzE
	//- For multiples of 5 print “BuzzE
	//- For multiples of 3 and 5 print “FizzBuzzE
	//- Otherwise print the number.
	//Note, you will need to use the modulus operator (%)


	//3. Repeat problem 2 using a while loop and a do while loop.
	//while loop


	//4. Create a loop that prints all even numbers between 0 and 100, without printing 0 or 100

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


	system("pause");
	return 0;
}