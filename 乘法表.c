#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
	int n = 1, m = 1,result=1;
	while (n < 10)
	{
		while (m < 10)
		{
			result = n * m;
            printf("%d*%d=%d  ", n, m, result);
			m = m + 1;
		}
		n = n + 1;
		m = n;
		printf("\n");
	}
	return 0;
}