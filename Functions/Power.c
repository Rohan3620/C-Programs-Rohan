#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter a Number :");
    scanf("%d", &a);
    int b;
    printf("Enter a Power  :");
    scanf("%d", &b);
    int x = pow(a, b);
    printf("Answer is = %d", x);
    return 0;
}
