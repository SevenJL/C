#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//创建一个菜单
void menu()
{
	printf("#######################\n");
	printf("#### 1 .play 0.quit####\n");
	printf("#######################\n");
}


//开始写游戏步骤
void game()
{
	char ret = 0; 
	char board[ROW][COL] = { 0 };
	//初始化游戏步骤
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//下棋
	while (1)
	{

		PlayerMove(board, ROW, COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		
		if (ret != 'C')
		{
			break;
		}

		DisplayBoard(board, ROW, COL); 
		ComputerMove(board,ROW,COL);
		//判断输赢
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}

		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("player win!\n");
	}
	else if (ret == '#')
	{
		printf("computer win!\n");
	}
	else
	{
		printf("平局\n");
	}
	DisplayBoard(board, ROW, COL);
	
}


int main()
{
	srand((unsigned int)time(NULL));//设置随机数的生成起点
	
	int input = 0;

	do
	{
		menu();//打印菜单
		printf("请选择:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("error!\n");
			break;
		}
		
	} while (input);
	
	return 0;
}