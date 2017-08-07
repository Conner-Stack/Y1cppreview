#include <iostream>

using namespace std;
///////////////////////////////COMMENTS////////////////////////////////////////////////////
///
///
///
/*
This problem is a bit more difficult due to not only using everything up until that point, 
but also throwing in a 2D array and nested for loop. I had some minor trouble when it came to 
assigning a value from the 2D array to the variables "leastFoodEaten" and "mostFoodEaten". On initialization I
had set their variables to equal foodEatenGraph[0][0] before assigning any value to the array 
to the placeholder value which I think would be a bit confusing. To fix this I switched 
the 2 integers' values to equal 0 on initialization and added a conditional that checks 
for the very first loop iteration and then assigned the first integer in the array to them. It was not 
difficult to follow the directions as they were straight forward and told you what to input
almost step-by-step. When reading "The program should first have Dany input the user for each dragon" it would 
be helpful to  explain what "user" is referring toas I needed to check your comments to see what I should input.
The math is very basic and no one should have trouble with it. To sum it up, implementing this program is doable although 
some students may struggle with things like assignment and ordering the contents of the 2D array but is not impossible and
can be done given some thought.

*/





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
	float foodAvgAll = 0;
	float foodAvgPer[3] = {0,0,0};
	int mostFoodEaten = 0;
	int leastFoodEaten = 0;
	int dragonIDMost = 0;
	int dragonIDLeast = 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "input food amount eaten by Dragon " << i << " for the last 7 days";
		for (int j = 0; j < 7; j++)
		{
			cin >> foodEatenGraph[i][j];
			foodAvgAll += foodEatenGraph[i][j];
			foodAvgPer[i] += foodEatenGraph[i][j];
			if(foodEatenGraph[i][j] == foodEatenGraph[0][0])
			{
				mostFoodEaten = foodEatenGraph[0][0];
				leastFoodEaten = foodEatenGraph[0][0];
			}
			if (leastFoodEaten > foodEatenGraph[i][j])
			{
				dragonIDLeast = i + 1;
				leastFoodEaten = foodEatenGraph[i][j];
			}
			if (mostFoodEaten < foodEatenGraph[i][j])
			{
				dragonIDMost = i + 1;
				mostFoodEaten = foodEatenGraph[i][j];
			}
		}
	}
	cout << "The average amount eaten by all dragons is: " << foodAvgAll / 21 << endl;
	for(int i = 0; i < 3; i++)
	{
		cout << "the average amount of food eaten by dragon " << i + 1 << " is " << foodAvgPer[i] << endl;
	}
	cout << "the most amount of food eaten in a day is: " << mostFoodEaten << " and was eaten by Dragon " << dragonIDMost << endl;

	cout << "the least amount of food eaten in a day is:" << leastFoodEaten << " and was eaten by Dragon " << dragonIDLeast << endl;

	system("pause");
	return 0;
}
