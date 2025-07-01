#include <stdio.h>
void sum(int n, int add)
{
    if (n == 0)
    {
        printf("%d\n", add);
        return;
    }
    sum(n - 1, add + n);
    return;
}
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    sum(n, 0);

    return 0;
}