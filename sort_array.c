#include<stdio.h>

void prnt(char *s[3])
{
  int i;
  for(i = 0; i < 3; i++)
    printf("%s ", *s[i]);
}

int main()
{
  char s[3][3];
  int i;
  for(i = 0; i < 3; i++)
    scanf("%s", s[i]);
  prnt(s);
  return 0;
}



/*
#include<stdio.h>

void sort_arr(int *a)
{
  int i, j, temp;
  for(i = 0; i < 5; i++)
  {
    for(j = i+1; j < 5; j++)
    {
      if( a[i] > a[j])
      {
	temp = a[i];
	a[i] = a[j];
	a[j] = temp;
      }
    }
  }
}

int main()
{
  int arr[5], i;
  for(i = 0; i < 5; i++)
    scanf("%d", &arr[i]);
  sort_arr(arr);
  for(i = 0; i < 5; i++)
    printf("%d ", arr[i]);
  return 0;
}
*/
