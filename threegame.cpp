//ͷ�ļ�

//#pragma once

#ifndef _GAME_H_

#define _GAME_H_

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#pragma warning (disable:4996)

#include<time.h>

#define ROW 3

#define COL 3

#define P_COLOR 'x'

#define C_COLOR '0'

#define NEXT 'N'

#define DRAW 'D'

void Menu();

void game();

#endif // _GAME_H_

//mainԴ�ļ�

#include "game.h"

void Menu()

{

printf("########################\n");

printf("## 1 . Play  2.Exit##\n");

printf("########################\n");

printf("");

}

int main()

{

int quilt = 0;

int select = 0;

while (!quilt)

{

Menu ();

scanf_s("%d\n", &select);

switch (select)

{

case 1:

game ();

printf("Ҫ��Ҫ����һ�ѣ�\n");

break;

case 2:

quilt = 1;

break;

default:

printf("��������");

break;

}

}

printf("�ݰݣ�");

return 0;

}

//game Դ�ļ�



#include "game.h"

void ShowBoard(char board[][COL], int row, int col)

{

int i = 0;

for (i = 0; i < row; i++)

{

int j = 0;

for (j = 0; j < col; j++)

{

printf(" %c ", board[i][j]);

if (j < col - 1)

printf("|");

}

printf("\n");

if (i < row - 1)

{

for (j = 0; j < col; j++)

{

printf("---");

if (j < col - 1)

printf("|");

}

}

printf("\n");

}

}

void ComputerMove(char board[][COL], int row, int col)

{

while (1)

{

int x = rand() % row;

int y = rand() % col;

if (board[x][y] == ' ')

board[x][y] = C_COLOR;

break;

}

}





Judge(char board[][COL], int row, int col)

{

for (int i = 0; i < row; i++)//�ж����Ƿ�Ϊ���� 

{

if (board[i][0] == board[i][1] && \

board[i][1] == board[i][2] && board[i][0] != ' ')

{

return board[i][0];

}

}

for (int j = 0; j < col; j++)//�ж����Ƿ�Ϊ���� 

{

if (board[0][j] == board[1][j] && \

board[1][j] == board[2][j] && board[0][j] != ' ')

{

return board[0][j];

}

}

if (board[0][0] == board[1][1] && \

board[1][1] == board[2][2] && \

board[0][0] != ' ')//�ж����Խ����Ƿ�Ϊ���� 

{

return board[0][0];

}

if (board[0][2] == board[1][1] && \

board[1][1] == board[2][0] && \

board[1][1] != ' ')//�жϸ��Խ����Ƿ�Ϊ���� 

{

return board[1][1];

}

for (int i = 0; i < row; i++)

{

for (int j = 0; j < col; j++)

{

if (board[i][j] == ' ')

return NEXT;

}

}

return DRAW;

}

void PlayerMove(char board[][COL], int row, int col)

{

int x = 0;

int y = 0;

while (1)

{

printf("���������λ��#");

scanf_s("%d %d", &x, &y);

if (x < 1 || x > 3 || y < 1 || y > 3)

{

printf("���������������");

continue;

}

if (board[x - 1][y - 1] != ' ')

{

printf("��λ���ѱ�ռ�ã�\n");

continue;

}

board[x - 1][y - 1] = P_COLOR;

break;

}

}

void game()

{

srand((unsigned long)time(NULL));

char board[ROW][COL];

memset(board, ' ', sizeof(board));//��ʼ������Ϊ�գ�һ���ո�Ҳ���������·��� 

//char board[ROW][COL] = {' '}; ��ʼ������Ϊ�գ�һ���ո�

char result = 'x';

do

{

ShowBoard(board, ROW, COL);

PlayerMove(board, ROW, COL);

result = Judge(board, ROW, COL);

if (result != NEXT)

{

break;

}

ComputerMove(board, ROW, COL);

result = Judge(board, ROW, COL);

if (result != NEXT)

{

break;

}

} while (1);

if (result == P_COLOR)

{

printf("��Ӯ�ˣ�\n");

}

else if (result == C_COLOR)

{

printf("�����ˣ�\n");

}

else

printf("����");



}
