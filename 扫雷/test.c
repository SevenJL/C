
#include "game.h"
void menu()
{
	printf("************************\n");
	printf("*****1.play 0.quit******\n");
	printf("************************\n");
}
void game()
{
		char mine[ROWS][COLS] = { 0 };//存放布置好的雷的信息
		char show[ROWS][COLS] = { 0 };//存放排查的雷信息
		//初始化先数组内容为指定内容
		//指定mine在没有布置雷的时候都是‘0’
		InitBoard(mine, ROWS, COLS,'0');
		
		InitBoard(show, ROWS, COLS,'*');
		
		//设置雷
		//把雷传进我的mine数组中，这个数组是不能被看到的
		SetMine(mine,ROW,COL);
		//DisplayBoard(mine, ROW, COL);
		DisplayBoard(show, ROW, COL);
		//DisplayBoard(mine, ROW, COL);

		//排查雷
		FindMine(mine, show, ROW, COL);
}


int main()
{
	//设置随机数的生成
	srand((unsigned int)time(NULL));

	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
		scanf_s("%d", &input);
		
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
		}
	} while (input);

	return 0;
}