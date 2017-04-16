#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if( (n & n-1) )
	printf("No\n");
    else
	printf("Yes\n");
    return 0;
}
