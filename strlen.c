#include<stdio.h>
int strlen(char *s)
{
    int i = 0;
    while(*s++)
        i++;
    return i;
}

main()
{
    string str;
    gets(str);
    int length = strlen(str);
    printf("Length of string is %d", length);
}
