#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    int nsp = 0;
    int nst = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nst; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("*");
        }
        nst--;
        nsp += 2;
        printf("\n");
    }

    return 0;
}