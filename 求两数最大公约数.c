#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n = 0, m = 0, z = 0, a = 1, yu1 = 0, yu2 = 0, yu = 1;

int less(x,y)//定义less函数，用于求出输入值n与m之间的较小值
{
	if (x < y)
		z = x;
	else
		z = y;
	return z;
}

int main()//主函数
{
	scanf("%d %d", &n, &m);//输入n与m的值
	a = less(n, m) + 1;//使min的取值等于less函数的返回值
   while (yu!=0)
   {
	   a--;
	   yu1 = n % a;
	   yu2 = m % a;
	   yu = yu1 + yu2;//检测两数的余数之和是否等于0，若等于0则说明为公约数，同时结束循环
   }
   printf("%d与%d的最大公约数为%d",n, m, a);
	return 0;
}
