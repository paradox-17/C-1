#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int choosePivot(int left, int right)
{
    int r = rand();
    r = r % (right - left + 1);
    return (left + r);
}

void quicksort(int arr[], int left, int right)
{
    if(left < right)
    {
        int pivot = choosePivot(left, right);
        swap(&arr[pivot], &arr[left]);
        int i, j = left;
        for(i = left+1; i <= right; i++)
        {
            if(arr[i] < arr[left])
            {
                j++;
                swap(&arr[j], &arr[i]);
            }
        }
        swap(&arr[j], &arr[left]);
        quicksort(arr, left, j-1);
        quicksort(arr, j+1, right);
    }
}


int main()
{
    int n;
    printf("Enter size of array ");
    scanf("%d", &n);
    int i, arr[n];
    printf("Enter elements of array ");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    quicksort(arr, 0, n-1);
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
