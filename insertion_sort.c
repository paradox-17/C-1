#include<stdio.h>
int main()
{
	int size, i ,j;
	printf("Enter size of array ");
	scanf("%d", &size);
	int array[size];
	for(i = 0; i < size; i++)
	{
	    scanf("%d", &array[i]);
	}
	int temp;
	for(i = 1; i < size; i++)
	{
	    temp = array[i];
	    j = i - 1;
	    while( ( temp < array[j] ) && ( j >= 0 ) )
	    {
		array[j+1] = array[j];
		j = j - 1;
	    }
            array[j+1] = temp;
	}
	printf("\n");
	for(i = 0; i < size; i++)
	    printf("%d ", array[i]);
	return 0;
}
