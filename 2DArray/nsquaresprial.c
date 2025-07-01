#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    int value = 1;

    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;

    while (value <= n * n) {
        // Fill the top row from left to right
        for (int i = left; i <= right; i++) {
            matrix[top][i] = value++;
        }
        top++;

        // Fill the right column from top to bottom
        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = value++;
        }
        right--;

        // Fill the bottom row from right to left
        for (int i = right; i >= left; i--) {
            matrix[bottom][i] = value++;
        }
        bottom--;

        // Fill the left column from bottom to top
        for (int i = bottom; i >= top; i--) {
            matrix[i][left] = value++;
        }
        left++;
    }

    // Print the matrix
    printf("The spiral matrix is:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
