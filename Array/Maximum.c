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
    int max = INT_MIN; // int max=-1;(it work for only +integrers)
    // int max=arr[0] it also work we to put first no of element
    // int min is the minmum number for c
    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    printf("Maximum number is %d", max);

    return 0;
}