#include <iostream>

using namespace std;

int main()
{
	////////////////////////////////////////////////////////COMMENTS////////////////////////////////////////////////////////////////////////////////////////
	/*
	1.	there's nothing to say about the first question. It's as simple as memorizing the chart.

	2-5. In my opinion conditional problems are so step-by-step hand-holdingly easy that if you can't figure it out your next move
	should be to get that tuition refund. There's no excuse. Students who listen to the lecture will have no problems.
	*/
	////////////////////////////////////////////////////ENDCOMMENTS///////////////////////////////////////////////////////////////////////////////////////


	//1. What will be the output of the following conditionals if "A = true and B = false"
	// A || B

	//Answer: False

	// A || B   (COMMENT: this is a repeat of the conditional above it)


	// !A

	//Answer: False

	// !(A && A)

	//Answer = False

	// B && A

	//Answer: False

	//(!B || A)

	//Answer: True


	//2. Write an if statement that assigns 100 to the value of x when y is equal to zero
	int x= 0;
	int y;
	cout << "Insert a number for 'y'" << endl;
	cin>>y;
	if (y == 0)
		x = 100;
	cout << x << endl;
		//3. Write a program that accepts an integer that represents the month of the year
		//It should then display the number of days in that month. If a number that doesn’t correspond 
		//to a month is entered then the program should display an error message. You must use a switch statement

		int month;
		cin >> month;
		switch (month)
		{
		case 1:
			cout << 31 << endl;
			break;
		case 2:
			cout<<28<<" or "<<29<<endl;
			break;
		case 3:
			cout << 31 << endl;
			break;
		case 4:
			cout << 30 << endl;
			break;
		case 5:
			cout << 31 << endl;
			break;
		case 6:
			cout << 30 << endl;
			break;
		case 7:
			cout << 31 << endl;
			break;
		case 8:
			cout << 30 << endl;
			break;
		case 9:
			cout << 31 << endl;
			break;
		case 10:
			cout << 30 << endl;
			break;
		case 11:
			cout << 31 << endl;
			break;
		case 12:
			cout << 30 << endl;
			break;
		default:
			cout << "error, input does not correspond to a month" << endl;
		}
		//4. Redo problem 3 using if statements
		month = 0;
		cout << "input the number representation of a month of the year" << endl;
		cin >> month;
		if (month <= 12) {
			if (month % 2 == 0 && month != 2)
				cout << 30 << endl;
			else if (month % 2 == 1)
				cout << 31 << endl;
			else if (month == 2)
				cout << 28 << " or " << 29 << endl;
		}
		else
			cout << "error, input does not correspond to a month" << endl;

		//5. Convert problem 2 into a ternary operator
		cout << "input a number for 'y'" << endl;
		cin >> y;
	x = (y == 0) ? 100 : 0;
		cout << x << endl;
		system("pause");
		return 0;
	}

