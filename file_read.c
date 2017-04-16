#include<stdio.h>
main()
{
	FILE *fp;
	fp = fopen("abc.txt", "r");
	char c;
	c = fgetc(fp);
	while(c != EOF)
	{
		printf("%c", c);
		c = fgetc(fp);
	}
}
