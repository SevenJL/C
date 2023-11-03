#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 3
#define COL 3



//初始化棋盘
void InitBoard(char board[ROW][COL]);

//打印棋盘
void  DisplayBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerMove(char board[ROW][COL], int x, int y);

//电脑下棋
//电脑随机下棋
void ComputerMove(char board[ROW][COL],int x,int y);

//玩家赢-*
//电脑赢-#
//平局 -Q
//继续-C

char IsWin(char board[ROW][COL], int row, int col);