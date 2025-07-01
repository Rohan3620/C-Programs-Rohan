#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    int a[n][m];

    // Input for the Matrix
    printf("Enter values for the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int l1, r1, l2, r2;
    printf("Enter the coordinates (l1, r1): ");
    scanf("%d %d", &l1, &r1);
    printf("Enter the coordinates (l2, r2): ");
    scanf("%d %d", &l2, &r2);

    int sum = 0;

    // Sum the elements within the submatrix from (l1, r1) to (l2, r2)
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += a[i][j];
        }
    }

    printf("The sum of the rectangle from (%d, %d) to (%d, %d) is %d\n", l1, r1, l2, r2, sum);

    return 0;
}
