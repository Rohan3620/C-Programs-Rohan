#include <stdio.h>
int main()
{
    int n;
    int a, b;
    printf("1.Addition\n");
    printf("2.Subtration\n");
    printf("3.Multiplication\n");
    printf("4.Division\n");
    printf("5.Exit\n");
    do
    {
       

        printf("Enter choice : ");
        scanf("%d", &n);
         if (n == 5)
        {
            break;
        }
        printf("Enter 1st number : ");
        scanf("%d", &a);
        printf("Enter 2nd number : ");
        scanf("%d", &b);
        switch (n)
        {
        case 1:
            printf("Addtion : %d\n", a + b);
            break;
        case 2:
            printf("Subtraction : %d\n", a - b);
            break;
        case 3:
            printf("Multiplication : %d\n", a * b);
            break;
        case 4:
            printf("Division : %d\n", a / b);
            break;

        default:
            printf("Enter a vaild input ");
            break;
        }
    } while (n != 5);
    printf("Thank you ");
    return 0;
}