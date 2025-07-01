#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a Number : ");
        scanf("%d", &arr[i]);
    }
    int min = INT_MAX;

    for (int i = 0; i < 5; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("Minimum number is %d", min);

    return 0;
}