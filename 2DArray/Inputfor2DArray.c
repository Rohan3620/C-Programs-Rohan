#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number of Rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter Number of Rows : ");
    scanf("%d", &m);

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Enter Elements : ");
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}