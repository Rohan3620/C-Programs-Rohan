#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int sum[n];
    int add = 0;
    for (int i = 0; i < n; i++)
    {
        printf("Enter a Number : ");
        scanf("%d", &sum[i]);
    }
    for (int i = 0; i < n; i++)
    {
        add = add + sum[i];
    }
    printf("Sum of the Element %d", add);

    return 0;
}