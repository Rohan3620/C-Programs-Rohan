#include <stdio.h>
int main()
{
    int sum[5];
    int add = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Enter a Number : ");
        scanf("%d", &sum[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        add = add + sum[i];
    }
    printf("Sum of the Element %d", add);

    return 0;
}