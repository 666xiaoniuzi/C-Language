#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
void menu() {
	printf("**************************\n");
	printf("*****   1. play     ******\n");
	printf("*****   0. exit     ******\n");
	printf("**************************\n");
}
void game() {
	//1.��Ҫ��Ų��úõ��׵���Ϣ������Ų���׵���Ϣ����Ҫ��������
	//2.�Ų������ʱ��Ϊ�˷�ֹ����Խ�磬���Ǹ������������2�У�������2��
	char mine[ROWS][COLS] = { 0 };//���úõ��׵���Ϣ
	char show[ROWS][COLS] = { 0 };//�Ų�����׵���Ϣ
	//��ʼ������
	InitBoard(mine, ROWS, COLS,'0');//��ʼ��  0
	InitBoard(show, ROWS, COLS,'*');//��ʼ��  *
	//��ӡ����
	//DisplayBoard(mine, ROW, COL);//��ӡ 9*9 �Ĳ����׵����̣�����Ҫ�������ʾ����������Ҫ��ӡ
	DisplayBoard(show , ROW, COL);//��ӡ 9*9�����Ų���׵���Ϣ����Ҫ�������ʾ��������Ҫ��ӡ����
	//������
	SetMine(mine, ROW, COL);
	//DisplayBoard(mine, ROW, COL);
	//�Ų���
	FindMine(mine,show,ROW,COL);
}
void test() {
	srand((unsigned int)time(NULL));
	int input = 0;
	do {
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input) {
		case 1:
			//printf("ɨ��\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����,����ѡ��!\n");
			break;
		}
	} while (input);
}
int main() {
	test();
	return 0;
}
//1.�ܹ�չ��һƬ����  --->�ݹ����
//2.��Ǻ�ȡ����
//3.��ʾʣ���׵ĸ��� 