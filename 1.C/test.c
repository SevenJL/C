#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

//����һ���˵�
void menu()
{
	printf("#######################\n");
	printf("#### 1 .play 0.quit####\n");
	printf("#######################\n");
}


//��ʼд��Ϸ����
void game()
{
	char ret = 0; 
	char board[ROW][COL] = { 0 };
	//��ʼ����Ϸ����
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	//����
	while (1)
	{

		PlayerMove(board, ROW, COL);
		//�ж���Ӯ
		ret = IsWin(board, ROW, COL);
		
		if (ret != 'C')
		{
			break;
		}

		DisplayBoard(board, ROW, COL); 
		ComputerMove(board,ROW,COL);
		//�ж���Ӯ
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
		printf("ƽ��\n");
	}
	DisplayBoard(board, ROW, COL);
	
}


int main()
{
	srand((unsigned int)time(NULL));//������������������
	
	int input = 0;

	do
	{
		menu();//��ӡ�˵�
		printf("��ѡ��:>");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("error!\n");
			break;
		}
		
	} while (input);
	
	return 0;
}