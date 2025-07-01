#include <stdio.h>
int stair(int n)
{
    if (n <= 2)
        return n;
    if (n == 3)
        return 4;
    int Total = stair(n - 1) + stair(n - 2) + stair(n - 3);
    return Total;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int ways = stair(n);
    printf("Answer is :%d", ways);

    return 0;
}