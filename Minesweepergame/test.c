#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu() {
	printf("**************************\n");
	printf("*****   1. play     ******\n");
	printf("*****   0. exit     ******\n");
	printf("**************************\n");
}
void game() {
	//1.需要存放布置好的雷的信息，存放排查出雷的信息，需要两个数组
	//2.排查坐标的时候，为了防止坐标越界，我们给数组的行增加2行，列增加2列
	char mine[ROWS][COLS] = { 0 };//布置好的雷的信息
	char show[ROWS][COLS] = { 0 };//排查出的雷的信息
	//初始话棋盘
	InitBoard(mine, ROWS, COLS,'0');//初始化  0
	InitBoard(show, ROWS, COLS,'*');//初始化  *
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);//打印 9*9 的布置雷的棋盘，不需要向玩家显示出来，不需要打印
	DisplayBoard(show , ROW, COL);//打印 9*9棋盘排查的雷的信息，需要向玩家显示出来，需要打印出来
	//布置雷
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//排查雷
	FindMine(mine,show,ROW,COL);
}
void test() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			//printf("扫雷\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误,重新选择!\n");
			break;
		}
	} while (input);
}
int main() {
	test();
	return 0;
}
//1.能够展开一片操作  --->递归操作
//2.标记和取消雷
//3.显示剩余雷的个数 