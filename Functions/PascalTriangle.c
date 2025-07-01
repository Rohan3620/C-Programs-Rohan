#include <stdio.h>
int Factorial(int x)
{
    int fact = 1;
    for (int i = 2; i <= x; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int Combination(int n, int r)
{
    int ncr = Factorial(n) / (Factorial(r) * Factorial(n - r));
    return ncr;
}

int main()
{
    int n;
    printf("Enter a N :");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {

        for (int k = 1; k <= n - i; k++)
        {
            printf(" ");
        }

        for (int j = 0; j <= i; j++)
        {
            int x = Combination(i, j);
            printf("%d ", x);
        }

        printf("\n");
    }

    return 0;
}