#include <stdio.h>
int main()
{
    int a;
    printf("Enter the first number   :");
    scanf("%d", &a);
    int b;
    printf("Enter the second number  :");
    scanf("%d", &b);
    int c;
    printf("Enter the thrid number   :");
    scanf("%d", &c);
    int d;
    printf("Enter the fourth number  :");
    scanf("%d", &d);
    if (a > b && a > c && a > d)
    {
        printf("%d is the greatest", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("%d is the greatest", b);
    }
    if (c > a && c > b && c > d)
    {
        printf("%d is the greatest", c);
    }
    if (d > a && d > b && d > c)
    {
        printf("%d is the greatest", d);
    }

    return 0;
}
