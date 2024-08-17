#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char op;
int a; int b; int result;

int main()
{
	//此部分用于输入符号与运算用的数字
	printf("请输入一个运算符（+，-，*，/）：");
	scanf("%c", &op);
	printf("\n请输入两个数字：\n");
	scanf("%d %d", &a, &b);
	switch (op)
	{
	case '+':
			result = a + b;
			break;
	case '-':
		    result = a - b;
		break; 
	case '*':
			result = a * b;
			break; 
	case '/':
		if (b == 0)
		{
			printf("\n除数不能为零！\n");
			return 1;
		}
		else
		{
			result = a / b;
			break;
		}
	default:
		printf("\n请输入正确的运算符号！\n");
		return 1;
	}

	printf("%d %c %d = %d\n", a, op, b, result);

	return 0;
}