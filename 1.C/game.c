#include "game.h"

//打印
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

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//这里们要打印数据
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)//避免多一个|
				printf("|");
		}
		printf("\n");
		//打印分割线
		if (i<row-1)
		{
			int j = 0;
			for (j=0; j<col; j++)
			{
				printf("---");
				if (j<col-1)//避免多一个|
					printf("|");
				
		
			}
			printf("\n");
		}
	}
}
void  PlayerMove(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("玩家下棋.\n");

	while (1)
	{
		printf("输入坐标>:");
		scanf_s("%d %d", &x, &y);
		//解下来要判断坐标是否合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//因为数组的下标是0~N-1
				//判断下棋的位置是否被占
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("被占用，请选择其他的位置\n");   
			}
		}
		else
		{
			printf("坐标非法，不能使用\n");
		}
	}
}



void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:>\n" );
	int x = 0;
	int y = 0;

	while (1)
	{

		x = rand() % row;//rand为取随机值//0~2
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}


}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//如果棋盘有一个空格，那么就没有平局
			}
		}
	}
	return 1;//如果棋盘满了，没有空格，那么就要平局
 }

char IsWin(char board[ROW][COL], int row, int col)
{
	//判断行是否都相等
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//判断每行元素是否相等，而且不能等于空格
		{
			return board[i][1];//如果都相等，返回这个元素是*还是#
		}
	}
	//判断列是否相等
	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board [1][j] != ' ')//判断每行元素是否相等，而且不能等于空格
		{
			return board[1][j];//如果都相等，返回这个元素是*还是#
		}
	}
	//判断对角线是否相等
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//如果没人赢就是平局
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	//游戏继续
	return 'C';
}
