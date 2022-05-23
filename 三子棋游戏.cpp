#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j], board[i][j], board[i][j]);
			if (j < row - 1)
				printf("|");
			else
				printf("\n");
		}
		if (i < row-1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
				else
					printf("\n");
			}
		}
	}
}
//玩家走棋
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家走。\n");
	while (1)
	{
		x = 0, y = 0;
		printf("请输入要下的坐标：");
		scanf("%d%d", &x, &y);
		int ch;
		while (ch = getchar() != '\n')
		{
			;
		}
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'X';
				break;
			}
			else
			{
				printf("该坐标被占用，请重新输入！\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入！\n");
		}
	}
}
//电脑走棋
void ComputerMove(char board[ROW][COL], int row, int col, int count)
{
	printf("电脑走。\n");
	int x = 0, y = 0;
	if (count == 1)
	{
		while (1)
		{
			x = rand() % row;
			y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = 'O';
				break;
			}
		}
	}
	else
	{
		int n = 1;
		for (x = 0; x < row; x++)
		{
			if (n == 0)
				break;
			for (y = 0; y < col; y++)
			{
				if (board[x % row][y % col] == board[x % row][(y + 1) % col] && board[x % row][y % col] != ' ' && board[x % row][(y + 2) % col] == ' ')
				{
					board[x % row][(y + 2) % col] = 'O';
					n = 0;
					break;
				}
				if (board[y % row][x % col] == board[(y + 1) % row][x % col] && board[y % row][x % col] != ' ' && board[(y + 2) % row][x % col] == ' ')
				{
					board[(y + 2) % row][x % col] = 'O';
					n = 0;
					break;
				}
			}
		}
		if (n == 1)
		{
			for (x = 0, y = 0; x < row || y < col; x++, y++)
			{
				if (board[x % row][y % col] == board[(x + 1) % row][(y + 1) % col] && board[x % row][y % col] != ' ' && board[(x + 2) % row][(y + 2) % col] == ' ')
				{
					board[(x + 2) % row][(y + 2) % col] = 'O';
					n = 0;
					break;
				}
			}
			for (x = 0, y = 0; x < row || y < col; x++, y++)
			{
				if (board[x % row][(y + 2) % col] == board[(x + 1) % row][(y + 1) % col] && board[x % row][(y + 2) % col] != ' ' && board[(x + 2) % row][y % col] == ' ')
				{
					board[(x + 2) % row][y % col] = 'O';
					n = 0;
					break;
				}
				if (board[(x+2) % row][y % col] == board[(x + 1) % row][(y + 1) % col] && board[(x+2) % row][y % col] != ' ' && board[x % row][(y+2) % col] == ' ')
				{
					board[x % row][(y + 2) % col] = 'O';
					n = 0;
					break;
				}
				if (board[x % row][(y + 2) % col] == board[(x + 2) % row][y % col] && board[(x+1) % row][(y + 1) % col] != ' ' && board[(x + 1) % row][(y+1) % col] == ' ')
				{
					board[(x + 1) % row][(y+1) % col] = 'O';
					n = 0;
					break;
				}
			}
		}
		if (n == 1)
		{
			while (1)
			{
				x = rand() % row;
				y = rand() % col;
				if (board[x][y] == ' ')
				{
					board[x][y] = 'O';
					break;
				}
			}
		}
	}
}
//判断输赢
char Iswin(char board[ROW][COL], int row, int col, int count)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];
	if (count == 5)
		return 'Z';
	return 'C'; 
}