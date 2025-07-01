#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    // Bitwise AND
    c = a & b;
    printf("AND Operator: %d\n", c);

    // Bitwise OR
    c = a | b;
    printf("OR Operator: %d\n", c);

    // Bitwise XOR
    c = a ^ b;
    printf("XOR Operator: %d\n", c);

    // Left shift
    c = a << 2;
    printf("Left Shift: %d\n", c);

    // Right shift
    c = a >> 2;
    printf("Right Shift: %d\n", c);

    // Bitwise NOT
    c = ~a;
    printf("Bitwise NOT: %d\n", c);

    return 0;
}
