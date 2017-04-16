#include<stdio.h>

int isGreat(int x, int y)
{
    return (((((~x) + 1) + y) >> 31) & 1);
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    int result = isGreat(x, y);
    printf("%d\n", result);
    return 0;
}
