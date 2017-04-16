#include<stdio.h>

void swap(char *str, int i, int j)
{
  char t = str[i];
  str[i] = str[j];
  str[j] = t;
}

int main()
{
  char str[30];
  scanf("%s", str);
  int i, pos = -1, n = 0;

  while(str[n] != '\0')
    n++;
  
  for(i = n-1; i > 0; i--)
  {
    if(str[i] < str[i-1])
    {
      pos = i - 1;
      break;
    }
  }
  
  printf("%d  \n", pos);

  int j, diff, min = 9999;
  for(i = pos+1; i < n; i++)
  {
    diff = str[pos] - str[i];
    if(min > diff)
    {
      j = i;
      min = diff;
    }
  }

  swap(str, pos, j);

  for(i = pos+1; i < n; i++)
  {
    for(j = pos+1; j < n; j++)
    {
      if(
  return 0;
}
      
