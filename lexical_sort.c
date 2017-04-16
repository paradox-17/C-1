#include<stdio.h>
#include<string.h>
int main()
{
	char temp, str[10];
	int i, j, pos, pos2, dif, min=9999;
	gets(str);
	for(i = strlen(str)-1; i > 0; i--)
	{
		if(str[i] < str[i-1])
		{
			pos = i-1;
			break;
		}
	}
	printf("%d\n",pos);
	for(i = pos+1; i < strlen(str); i++)
	{
		dif = str[pos] - str[i];
		if(dif < min && dif>0)
		{
			pos2 = i;
			min = dif;
		}
	}
	printf("%d\n", pos2);

	temp = str[pos];
	str[pos] = str[pos2];
	str[pos2] = temp;

	puts(str);

	for(i = pos+1; i< strlen(str); i++)
	{
		for(j = pos+1; j < strlen(str); j++)
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
	return 0;
}
