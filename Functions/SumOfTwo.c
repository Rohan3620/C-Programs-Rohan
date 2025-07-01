#include <stdio.h>
int add(int a, int b)
{
    return a + b; // this is the function for add
}
int sub(int a, int b)
{
    return a - b; // this is the function for add
}
int main()
{
    int a;
    printf("Enter a Number :"); // for taking input
    scanf("%d", &a);
    int b;
    printf("Enter a Number :"); // for taking input
    scanf("%d", &b);
    int c;
    printf("Enter a Number :"); // for taking input
    scanf("%d", &c);
    int d;
    printf("Enter a Number :"); // for taking input
    scanf("%d", &d);
    int sum = add(a, b);
    printf("Sum of two number are %d \n", sum); // sum of first two number
    int subtract = sub(c, d);
    printf("Diffrence  of two number are %d \n", subtract); // subtract of first two number
    int Total = add(sum, subtract);
    printf("Total of Number are %d ", Total); // Total of Numbers
    

    return 0;
}