/*
Q. given a string containing only 0 or 1. Replace all '?' with
different combitions of 0 and 1

i/p - 10??
o/p - 1000 1001 1010 1011
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
  char str[4];
  int pos[4],k = 0;
  scanf("%s", str);
  for(int i = 0; i < 4; i++)
  {
    if(str[i] == '?')
    {
      pos[k] = i;
      k++;
    }
  }
  int r = 1 << k;
  for(int i = 0; i < r; i++)
  {
    for(int j = 0; j < k; j++)
    {
      int b = 1 << j;
      int x = (b & i);
      if(x == 0)
        str[pos[j]] = '0';
      else
	str[pos[j]] = '1';
    }
    printf("%s\n", str);
  }
  return 0;
}
