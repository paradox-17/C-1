// check if there is an element whose left side is equal to right side
int chck(long int arr[], long int size)
{
    long long int i, j, sum1 = 0, sum2 = 0;
    for(i = 1; i < size-1; i++)
    {
        for(j = 0; j < size; j++)
        {
            if(j > i)
                sum2 += arr[j];
            else if(j < i)
                sum1 += arr[j];
        }
        if(sum1 == sum2)
            return 1;
        sum1 = 0;
        sum2 = 0;
    }
    return 0;
}

int main() {
    long int n, i, j, r;
    scanf("%ld", &n);
    long int size;
    for(i = 0; i < n; i++)
    {
        scanf("%ld", &size);
        long int arr[size];
        
        for(j = 0; j < size; j++)
            scanf("%ld", &arr[j]);
        
        r = chck(arr, size);
        
        if(r == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
