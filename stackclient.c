#include<stdio.h>
#include"stack.h"
#include<string.h>
int main()
{
  push((void*)3);
  push((void*)5);
  push((void*)7);
  while(size())
    printf("%d\n", (int)pop());
  push((void*)'c');
  printf("%c\n", (char)pop());
  push((void*)'heya');
  printf("%s\n", (char[])pop());
  return 0;
}
