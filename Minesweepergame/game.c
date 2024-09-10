#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			board[i][j] = set;
		}

	}
}
//��ӡ9*9���̣��������궼�Ǵ�1��ʼ
void DisplayBoard(char board[ROWS][COLS], int row, int col) {
	printf("--------ɨ��-------\n");
	//�����кţ��������0-----9
	for (int i = 0; i <= col; i++) {
		printf("%d ", i);
	}
	printf("\n");
	for (int i = 1; i <= row; i++) {
		printf("%d ", i);//�����кţ�1---9
		for (int j = 1; j <= col; j++) {
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char mine[ROWS][COLS], int row, int col) {
	int count = EASY_COUNT;//10����
	while (count) {//ֱ��count=9��ʱ���ײŲ�������
		//1.��������±�
		int x = rand() % row + 1;//(0--8) +1=(1--9)
		int y = rand() % col + 1;
		//2.������
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
		printf("������Ҫ���������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (show[x][y] != '*') {
				printf("�����걻�Ų����\n");
				continue;
			}
			if (mine[x][y] == '1') {
				printf("���ź����㱻ը����\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else {
				int n=get_mine_count(mine, x, y);
				show[x][y] = n+'0';//����--->�ַ�
				DisplayBoard(show, ROW, COL);
				win++;
			}
		}
		else {
			printf("���겻�Ϸ�����������:>");
		}

	}
	if (win == row * col - EASY_COUNT) {
		printf("��ϲ�㣬���׳ɹ���\n");
	}
}
