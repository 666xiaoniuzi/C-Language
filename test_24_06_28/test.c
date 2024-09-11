#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include<stdio.h>
//int main() {
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//	//printf("%d\n", a);
//	return 0;
//}
//int global_a = 2024;
//void test() {
//	printf("test:%d\n", global_a);
//}
//int main() {
//	printf("%d\n", global_a);
//	test();
//	return 0;
//}
//#include <add.c>
//extern int g_a;  //来自于外部，使用extern
//int main() {
//	printf("%d\n", g_a);

//	return 0;
//}
//int main() {
//	{
//	int a = 2024;
//	printf("1: %d\n", a);  //出范围就销毁
//	}
//	printf("2: %d\n", a);
//	return 0;
//
//}[
//int main() {
//	int num = 100;
//	num = 200;
//	printf("%d\n", num);
//	const int a = 22;  //const常数
//	a = 24; //常变量，不能修改
//	printf("%d\n", a);
//	return 0;
//}
//int main() {
//	//const int n = 10;//n是变量,const修饰后也是常量，本质上也是变量
//	//int arr[n] = { 0 };
//	return 0;
//}
//3.#define定义标识  "常量"
//#define M 100
//int main() {
//	int arr[M] = { 0 };
//	printf("%d\n", M);
//	//printf("%s\n", arr[0]);
//	return 0;
//}枚举 ---可以一一列举
//enum Color {
//	Red,
//	Green,
//	Blue
//};
//int main() {
//	enum Color c = Blue;
//	printf("%d\n",Red);
//	printf("%d\n",Green);
//	printf("%d\n",Blue);
//	//Red = 10;  不能被赋值
//	//printf("%s\n", c);
//	//printf("%d\n", enum[Red]);
//	return 0;
//}/*
//int a
/*
int main() {
	printf("%d\n", a);
	return 0;
}
int a = 10;*/

//int main() {
//	//char ch = 'w';
//	char ch1[] = { 'a','b','c','\0'};
//	char ch2[] = "abc"; //abc\0,四个元素，隐藏了'\0'
//	//printf("%d\n", sizeof(ch1));
//	printf("%d\n", sizeof(ch1));
//		printf("%d\n", sizeof(ch2));
//	printf("%s\n", ch1);
//	printf("%s\n", ch2);
//	return 0;
//}strlen不算 '\0'的长度，'\0'之前的字符个数
//int main() {
//	char ch1[] = { 'a','b','c','\0'};
//	char ch2[]="abc";
//	int len1 = strlen(ch1);
//	printf("%d\n", len1); //不知道 3
//	int len2 = strlen(ch2); 
//	printf("%d\n", len2);//3
//	return 0;
//}
//int main() {
//	/*printf("abcdef");
//	printf("\n");
//	printf("abc\ndef");*/
//	printf("c:\code\test.c");
//	return 0;
//}
/*int main() {
	printf("(are you ok\?\?)");
	return 0;
}*/
//int main() {
	/*printf("%c\n", 'a');
	printf("%c\n", 'b');
	printf("%c\n", '\"');*/
	//printf("\a");
	//printf("abcdef\bc");
	//printf("%c\n", '\073');  //59 ---> ;
	//printf("%c\n", '\x46');
	//printf("c:\\code\\test.c");
	//printf("%d\n", strlen("abcdef"));
	/*printf("%d\n", sizeof("abcdef"));
	printf("%d\n", strlen("abcdef\0"));
	printf("%d\n", sizeof("abcdef\0"));*/
	/*printf("%d\n", strlen("c:\test\628\test.c"));
	printf("%d\n", strlen("c:\test\62\test.c"));
	printf("%d\n", strlen("c:\test\x123\test.c"));*/
	//printf("%d\n",strlen("c:"))
	/*printf("%d\n", 100);
	printf("%c\n", 100);*/
	//printf("%d\n", strlen("abc\nerf"));
	//return 0;
//}

//int main() {
//	int a = 10;//创建一个变量叫a ,并赋值为10
//	return 0;
//}
//int main() {
//	int input = 0;
//	printf("加入比特你好好学习吗？（0/1）\n");
//	printf("请输入你的选择：");
//	scanf("%d", &input);
//	if (input == 1) {
//		printf("拿一个好offer");
//	}
//	else if (input == 0) {
//		printf("回家卖红薯");
//	}
//	else {
//		printf("输入错误");
//	}
//	return 0;
//}
int main() {
	int line = 0;
	while (line <= 100) {
		printf("敲代码：%d\n", line);
		line++;
	}
	if (line > 100) {
		printf("好offer\n");
	}
	else {
		printf("好好学习，天天编程\n");
	}
	return 0;
}