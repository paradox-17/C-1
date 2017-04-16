#include<stdio.h>
int main()
{
  int n, r;
  scanf("%x", &n);
  scanf("%d", &r);
  n = n >> 8*r;
  printf("%x\n", n&255);
  return 0;
}
