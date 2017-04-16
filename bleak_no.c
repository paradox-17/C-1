// 3 is not bleak because 2+1=3 where 2 is a no less than 3
// and 1 is the no of high bits in the binary of 2
// 4 is a bleak no as sum of any no less than 4
// with no of high bits in that no is not equal to 4
#include<stdio.h>
int main()
{
  int n, r, m ,flag = 1, count;
  scanf("%d", &n);
  r = n;
  while(r > 0)
  {
    m = r - 1;
    count = 0;
    while(m > 0)
    {
      if((m % 2) == 1)
	count++;
      m /= 2;
    }
    m = r - 1;
    if( (m + count) == n)
    {
      printf("False\n");
      flag = 0;
      break;
    }
    r--;
  }
  if (flag == 1)
    printf("True\n");
  return 0;
}
