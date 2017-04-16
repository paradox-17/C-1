#include<stdio.h>
main()
{
	FILE *fp;
	fp = fopen("abc.txt", "r");
	char c;
	fseek(fp, -1, SEEK_END);
	int r = ftell(fp);
	fseek(fp, -2, SEEK_CUR);
	c = fgetc(fp);
	//printf("%c",c);
	while(r>0)
	{
		printf("%c", c);
		fseek(fp, -2, SEEK_CUR);
		c = fgetc(fp);
		r--;
	}
}
