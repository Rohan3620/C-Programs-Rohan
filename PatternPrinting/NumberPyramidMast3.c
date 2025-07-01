#include <stdio.h>

int main() {
    int n ; 
    printf("Enter a Number :");
    scanf("%d",&n);
    
    // Outer loop for n
    for (int i = 0; i < n; i++) {
        // Print numbers from 1 to n-i
        for (int j = 1; j <= n - i; j++) {
            printf("%d", j);
        }
        
        // Print spaces
        for (int k = 0; k < 2 * i; k++) {
            printf(" ");
        }
        
        // Print numbers from n-i down to 1
        for (int l = n - i; l > 0; l--) {
            printf("%d", l);
        }
        
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}


