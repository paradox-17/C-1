// count no of high bits in a range 

#include<stdio.h>

int get(int n)
{
    int count = 0;
    while(n > 0)
    {
        if((n%2) == 1)
	  count++;
        n = n / 2;
    }
    return count;
}

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    for( i = 1; i <= n; i++)
        count  += get(i);
    printf("%d\n", count);
    return 0;
}

/*
if( (n & 1) == 1 )
  count++
n >> 1
*/
