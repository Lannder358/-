#include <stdio.h>

int numbers[10];
int i = 0; int sum = 0; int max,pl;

int main() 
{
    
    printf("������10��������");
    for (i = 0; i < 10; i++) 
    {
        scanf_s("%d", &numbers[i]);
    }

    printf("����Ԫ��Ϊ��");
    for (i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }
    printf("\n");

   
    for (i = 0; i < 10; i++)
    {
        sum = sum + numbers[i];
    } 
    printf("����Ԫ�صĺ�Ϊ��%d\n",sum);

    for (i = 0,max=numbers[0]; i < 10; i++)
    {
        if (max < numbers[i])
        {
            max = numbers[i];
            pl = i;
        }
    }
    printf("���������ֵΪ��%d��λ������%d", max, pl);

    return 0;
}