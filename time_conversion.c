// input Format
// 12:05:45AM
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);
    int r, num = 0 ,a[3], k = 0;
    for(int i = 0; time[i] != '\0'; i++)
    {
        r = time[i];
        if(i == 8)
        {
            a[k] = num;
            k++;
            num = 0;
            break;
        }
        if(r != 58)
        {
            r -= 48;
            num = (num * 10) + r;
        }
        else
        {
            a[k] = num;
            k++;
            num = 0;
        }
    }
    if(r == 'P')
    {
        if(a[0] < 12)
            a[0] += 12;
    }
    else if( (r == 'A') && (a[0] == 12))
            a[0] = 0;
    for(int i = 0; i < 3; i++)
    {
        if(a[i] < 10)
            printf("0");
        printf("%d", a[i]);
        if(i < 2)
            printf(":");
    }
        
    return 0;
}
