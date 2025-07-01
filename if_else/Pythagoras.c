#include <stdio.h>
int main()
{
    int a;
    printf("Enter 1st side of triangle:");
    scanf("%d", &a);
    int b;
    printf("Enter 2nd side of triangle:");
    scanf("%d", &b);
    int c;
    printf("Enter 3rd side of triangle:");
    scanf("%d", &c);
    if ((a*a)+(b*b)==(c*c))
    {
        printf("\nValid Right Triangle");
    }
    else
    {
        printf("\nInvaild Right Triangle");
    }

    return 0;
}