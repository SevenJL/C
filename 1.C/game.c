#include "game.h"

//��ӡ
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
		//������Ҫ��ӡ����
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j<col-1)//�����һ��|
				printf("|");
		}
		printf("\n");
		//��ӡ�ָ���
		if (i<row-1)
		{
			int j = 0;
			for (j=0; j<col; j++)
			{
				printf("---");
				if (j<col-1)//�����һ��|
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
	printf("�������.\n");

	while (1)
	{
		printf("��������>:");
		scanf_s("%d %d", &x, &y);
		//������Ҫ�ж������Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')//��Ϊ������±���0~N-1
				//�ж������λ���Ƿ�ռ
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��ռ�ã���ѡ��������λ��\n");   
			}
		}
		else
		{
			printf("����Ƿ�������ʹ��\n");
		}
	}
}



void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������:>\n" );
	int x = 0;
	int y = 0;

	while (1)
	{

		x = rand() % row;//randΪȡ���ֵ//0~2
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
				return 0;//���������һ���ո���ô��û��ƽ��
			}
		}
	}
	return 1;//����������ˣ�û�пո���ô��Ҫƽ��
 }

char IsWin(char board[ROW][COL], int row, int col)
{
	//�ж����Ƿ����
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')//�ж�ÿ��Ԫ���Ƿ���ȣ����Ҳ��ܵ��ڿո�
		{
			return board[i][1];//�������ȣ��������Ԫ����*����#
		}
	}
	//�ж����Ƿ����
	int j = 0;
	for (j = 0; j < row; j++)
	{
		if (board[0][j] == board[1][j] && board[1][j] == board[2][j] && board [1][j] != ' ')//�ж�ÿ��Ԫ���Ƿ���ȣ����Ҳ��ܵ��ڿո�
		{
			return board[1][j];//�������ȣ��������Ԫ����*����#
		}
	}
	//�ж϶Խ����Ƿ����
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//���û��Ӯ����ƽ��
	if (IsFull(board, row, col))
	{
		return 'Q';
	}
	//��Ϸ����
	return 'C';
}
