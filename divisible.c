#include<stdio.h>
#include<stdlib.h>
int divisible(int num)
{
    if(num % 3)
        return 0;
    else
        return 1;
}
int main()
{
    int bin;
    printf("Enter binary no ");
    scanf("%d", &bin);

    int i = 1, r, m = bin, num = 0;
    while(m > 0)
    {
        r = m % 10;
        num = num + (i * r);
        i = i * 2;
        m = m / 10;
    }
    printf("%d\n", num);
    int flag = divisible(num);
    printf("%d\t%d\n",num, flag);
    int newbit, count = 0;
    while(count < 11)
    {
        newbit = rand() % 2;
        if (newbit == 1)
        {
            num = (num * 2) + 1;
            flag = divisible(num);
        }
        else
        {
            num = num * 2;
        }
        count++;
        printf("%d\t%d\n", num, flag);
    }
    return 0;
}
