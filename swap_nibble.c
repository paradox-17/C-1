#include<stdio.h>
int main()
{
int n, n1 = 0, n2 = 0;
    scanf("%d", &n);
    n1 = n >> 4;
    printf("%d ", n1);
    n2 = n << 4;
    n2 = n2 & 240;
    printf("%d ", n2);
    n = n1 | n2;
    printf("%d ", n);
    printf("\n");
    return 0;
}
