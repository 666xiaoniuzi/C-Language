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
	//��ʼ������Ϊ�ո�
	init_board(board, ROW, COL);
	print_board(board, ROW, COL);
	while (1) {
		player_move(board, ROW, COL);
		print_board(board, ROW, COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
		computer_move(board, ROW, COL);
		print_board(board,ROW,COL);
		//�ж���Ӯ
		ret = is_win(board, ROW, COL);
		if (ret != 'C') {
			break;
		}
	}
	if (ret == '#') {
		printf("����Ӯ\n");
	}
	else if (ret == '*') {
		printf("���Ӯ��\n");
	}
	else if (ret == 'Q') {
		printf("ƽ��\n");
	}


}
//�ж���Ӯ�Ĵ���Ҫ�����ң�����Ӯ�����Ӯ��ƽ�֣���Ϸ����
//����Ӯ��#   ���Ӯ��*  ƽ�֣�Q   ��Ϸ������C
void test() {
	srand((unsigned int )time(NULL));
	int input = 0;

	do {
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			//printf("������\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);

}
int main() {
	test();
	return 0;
}