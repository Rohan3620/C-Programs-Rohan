#include <stdio.h>

int main() {
    int arr[100];
    int i, j, temp, minidx, min;
    int n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

for (int i = 0; i < n-1; i++)
{
    int minidx=i;
    for (j  = i+1; j < n; j++)
    {
        if (arr[j]<arr[minidx]) minidx=j;
    }
    int temp=arr[i];
    arr[i]=arr[minidx];
    arr[minidx]=temp;
}



    printf("\nAfter sort:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
