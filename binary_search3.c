#include<stdio.h>
int search(int first, int last, int arr[], int val)
{
	if(first > last)
	return -1;
	
	int mid = (first+last) / 2;
	if(arr[mid] > val)
	{
		last = mid-1;
		return search(first, last, arr, val);
	}
	else if(arr[mid] < val)
	{
		first = mid+1;
		return search(first, last, arr, val);
	}
	else
		return mid;
}
int min_search(int first, int last, int arr[], int val)
{
	if(first > last)
	return -1;
	
	int mid = (first+last) / 2;
	if(arr[mid] < val)
	{
		val = arr[mid];
		last = mid-1;
		return search(first, last, arr, val);
	}
	else if(arr[mid] > val)
	{
		first = mid+1;
		return search(first, last, arr, val);
	}
	else
		return mid;
}
int main()
{
	int size, i, value;
	
        printf("Enter size of array ");
	scanf("%d", &size);
    
	int array[size];
	
	printf("Enter elements of array ");
	for(i = 0; i < size; i++)
	{
	    scanf("%d", &array[i]);
	}
	
	printf("Enter value to be searched ");
	scanf("%d", &value);
	
	int rotate;
	
	printf("How many times do you want to rotate the array ");
	scanf("%d", &rotate);
	
	int temp;
	
	while(rotate > 0)
	{
		temp = array[size-1];
		for(i = (size-2); i >= 0; i--)
		{
			array[i+1] = array[i];
		}
		array[0] = temp;
		rotate--;
	}
	
	for(i = 0; i < size; i++)
	{
	    printf("%d ", array[i]);
	}
	
	
	printf("\n");
	int pos = -1, first = 0, last = size-1;
	/*for(i = 0; i < size-1; i++)
	{
		if(array[i] > array[i+i])
		{
		    pos = i;
		    break;
		}
	}
	*/
	pos = min_search(first+1, last, array, array[0]);
	int result1 = -1;
	
	if(pos == -1)
	{
		result1 = search(first, last, array, value);
		if(result1 == -1)
		    printf("Element not found\n");
		else
		    printf("Element found at %d\n", result1);
	}
	else
	{
		result1 = search(first, pos, array, value);		
		if (result1 != -1)
    		printf("Element found at %d\n", result1);
		else
		{
    		result1 = search(pos+1, last, array, value);
    		if(result1 != -1)
        		printf("Element found at %d\n", result1);
    		else
				printf("Element not found\n");
		}
	}
	return 0;
}
/*
result2 = search(pos+1, last, array, value);
		if(result1 != -1)
		    printf("Element found at %d", result1);
		else if (result2 != -1)
		    printf("Element found at %d", result2);
	    else
	    printf("Element not found");
*/
