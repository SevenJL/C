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

//这里的传过来的char类型的数字必须还是11*11的那数组，但我们再使用行和列的时候要使用9*9的数组 
void SetMine(char board[ROWS][COLS], int row, int col);


void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);







