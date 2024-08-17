#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num; int count = 0;

int main()
{
	printf("请输入一个整数：\n");

	if (scanf(" %d", &num) == 1)
	{
		if (num <= 0) 
		{
			num = -num;
			do {
				num /= 10;
				count++;
			} while (num != 0);
			printf("\n该整数的位数有%d位", count);
			return 0;
		}
		else
			do {
				num /= 10;
				count++;
			} while (num != 0);
		printf("\n该整数的位数有%d位", count);
		return 0;
	}
	else 
	{
		printf("请输入整数！");
		return 1;
	}
}