#include<stdio.h>
int main()
{
  char s[100];
  scanf("%s", s);
  int count = 0;
  for(int i = 0; s[i] != '\0'; i++)
  {
    if(s[i] == '(')
      count++;
    else if(s[i] == ')')
      count--;
  }
  if(count == 0)
    printf("Balanced\n");
  else
    printf("Not Balanced\n");
  return 0;
}
