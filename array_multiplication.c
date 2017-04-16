#include<stdio.h>
main()
{
        int i, array1[3]={3, 4, 5}, array2[3], array3[3];
	array2[0]=1;
	for(i = 1; i < 3; i++)
	{
		array2[i] = array2[i-1] * array1[i-1];
	}
	array3[2]=1;
	for(i = 1; i >= 0; i--)
	{
		array3[i] = array3[i+1] * array1[i+1];
	}
	for(i = 0; i < 3; i++)
	{
		array1[i] = array2[i] * array3[i];
		printf("%d ", array1[i]);
	}
}

/*
#include<stdio.h>
main()
{
    int i,array1[3], array2[3], array3[3];
    
    
}
*/
