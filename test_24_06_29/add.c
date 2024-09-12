#define _CRT_SECURE_NO_WARNINGS 1
static int g_val = 2024;
//可以在外部文件中链
//接使用，如果加上static只能在本文件中使用
//作用域范围变小
static int Add(int x, int y) {
	return x + y;
}