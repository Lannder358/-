#include <stdio.h>

int numbers[10];
int i = 0; int sum = 0; int max,pl;

int main() 
{
    
    printf("请输入10个整数：");
    for (i = 0; i < 10; i++) 
    {
        scanf_s("%d", &numbers[i]);
    }

    printf("数组元素为：");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

   
    for (i = 0; i < 10; i++)
    {
        sum = sum + numbers[i];
    } 
    printf("数组元素的和为：%d\n",sum);

    for (i = 0,max=numbers[0]; i < 10; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
            pl = i;
        }
    }
    printf("数组中最大值为：%d，位于索引%d", max, pl);

    return 0;
}