#include <stdio.h>
int main()
{
    int a;
    printf("Enter A :");
    scanf("%d", &a);
    int b;
    printf("Enter B :");
    scanf("%d", &b);
    a = a + b; // swap without Thrid Integer
    b = a - b;
    a = a - b;
    printf("Value of A is :%d\n", a);
    printf("Value of B is :%d", b);

    return 0;
}