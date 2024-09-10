#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			board[i][j] = set;
		}

	}
}
//打印9*9棋盘，横纵坐标都是从1开始
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	printf("--------扫雷-------\n");
	//控制列号，最上面的0-----9
	for (int i = 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++) {
		printf("%d ", i);//控制行号，1---9
		for (int j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char mine[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;//10个雷
	while (count) {//直到count=9的时候，雷才布置完了
		//1.生成随机下标
		int x = rand() % row + 1;//(0--8) +1=(1--9)
		int y = rand() % col + 1;
		//2.布置雷
		if (mine[x][y] == '0') {
			mine[x][y] = '1';
			count--;

		}

	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y) {
	return (mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1] +
		mine[x][y - 1] + mine[x][y + 1] + mine[x + 1][y - 1]
		+ mine[x + 1][y] + mine[x + 1][y + 1]-8*'0');

}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col) {
	int win = 0;
	int x = 0, y = 0;
	while (win<(row*col)-EASY_COUNT)
	{
		printf("请输入要输入的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (show[x][y] != '*') {
				printf("该坐标被排查过了\n");
				continue;
			}
			if (mine[x][y] == '1') {
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else {
				int n=get_mine_count(mine, x, y);
				show[x][y] = n+'0';//数字--->字符
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else {
			printf("坐标不合法，重新输入:>");
		}

	}
	if (win == row * col - EASY_COUNT) {
		printf("恭喜你，排雷成功了\n");
	}
}
