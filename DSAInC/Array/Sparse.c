#include <stdio.h>

#define MAX 10

struct Element {
    int row;
    int col;
    int value;
};

int main() {
    int matrix[MAX][MAX], rows, cols, i, j, count = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
            if (matrix[i][j] == 0) {
                count++;
            }
        }
    }

    if (count > (rows * cols) / 2) {
        printf("The matrix is sparse.\n");

        struct Element triplex[rows * cols];  
        int k = 0;

        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                if (matrix[i][j] != 0) {
                    triplex[k].row = i;
                    triplex[k].col = j;
                    triplex[k].value = matrix[i][j];
                    k++;
                }
            }
        }

        printf("Triplex representation of the sparse matrix:\n");
        printf("Row\tColumn\tValue\n");
        for (i = 0; i < k; i++) {  
            printf("%d\t%d\t%d\n", triplex[i].row, triplex[i].col, triplex[i].value);
        }
    } else {
        printf("The matrix is not sparse.\n");
    }

    return 0;
}
