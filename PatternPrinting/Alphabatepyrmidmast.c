#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a = i - 1;
        for (int j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int x = 1; x <= i; x++)
        {
            printf("%c", 64 + x);
        }

        for (int y = 1; y <=i-1; y++)
        {
            printf("%c",64+a);
            a=a-1;
        }

        printf("\n");
    }
    return 0;
}