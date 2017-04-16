#include<stdio.h>

void merge(int arr[], int left, int mid, int right);

void sort(int arr[], int left, int right)
{
    if(left < right)
    {
        int mid = (left + right) / 2;
        sort(arr, left, mid);
        sort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

void merge(int arr[], int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int t1[n1], t2[n2];
    int i, j, k;
    for(i = 0; i < n1; i++)
        t1[i] = arr[left + i];
    for(j = 0; j < n2; j++)
        t2[j] = arr[mid +j + 1];
    i = 0;
    j = 0;
    k = left;
    while((i < n1) && (j < n2))
    {
        if(t1[i] <= t2[j])
        {
            arr[k] = t1[i];
            i++;
        }
        else
        {
            arr[k] = t2[j];
            j++;
        }
        k++;
    }
    while(i < n1)
    {
        arr[k] = t1[i];
        i++;
        k++;
    }
    while(j < n2)
    {
        arr[k] = t2[j];
        j++;
        k++;
    }
}

int main()
{
    int i, arr[5] = {0};
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    sort(arr, 0, 4);
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
