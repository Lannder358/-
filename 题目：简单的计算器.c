#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char op;
int a; int b; int result;

int main()
{
	//�˲���������������������õ�����
	printf("������һ���������+��-��*��/����");
	scanf("%c", &op);
	printf("\n�������������֣�\n");
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
			printf("\n��������Ϊ�㣡\n");
			return 1;
		}
		else
		{
			result = a / b;
			break;
		}
	default:
		printf("\n��������ȷ��������ţ�\n");
		return 1;
	}

	printf("%d %c %d = %d\n", a, op, b, result);

	return 0;
}