#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of rows   : ");
    scanf("%d", &n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int maxadd = 0;
    int max = 0;
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

    // Compute and print the sum of each row
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += a[i][j];
        }
        if (maxadd < sum)
        {
            maxadd = sum;
            max = n;
        }
    }
    printf("Maxium Sum of rows is %d and row number is %d", maxadd, max);

    return 0;
}
