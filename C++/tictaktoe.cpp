// Tic-tak-toe


#include<iostream>
#include<cstdlib>
using namespace std;
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
// Initialize the elements
char player ='X';
// creating a player
void Draw() // displays the matrix
{
	cout<<" Welcome to Tic- Tac - Toe "<<endl;
	// displays the opening line.
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<< matrix[i][j]<<" ";
			// print every elements
		}
		cout<<endl;
		// print the elements in 3*3 matrix
	}

}
void input()// function for input
{
	int a;
	cout<<" press a number to fill the field.";
	// diplays the line to the screen
	cin>>a;

	if (a==1)
		    matrix[0][0]=player;
	else if (a==2)
			matrix[0][1]=player;
	else if (a==3)
			matrix[0][2]=player;
	else if (a==4)
			matrix[1][0]=player;
	else if (a==5)
			matrix[1][1]=player;
	else if (a==6)
			matrix[1][2]=player;
	else if (a==7)
			matrix[2][0]=player;
	else if (a==8)
			matrix[2][1]=player;
	else if (a==9)
	    	matrix[2][2]=player;
}
void toogleplayer()// function to change the player.
{
	if (player=='X')
		player='O';
	else
		player ='X';
}
char win()// check function to decide who wins
{
	// first player
	// condition to win
	if (matrix[0][0] == 'X' && matrix [0][1] == 'X'  && matrix[0][2] == 'X'  )
		// whole first row
		return 'X';
	if (matrix[1][0] == 'X' && matrix [1][1]  == 'X' && matrix[1][2] == 'X'  )
		// whole second row
		return 'X';
	if (matrix[2][0] == 'X'&& matrix [2][1]  == 'X' && matrix[2][2] == 'X'  )
		// whole  third row
		return 'X';
	if (matrix[0][0] == 'X' && matrix [1][0] == 'X'  && matrix[2][0] == 'X'  )
		// whole first column
		return 'X';
	if (matrix[0][1] == 'X' && matrix [1][1]  == 'X' && matrix[2][1]  == 'X' )
		// whole second column
		return 'X';
	if (matrix[0][2] == 'X' && matrix [1][2]  == 'X' && matrix[2][2]  == 'X' )
		// whole third column
		return 'X';
	if (matrix[2][0] == 'X' && matrix [1][1]  == 'X' && matrix[0][2] == 'X'  )
		// first diagonal line
		return 'X';
	if (matrix[0][0] == 'X' && matrix [1][1] == 'X'  && matrix[2][2]  == 'X' )
		//second diagonal line
		return 'X';
	//second player
	//condition to win

	 if (matrix[0][0] == 'O'  && matrix [0][1]=='O'   && matrix[0][2] =='O')
	    	// first row
			return 'O';
     if (matrix[1][0]  == 'O'  && matrix [1][1] == 'O'  && matrix[1][2] == 'O')
			// second row
			return 'O';
     if (matrix[2][0]  == 'O' && matrix [2][1] == 'O'  && matrix[2][2]  == 'O')
			// third row
			return 'O';
      if (matrix[0][0]  == 'O' && matrix [1][0] == 'O'  && matrix[2][0] == 'O')
			// first column
			return 'O';
	  if (matrix[0][1]  == 'O' && matrix [1][1] == 'O'  && matrix[2][1] == 'O')
			// second column
			return 'O';
	 if (matrix[0][2]  == 'O' && matrix [1][2] == 'O'  && matrix[2][2]  == 'O')
			// Third column
			return 'O';
	 if (matrix[2][0] == 'O'  && matrix [1][1] == 'O'  && matrix[0][2] == 'O')
			//diagonal line
			return 'O';
	 if (matrix[0][0] == 'O'  && matrix [1][1] == 'O'  && matrix[2][2] == 'O')
			// diagonal line
			return 'O';
return'/';// return /
}// end of win() function

int main()// start the main() function
{
	Draw();
	while(1)
	{
	input();// checking the input function
	Draw();// checking the draw function
	if (win()=='X')// checking win function for X
	{
		cout<<" X wins!"<<endl;
		break;// exit the loop
	}
	else if (win()=='O')// checking win function for O
	{
		cout<<" O wins!"<<endl;
		break;
	}
	toogleplayer();// change the player
	}

	system("pause");
	return 0;

}// end of main() function
// console
//Welcome to Tic- Tac - Toe
//1 2 3
//4 5 6
//7 8 9
//press a number to fill the field.1
//Welcome to Tic- Tac - Toe
//X 2 3
//4 5 6
//7 8 9
//press a number to fill the field.2
//Welcome to Tic- Tac - Toe
//X O 3
//4 5 6
//7 8 9
//press a number to fill the field.5
//Welcome to Tic- Tac - Toe
//X O 3
//4 X 6
//7 8 9
//press a number to fill the field.6
//Welcome to Tic- Tac - Toe
//X O 3
//4 X O
//7 8 9
//press a number to fill the field.9
//Welcome to Tic- Tac - Toe
//X O 3
//4 X O
//7 8 X
//X wins!
//Press any key to continue . . .






