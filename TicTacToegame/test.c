#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"
void menu() {
	printf("**********************\n");
	printf("*****  1. play  ******\n");
	printf("*****  0. eixt  ******\n");
	printf("**********************\n");

}
void game() {
	char board[ROW][COL];
	char ret = 0;
	//初始化棋盘为空格
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1) {
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		computer_move(board, ROW, COL);
		print_board(board,ROW,COL);
		//判断输赢
		ret = is_win(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '#') {
		printf("电脑赢\n");
	}
	else if (ret == '*') {
		printf("玩家赢了\n");
	}
	else if (ret == 'Q') {
		printf("平局\n");
	}


}
//判断输赢的代码要告诉我：电脑赢，玩家赢，平局，游戏继续
//电脑赢：#   玩家赢：*  平局：Q   游戏继续：C
void test() {
	srand((unsigned int )time(NULL));
	int input = 0;

	do {
		menu();
		printf("请选择：>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (input);

}
int main() {
	test();
	return 0;
}