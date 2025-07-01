//Write program to find largest number out of three
#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    printf("Enter 3rd Number: ");
    scanf("%d", &c);

    if (a > b && a > c)
    {
        printf("%d is the largest number\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest number\n", b);
    }
    else
    {
        printf("%d is the largest number\n", c);
    }

    return 0;
}
