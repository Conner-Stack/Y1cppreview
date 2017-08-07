#include <iostream>

using namespace std;
/*
Week 1 Assignment:
What you will need to know
- Variables
- Conditionals
- Loops
- arrays
Daenerys Targaryen wants to keep track of how many kilos of food her three dragons eat
each day during a typical week. Write a program that stores this information in a
2 dimensional 3 x 7 array, where each row represents a different dragon and each column
represents a different day of the week. The program should first have Dany input the user for
each dragon. Then it should create a report that includes the following information:
- Average amount of food eaten per day by all the dragons together
- Average amount of food eaten per day by any one dragon
- The greatest amount of food eaten during one day and which dragon that was
- The least amount of food eaten during one day and which dragon that was
*/

int main()
{

	int foodEatenGraph[3][7];
	int foodAvgAll = 0;
	int dragonAvgPer[3];
	int mostFoodEaten = 0;
	int leastfoodeaten = 0;
	int dragonIDMost = 0;
	int dragonIDLeast = 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "input food amount eaten by Dragon " << i << " for the last 7 days";
		for (int j = 0; j < 7; j++)
		{
			cin >> foodEatenGraph[i][j];
			foodAvgAll += foodEatenGraph[i][j];
			dragonAvgPer[i] += foodEatenGraph[i][j];
			if (leastfoodeaten > foodEatenGraph[i][j])
			{
				dragonIDLeast = i + 1;
				leastfoodeaten = foodEatenGraph[i][j];
			}
			if (mostFoodEaten < foodEatenGraph[i][j])
			{
				dragonIDMost = i + 1;
				mostFoodEaten = foodEatenGraph[i][j];
			}
		}
	}
	cout << "The average amount eaten by all dragons is: " << foodAvgAll / 21 << endl;

	for (int i = 0; i < 3; i++)
	{
		dragonAvgPer[i] = 7;
		cout << "The average amount eaten by dragon " << i << " is: " << dragonAvgPer[1] << endl;
	}
	cout << "the most amount of food eaten in a day is: " << mostFoodEaten << " and was eaten by Dragon " << dragonIDMost << endl;

	cout << "the least amount of food eaten in a day is:" << leastfoodeaten << " and was eaten by Dragon " << dragonIDLeast << endl;

	system("pause");
	return 0;
}
