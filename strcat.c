#include<stdio.h>
main()
{
	char str1[5] = "Hello", str2[6] = " World";
	int i = 0, j;
	while(str1[i] != '\0')
	{
		i++;
	}
	for(j = 0; str2[j] != '\0'; j++)
	{
		str1[i++] = str2[j];
	}
	for(i = 0; str1[i] != '\0'; i++)
	    printf("%c", str1[i]);
}
