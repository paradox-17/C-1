#include<stdio.h>
int search(int arr[], int sizes, int sizeb, int val)
{
    //int mid = arr[sizes] + arr[sizeb];
	if(sizes >= sizeb)
	    return -1;
	
	int n = (sizes + sizeb) / 2;
        if(arr[n] > val)
	{
	    return search(arr, sizes, n-1, val);
	}
	else if(arr[n] < val)
	{
	    return search(arr, n+1, sizeb, val);
	}
	else
	{
	    return n;
    }
    return -1;
}
main()
{
    int size, value;
    printf("\nEnter size of array ");
	scanf("%d", &size);
    int array[size];
    printf("\nEnter elements of array ");
	for(i = 0; i < size; i++)
	{
	    scanf("%d", &array[i]);
	}
	printf("\nEnter value to be searched ");
	scanf("%d", &value);
	int result = search(array, 0, size-1, value);
	printf("\nResult is %d \n", result);
}
