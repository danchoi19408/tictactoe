// Tictactoe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

char board[3][3];

void init_board()
{
	for (int row = 0; row < 3; ++row) {
		for (int col = 0; col < 3; ++col) {
			board[col][row] = ' ';
		}
	}
}

void print_board()
{
	for (int row = 0; row < 3; ++row) {
		for (int col = 0; col < 3; ++col) {
			cout << board[col][row];
			if (col < 2) cout << '|';
		}
		if (row<2) cout << "\n-+-+-\n";
	}
}

void mark_cell (char player)
{
	cout << "what row do you want to mark?";
	int row;
	cin >> row;
	
	cout << "what column do you want to mark?";
	int column;
	cin >> column;

	board[column][row] = player;
}

int main()
{
	cout << "hello world\n";
	init_board();
	print_board();

	while (true) {
		mark_cell('x');
		print_board(); 
		mark_cell('o');
		print_board();
	}

	system("pause");
    return 0;
}

