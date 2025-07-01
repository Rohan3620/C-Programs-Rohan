#include <stdio.h>
int powerlog(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int x = powerlog(a, b / 2);
    int recans = x * x;
    if (b % 2 != 0)
        recans *= a;
    return recans;
}
int main()
{
    int a;
    printf("Enter Base  : ");
    scanf("%d", &a);

    int b;
    printf("Enter Power : ");
    scanf("%d", &b);
    int result = powerlog(a, b);

    printf("Answer is %d\n", result);
    return 0;
}