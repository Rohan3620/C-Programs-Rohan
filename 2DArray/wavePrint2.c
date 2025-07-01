#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Rows    : ");
    scanf("%d", &n);
    int m;
    printf("Enter a Columbs : ");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < m; i++)
    {
        if (i % 2 != 0)
        {

            for (int j = 0; j < n; j++)
            {
                printf("%d ", arr[j][i]);
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                printf("%d ", arr[j][i]);
            }
        }
        printf("\n");
    }

    return 0;
}