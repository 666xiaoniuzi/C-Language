#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Add(int a, int b) {
//	return a + b;
//}
//void add(int a, int b) {
//	printf("%d\n", a + b);
//}
//int main() {
//	int num1 = 0, num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int result=Add(num1,num2);
//	//printf(result);
//	//int sum = num1 + num2;
//	int sum = Add(num1, num2);
//	add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//int main() {
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 1,2,3,4,5 };
//	char ch[5] = { 'a','b','c' };
//	//printf("%d\n", arr1[6]);w
//	int i = 0;
//	while (i < 10) {
//		printf("%d\n", arr1[i]);
//		i++;
//
//	}
//	return 0;
//}
//int main() {
//	printf("%d\n", 10 / 4);  //2
//	printf("%f\n", 10.0 / 4);  //2.5
//	//printf("%d\n", 10.0 / 4); //0
//	//float f = 10.0 % 4.0;
//	return 0;
//}
//int main() {
//	int flag = 5;
//	if (flag) {
//		printf("hehehe");
//	}
//	if (!flag) {
//		printf("hahaha");
//	}
//	return 0;
//}
//int main() {
//	int a = 5;
//	float f = 4.4f;
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(f));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(float));
//	return 0;
//}
//int main() {
//	int a = 100;
//	//int b = a++;
//	//int b = ++a;
//	//int b = a--;
//	int b = --a;
//	printf("a= %d ,b= %d", a, b);
//	return 0;
//}
//int main() {
//	int a = (int )3.14;
//	int b = 3.14;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
////}
//int main(){
//	int a = 3;
//	if (a = 5) {
//		printf("hehe");
//	}
//	return 0;
//	}
//int main() {
//	/*int a = 0;
//	int b = 5;
//	if (a || b) {
//		printf("hehehe");
//	}
//	else {
//		printf("hahaha");
//	}*/
//	int age = 0;
//	if (age >= 18&& age <= 36) {
//		printf("青年\n");
//	}
//	return 0;
//}
//int main() {
//	int a = 0, b = 0, m = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b) {
//		m = a;
//	}
//	else {
//		m = b;
//	}
//	printf("%d\n", m);
//	return 0;
//}
//int main() {
//	/*int a, b, c;
//	scanf("%d%d", &a, &b);
//	c = a > b ? a : b;
//	printf("%d\n", c);*/
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	printf("%d\n", arr[4]);
//}
//int main() {
//	int a = 0, b = 0;
//    int ret=	scanf("%d%d", &a, &b);
//	printf("%d\n", ret);
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//typedef unsigned int uint;
//int main() {
//	//EOF;
//	/*register int a = 10;
//	printf("%d\n", a);*/
//
//	return 0;
//}
//void test() {
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//int main() {
//	int i = 0;
//	while (i < 10) {
//		test();
//		i++;
//	}
//	return 0;
//}
//extern int g_val;
//int main() {
//	printf("%d\n", g_val);
//	return 0;
//}
//声明外部函数
//extern int Add(int x,int y);
//int main() {
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
#define M 100
//#define 
#define MAX(x,y) (x>y?x:y) 
#define ADD(x,y) ((x)+(y))
//int Max(int a, int b) {
//	/*if (a > b) {
//		return a;
//	}
//	else {
//		return  b;
//	}*/
//	return (a > b) ? a : b;
//}
//int main() {
//	/*int a = M;
//	printf("%d\n", a);
//	printf("%d\n", M);*/
//	int a = 10;
//	int b = 20;
//	int m = MAX(a, b);
//	printf("%d\n", m);
//	return 0;
//}
//int main() {
//	int a = 1;
//	int *pa = &a;
//	*pa = 20;//相当于把a改为20 a=20
//	printf("%d\n", a);
//	printf("%p\n", pa);
//	printf("%p\n", &a);
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", strlen(a));
//	//printf("%p\n", &a);
//	return 0;
//}
//int main() {
//	char ch = 'w';
//	char* pc = &ch;
//	//*pc = 'a';
//	printf("%p\n", pc);
//	printf("%c\n", *pc);
//		return 0;
//}
//int main() {
//	char* pc;
//	int* pi;
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pi));
//	return 0;
//}
//int main() {
//	int arr1[5] = { 0,1,2,3,4 };
//	int arr2[] = { 0,1,2,3 };
//	return 0;
//}
//int getMax(int a, int b) {
//	return(a > b ? a : b);
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max=getMax(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//struct Stu {
//	char name[20];
//	char sex[5];
//	int age;
//};
//void Print(struct Stu* ps1) {
//	//printf("%s---%s--- %d\n", (*ps1).name, (*ps1).sex, (*ps1).age);
//	printf("%s---%s---%d\n", ps1->name, ps1->sex, ps1->age);
//}
//int main() {
//	int num = 0;
//	struct Stu s1 = { "张三","男",20 };
//	struct Stu s2 = { "如花","女",18 };
	//printf("%s\n", s1.name);
	//printf("%s\n", s1.sex);
	//printf("%d\n", s1.age);
	//printf("%s\n", s2.name);
	//printf("%s\n", s2.sex);
//	//printf("%d\n", s2.age);
//	Print(&s1);
//	Print(&s2);
//		return 0;
//}
//int main() {
	//int age = 0;
	//scanf("%d", &age);
	/*if (age >= 18) {
		printf("成年\n");
	}
	else {
		printf("未成年\n");
	}*/
	/*if (age < 16) {
		printf("少年\n");
	}
	else if (age >= 16 && age < 30) {
		printf("青年\n");
	}
	else if (age >= 30 &&age< 40) {
		printf("中年\n");
	}
	else if (age >= 40 && age < 80) {
		printf("老年\n");
	}
	else {
		printf("老不死的\n");
	}
	return 0;
}*/
//int main() {
//	/*int age = 20;
//	if (age >= 18) {
//		printf("成年\n");
//		printf("谈恋爱\n");
//	}*/
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 0) {
//		printf("是个人\n");
//	}
//	if (age > 18) {
//		printf("是个成年人\n");
//	}
//	if (age > 80) {
//		printf("是个老人了\n");
//	}
//	return 0;
//}
//int main() {
//	/*int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//		{
//			printf("hehe\n");
//		}
//	}
//	else
//	{
//		printf("haha\n");
//	}*/
//	/*int condition = 0;
//	if (condition) {
//		return x;
//	}*/
//	int age = 0;
//	scanf("%d", &age);
//	if (age > 0) {
//		printf("是个人\n");
//	}
//	printf("还没出生\n");
//	return 0;
//}
//int main() {
//	int num = 5;
//	if (10==num) {//常量和变量判断是否相等时，把常量放在前面
//		printf("hehehe");
//	}
//	return 0;
//}
//int main() {
//	int num = 0;
//	scanf("%d", & num);
//	if (num % 2 == 1)
//		printf("奇数\n");
//	else
//		printf("偶数\n");
//	
//	return 0;
//}
//int main() {
//	int i = 1;
//	while (i <= 100) {
//		if (i % 2 == 1) {
//			printf("%d\n", i);
//			i+=2;
//		}
//		
//	}
//	
//	return 0;
//}
//int main() {
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:printf("工作日\n"); break;
//	case 6:
//	case 7:printf("休息日\n"); break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
int main() {

		int n = 1;
		int m = 2;
		switch (n)
		{
		case 1:
			m++;
		case 2:
			n++;
		case 3:
			switch (n)
			{//switch允许嵌套使用
			case 1:
				n++;
			case 2:
				m++;
				n++;
				break;
			}
		case 4:
			m++;
			break;
		default:
			break;
		}
		printf("m = %d, n = %d\n", m, n);
	
	return 0;
}