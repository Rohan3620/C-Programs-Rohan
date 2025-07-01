#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int m;
    printf("Enter a Number : ");
    scanf("%d", &m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int brr[m][n];
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            brr[i][j] = arr[j][i];
        }
    }
    printf("Elements in brr (transposed arr):\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", brr[i][j]);
        }
        printf("\n");
    }

    return 0;
}