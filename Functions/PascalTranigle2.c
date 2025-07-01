#include <stdio.h>

int main()
{
    int n;
    printf("Enter N :");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }

        int First = 1;

        for (int j = 0; j <= i; j++)
        {

            printf("%d ", First);
            First = First * (i - j) / (j + 1);
        }
        printf("\n");
    }

    return 0;
}