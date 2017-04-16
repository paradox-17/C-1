#include<stdio.h>

//Char to int

int main()
{
  int n;
  char s[5];
  scanf("%s", &s);
  sscanf(s, "%d", &n);
  printf("%d", n);
  return 0;
}
/*

// Int to char

int main()
{
  int n = 5;
  char s[30];
  sprintf(s, "high %d", n);
  printf("%s\n", s);
  return 0;
}
*/
