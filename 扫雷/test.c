
#include "game.h"
void menu()
{
	printf("************************\n");
	printf("*****1.play 0.quit******\n");
	printf("************************\n");
}
void game()
{
		char mine[ROWS][COLS] = { 0 };//��Ų��úõ��׵���Ϣ
		char show[ROWS][COLS] = { 0 };//����Ų������Ϣ
		//��ʼ������������Ϊָ������
		//ָ��mine��û�в����׵�ʱ���ǡ�0��
		InitBoard(mine, ROWS, COLS,'0');
		
		InitBoard(show, ROWS, COLS,'*');
		
		//������
		//���״����ҵ�mine�����У���������ǲ��ܱ�������
		SetMine(mine,ROW,COL);
		//DisplayBoard(mine, ROW, COL);
		DisplayBoard(show, ROW, COL);
		//DisplayBoard(mine, ROW, COL);

		//�Ų���
		FindMine(mine, show, ROW, COL);
}


int main()
{
	//���������������
	srand((unsigned int)time(NULL));

	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf_s("%d", &input);
		
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
		}
	} while (input);

	return 0;
}