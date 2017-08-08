#include <iostream>
using namespace std;

int main()
{
	int board[3][3];
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = 0;
			cout << board[i][j] << endl;
		}
		cout << endl;
	}
	char input;
	int position;
	bool player1 = true;
	bool player2 = false;
	int marker;
	while(input != 'x')
	{	
		if (player1 == true)
		{
			cout << "player 1's turn" << endl;
			marker = 1;
		}
		else if (player2 == true)
		{
			cout << "player 2's turn" << endl;
			marker = 2;
		}
			cin >> position;
		switch (position)
		{
		case 0: board[0][0] = marker;
			break;
		case 1: board[0][1] = marker;
			break;
		case 2: board[0][2] = marker;
			break;
		case 3: board[1][0] = marker;
			break;
		case 4: board[1][1] = marker;
			break;
		case 5: board[1][2] = marker;
			break;
		case 6: board[2][0] = marker;
			break;
		case 7: board[2][1] = marker;
			break;
		case 8: board[2][2] = marker;
			break;
		}
	}
}