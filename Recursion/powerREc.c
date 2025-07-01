#include <stdio.h>

int Power(int a, int b) {
    if (b == 0) 
        return 1;
    return a * Power(a, b - 1);
}

int main() {
    int a, b;
    
    printf("Enter Base: ");
    scanf("%d", &a);
    
    printf("Enter Exponent: ");
    scanf("%d", &b);
    
    int result = Power(a, b);
    
    printf("%d\n", result);
    
    return 0;
}
