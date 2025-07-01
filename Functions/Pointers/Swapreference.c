#include <stdio.h>
void swap(int *x, int *y) // fuction for swap ,*uses to address
{
    *x = *x + *y; // Step 1: Sum of x and y stored in x
    *y = *x - *y; // Step 2: Subtraction of original y from new x store in y
    *x = *x - *y; // Step 3: Subtraction of new y from the new x is store

    return;
}
int main()
{
    int a;
    printf("Enter A : ");
    scanf("%d", &a); // for enter a vlaue
    int b;
    printf("Enter B : ");
    scanf("%d", &b); // for enter second value

    swap(&a, &b);                        // use of swap function , "&" uses to address
    printf("The value of A is %d\n", a); // print the swap value
    printf("The value of B is %d", b);   // print the swap value

    return 0;
}