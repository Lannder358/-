#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n = 0, m = 0,min=0,z=0,a=1,yu1=0,yu2=0;

int less(x,y)//����less�����������������ֵn��m֮��Ľ�Сֵ
{
	if (x < y)
		z = x;
	else
		z = y;
	return z;
}

int main()//������
{
	scanf("%d %d", &n, &m);//����n��m��ֵ
	printf("%d��%d�Ĺ������У�\n", n, m);
	min = less(n, m);//ʹmin��ȡֵ����less�����ķ���ֵ
    while (a <= min)//��aС�ڽ�Сֵʱ��ִ����һ��
    {
        yu1 = n % a;//������ֵn����a������yu1
        while (yu1 = 0)//��n����a��������ʱ��ִ����һ��
        {
            yu1 = 1;
            yu2 = m % a;//������ֵn����a������yu2
            while (yu2 = 0)
            {
                yu2 = 1;
                printf("%d", a);
            }
        }
        a = a + 1;
    }
	return 0;
}
