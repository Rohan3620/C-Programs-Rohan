#include <stdio.h>
void insert(int arr[], int *n, int indx, int value)
{
    int i;
    for (i = *n; i > indx; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[indx] = value;
    (*n)++;
}

void del(int arr[], int *n, int indx)
{
    int i;
    for (i = indx; i < *n; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}
void merge(int arr1[], int arr2[], int *n1, int n2)
{
    int i;
    for (int i = 0; i < n2; i++)
    {
        arr1[*n1 + i] = arr2[i];
    }
    *n1 += n2;
}

void printaarr(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void revers(int arr[], int n)
{
    int l = 0, r = n - 1, temp;
    while (l < r)
    {
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5};
    int brr[5] = {6, 7, 8, 9, 10};
    int size = 5, n = 5;
    printaarr(arr, size);
    insert(arr, &size, 4, 10);
    printaarr(arr, size);
    del(arr, &size, 4);
    printaarr(arr, size);
    merge(arr, brr, &size, n);
    printaarr(arr, size);
    revers(arr, size);
    printaarr(arr, size);
    return 0;
}