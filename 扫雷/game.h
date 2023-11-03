#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>



#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 80



void InitBoard(char board[ROWS][COLS], int rows, int cols, int set);
void DisplayBoard(char board[ROWS][COLS], int row, int col);

//����Ĵ�������char���͵����ֱ��뻹��11*11�������飬��������ʹ���к��е�ʱ��Ҫʹ��9*9������ 
void SetMine(char board[ROWS][COLS], int row, int col);


void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);







