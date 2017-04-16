// binary search using iteration
#include<stdio.h>
main()
{
	int size, val, i, flag = 0;
	printf("Enter the size of array ");
	scanf("%d", &size);
	int array[size];
	printf("Enter elements of array ");
	for(i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
	}
	printf("Enter the element to be searched ");
	scanf("%d", &val);
	int n, frst = 0, last = size-1;
	while(frst <= last)
	{
		n = (frst+last) / 2;
		if(array[n] > val)
		{
			last = n-1;
		}
		else if(array[n] < val)
		{
			frst = n+1;
		}
		else
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	    printf("Element found at %d", n);
	else
	    printf("Element not found");
}
