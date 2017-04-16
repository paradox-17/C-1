// returns floor(sqrt(num))  eg 5 will return 2
#include<stdio.h>
int findsqrt(int num)
{
  int first = 0, last = num, mid, pos;
    
    while(first <= last)
    {
        mid = (first + last) / 2;
        if((mid * mid) <= num)
        {
	    pos = mid;
	    first = mid + 1;
        }
        else
        {
	    last = mid - 1;
        }
    }
    return pos;
}
      
  /*
    int i,pos;
    for(i = 0; i <= num/2; i++)
    {
        if((i*i) <= num)
	{
	    pos = i;
	}
	else
	    break;
    }
    */

int main()
{
    int num;
    scanf("%d", &num);
    int sqrt = findsqrt(num);
    printf("%d\n", sqrt);
    return 0;
}
