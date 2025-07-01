#include <stdio.h>
int finbonacci(int x)
{     if (x == 0) return 0;  // Special case for F(0)
    if (x == 1) return 1;  // Special case for F(1)
    int sum;
    int a = 0;
    int b = 1;
    for (int i = 2; i <= x; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    int fib = finbonacci(n);
    printf("The %dth fibonaic term is %d\n ", n, fib);

    return 0;
}