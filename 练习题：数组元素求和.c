#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int numbers[5] = { 0,0,0,0,0 };
int sum = 0;


int main()
{
	for (int i = 0; i <= 4; i++)
	{
		printf("请输入%d个整数：\n", i + 1);
		int result = scanf("%d", &numbers[i]);

		if (result != 1)
		{
			printf("请输入整数！");
				return 1;
		}

		sum = sum + numbers[i];
	}

	printf("\n这些数的总和是：%d\n", sum);

	return 0;
}