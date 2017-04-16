#include<stdio.h>
int main(int argc, char *argv[])
{
  int n1, n2;
  sscanf(argv[1], "%d", &n1);
  sscanf(argv[2], "%d", &n2);
  printf("%d", n1+n2);
  printf("\n");
  return 0;
}
