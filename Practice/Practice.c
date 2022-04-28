#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Print()
{
	printf("1.加法\n");
	printf("2.减法\n");
	printf("3.乘法\n");
	printf("4.除法\n");
	printf("0.退出程序\n");
	printf("请选择：");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void Callback(int (*r)(int, int))
{
	int x = 0;
	int y = 0;
	scanf("%d%d", &x, &y);
	printf("结果为%d\n", r(x, y));
}
void Calculator()
{
	int q = 0;
	do
	{
		Print();
		scanf("%d", &q);
		system("cls");
		switch (q)
		{
		case 1:
			Callback(Add);
			break;
		case 2:
			Callback(Sub);
			break;
		case 3:
			Callback(Mul);
			break;
		case 4:
			Callback(Div);
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误\n");
			break;
		}
	} while (q);
}
int main()
{
	Calculator();
	return 0;
}