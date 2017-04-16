// Matrix multiplication
/*
#include<stdio.h>
int main()
{
  int size;
  printf("Enter size of array ");
  scanf("%d", &size);
  int array[size], array1[size], array2[size], i;
  for(i = 0; i < size; i++)
  {
    scanf("%d", &array[i]);
  }

  array1[0] = 1;
  for(i = 1; i < size; i++)
  {
    array1[i] = array1[i-1] * array[i-1];
    printf("%d\t", array1[i]);
  }

  printf("\n");

  array2[size-1] = 1;
  for(i = size-2; i >= 0; i--)
  {
    array2[i] = array2[i+1] * array[i+1];
    printf("%d\t", array2[i]);
  }

  printf("\n");

  for(i = 0; i < size; i++)
  {
    array[i] = array1[i] * array2[i];
    printf("%d\n", array[i]);
  }
  return 0;
}
*/


// matrix zero element
/*
#include<stdio.h>
int main()
{
  int size;
  printf("Enter size of array ");
  scanf("%d", &size);
  int matrix[size][size], i, j, zrow = 0, zcol = 0;
  for(i = 0; i < size; i++)
  {
    for(j = 0; j < size; j++)
    {
      scanf("%d", &matrix[i][j]);
      if(matrix[i][j] == 0)
      {
	zrow = zrow | (1 << i);
	zcol = zcol | (1 << j);
      }
    }
  }
  for(i = 0; i < size; i++)
  {
    if((zrow & (1 << i)) != 0)
    {
      for(j = 0; j < size; j++)
      {
	matrix[i][j] = 0;
      }
    }
  }
  for(i = 0; i < size; i++)
  {
    if((zcol & (1 << i)) != 0)
    {
      for(j = 0; j < size; j++)
      {
	matrix[j][i] = 0;
      }
    }
  }
  for(i = 0; i < size; i++)
  {
    for(j = 0; j < size; j++)
    {
      printf("%d\t", matrix[i][j]);
    }
    printf("\n");
  }
  return 0;
}
*/


// lexical sort
#include<stdio.h>
#include<string.h>
main()
{
  char str[100] = {0};
  gets(str);
  int i , len = strlen(str), pos;
  for( i = len-1; i > 0; i--)
  {
    if(str[i] < str[i-1])
    {
      pos = i-1;
      break;
    }
  }
  char temp, diff, min = 9999;
  int pos2, j;
  for(i = pos+1; i < len; i++)
  {
    diff = str[pos] - str[i];
    if((diff > 0) && (diff < min))
    {
      min = diff;
      pos2 = i;
    }
  }
  temp = str[pos];
  str[pos] = str[pos2];
  str[pos2] = temp;
  for(i = pos+1; i < len; i++)
  {
    for(j = pos+1; j < len; j++)
    {
      if(str[j] < str[j+1])
      {
	temp = str[j];
	str[j] = str[j+1];
	str[j+1] = temp;
      }
    }
  }
  puts(str);
}
