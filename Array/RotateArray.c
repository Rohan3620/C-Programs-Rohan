#include <stdio.h>

void reverse(int arr[], int si, int ei) // si = starting index, ei = ending index
{
    for (int i = si, j = ei; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter an element of the array: ");
        scanf("%d", &arr[i]);
    }

    int k;
    printf("Enter k: ");
    scanf("%d", &k);
    k = k % n; // In case k is greater than the size of the array

    reverse(arr, 0, n - 1);    // Reverse the entire array
    reverse(arr, 0, k - 1);    // Reverse the first k elements
    reverse(arr, k, n - 1);    // Reverse the rest of the array

    for (int i = 0; i < n; i++) // Corrected loop boundary
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
