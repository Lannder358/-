#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int numbers[5] = { 0,0,0,0,0 };
int sum = 0;


int main()
{
	for (int i = 0; i <= 4; i++)
	{
		printf("������%d��������\n", i + 1);
		int result = scanf("%d", &numbers[i]);

		if (result != 1)
		{
			printf("������������");
				return 1;
		}

		sum = sum + numbers[i];
	}

	printf("\n��Щ�����ܺ��ǣ�%d\n", sum);

	return 0;
}