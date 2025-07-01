#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++)
    {   
        printf("Enter Element : ");
        scanf("%d", &arr[i]);
    }

    int flag = 0; // Initialize flag to zero

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            flag = 1; // Not a palindrome
            break;
        }
    }

    if (flag == 1)
    {
        printf("Not Palindrome\n");
    }
    else
    {
        printf("Palindrome\n");
    }

    return 0;
}
