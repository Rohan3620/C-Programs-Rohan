#include <stdio.h>

int main()
{
    int arr[100], m, l, r, x, n, i, found = 0;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements in sorted (ascending) order: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &x);

    l = 0;
    r = n - 1;

    while (l <= r)
    {
        m = (l + r) / 2;

        if (arr[m] == x)
        {
            printf("Number is found at index %d!\n", m);
            found = 1;
            break;
        }
        else if (x > arr[m])
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }

    if (!found)
    {
        printf("Number not found.\n");
    }

    return 0;
}
