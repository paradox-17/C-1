// return sqrt of num if exists else -1
#include<stdio.h>

int find_sqrt(int num, int first, int last)
{
  if(first <= last)
  {
    int mid = (first + last) / 2;
    if( (mid * mid) < num)
      return find_sqrt(num, mid+1, last);
    else if( (mid * mid) > num)
      return find_sqrt(num, first, mid-1);
    else
      return mid;
  }
  return -1;
}

int main()
{
  int num;
  scanf("%d", &num);
  printf("%d\n", find_sqrt(num,0,num));
  return 0;
}
