// array rotation

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int n, k, q, i, temp, pos;
    scanf("%lld %lld %lld", &n, &k, &q);
    long long int arr[n];
    for(i = 0; i < n; i++)
        scanf("%lld", &arr[i]);
    k = k % n;
    while(k > 0)
    {
        temp = arr[n-1];
        for(i = n-1; i > 0; i--)
            arr[i] = arr[i-1];
        arr[0] = temp;
        k--;
    }
    for(i = 0; i < q; i++)
    {
        scanf("%lld", &pos);
        printf("%lld\n", arr[pos]);
    }
    return 0;
}
