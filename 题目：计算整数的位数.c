#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num; int count = 0;

int main()
{
	printf("������һ��������\n");

	if (scanf(" %d", &num) == 1)
	{
		if (num <= 0) 
		{
			num = -num;
			do {
				num /= 10;
				count++;
			} while (num != 0);
			printf("\n��������λ����%dλ", count);
			return 0;
		}
		else
			do {
				num /= 10;
				count++;
			} while (num != 0);
		printf("\n��������λ����%dλ", count);
		return 0;
	}
	else 
	{
		printf("������������");
		return 1;
	}
}