#include <stdio.h>

int main() {
    int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int arr1[r][c];
    int arr2[r][c];
    int add[r][c];

    // Input for the 1st Matrix
    printf("Enter values for the 1st Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr1[i][j]);
        }
      printf("\n");
    }

    // Input for the 2nd Matrix
    printf("\nEnter values for the 2nd Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr2[i][j]);
        }
      printf("\n");
    }

    // Addition of the two matrices
    printf("\nResultant Matrix after Addition:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            add[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

    return 0;
}
