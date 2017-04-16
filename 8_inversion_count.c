/*
print_sq(int n, int m)
{
    sq = n * n;
    for(int i = 0; i < m; i++)
    {
        printf( sq )
	sq = sq + (n<<1 + 1)
	n++
    }
}
*/
// Inversion Count
#include<stdio.h>

void swap(int *a, int *b)
{
  

int main()
{
  int n;
  scanf("%d", &n);
  int arr[n], i, j;
  for(i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  int temp, count = 0;
  for(i = 0; i < n; i++)
  {
    for(j = 0; j < n; j++)
    {
      if(arr[j] > arr[j+1])
      {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
	count++;
      }
    }
  }
  printf("%d", count);
  return 0;
}
	  
	
      
