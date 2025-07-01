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

    int max = INT_MIN;
    int secondmax = INT_MIN;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] != max && secondmax < arr[i])
    //     {
    //         secondmax = arr[i];
    //     }
    // }

    for (int i = 0; i < 5; i++)
    {
        if (max < arr[i])
        {
            secondmax = max; // secondmax is now previous max
            max = arr[i];    // max is now a new
        }
        else if (secondmax < arr[i]&&max!=arr[i])
        {

            secondmax = arr[i];
        }
    }

    printf("Second Maximum number is %d", secondmax);

    return 0;
}
