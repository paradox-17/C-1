#include<stdio.h>
#include<string.h>
int main()
{
  char s[100], temp;
  scanf("%s", s);
  int i, j, r = strlen(s), flag = 0;
  for(i = r-1; i > 1; i--)
  {
    if(s[i] > s[i-1])
    {
      temp = s[i];
      s[i] = s[i-1];
      s[i-1] = temp;
      flag = 1;
      break;
    }
  }
  if(flag == 0)
  {
    printf("Reversing\n");
    
    int x = 9999, diff, min = 999;
    for(i = 1; i < r; i++)
    {
      diff = s[i] - s[0];
      if( (diff < min) && (diff > 0) )
      {
	min = diff;
	x = i;
      }
    }
    if(x = 9999)
      printf("No next permutation\n");
    else{
    temp = s[0];
    s[0] = s[x];
    s[x] = temp;
    for(i = 1; i < r-1; i++)
    {
      for(j = 1; j < r-1; j++)
      {
	if(s[j] > s[j+1])
	{
	  temp = s[j];
	  s[j] = s[j+1];
	  s[j+1] = temp;
	}
      }
    }
    }
  }
  printf("%s\n", s);
  return 0;
}
