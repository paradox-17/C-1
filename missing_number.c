#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n1, n2, i, j;
    scanf("%d", &n1);
    int arr1[n1];
    for(i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);
    scanf("%d", &n2);
    int arr2[n2];
    for(i = 0; i < n2; i++)
        scanf("%d", &arr2[n2]);
    
    for(i = 0; i < n1; i++)
    {
        for(j = ; j < n1; j++)
        {
            if(arr1[i] == 0)
                break;
            if(arr1[i] == arr1[j])
            {
                count1++;
                arr1[j] = 0;
            }
            if(arr1[i] == arr2[j])
            {
                count2++;
                arr2[j] = 0;
            }
        }
        if()
    }
    return 0;
}
