#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3



//��ʼ������
void InitBoard(char board[ROW][COL]);

//��ӡ����
void  DisplayBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerMove(char board[ROW][COL], int x, int y);

//��������
//�����������
void ComputerMove(char board[ROW][COL],int x,int y);

//���Ӯ-*
//����Ӯ-#
//ƽ�� -Q
//����-C

char IsWin(char board[ROW][COL], int row, int col);