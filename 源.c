#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int n = 0, m = 0,min=0,z=0,a=1,yu1=0,yu2=0;

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
	printf("%d与%d的公因数有：\n", n, m);
	min = less(n, m);//使min的取值等于less函数的返回值
    while (a <= min)//当a小于较小值时，执行下一步
    {
        yu1 = n % a;//求输入值n除以a的余数yu1
        while (yu1 = 0)//当n除以a可以整除时，执行下一步
        {
            yu1 = 1;
            yu2 = m % a;//求输入值n除以a的余数yu2
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
