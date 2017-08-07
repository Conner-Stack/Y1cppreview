#include <iostream>

using namespace std;
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
