#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n = 0, m = 0, z = 0, a = 1, yu1 = 0, yu2 = 0, yu = 1;

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
	a = less(n, m) + 1;//ʹmin��ȡֵ����less�����ķ���ֵ
   while (yu!=0)
   {
	   a--;
	   yu1 = n % a;
	   yu2 = m % a;
	   yu = yu1 + yu2;//�������������֮���Ƿ����0��������0��˵��Ϊ��Լ����ͬʱ����ѭ��
   }
   printf("%d��%d�����Լ��Ϊ%d",n, m, a);
	return 0;
}
