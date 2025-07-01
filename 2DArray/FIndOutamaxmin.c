#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of Rows : ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of col : ");
    scanf("%d", &m);
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    int min = arr[0][0];
    int maxi = 0, maxj = 0;
    int mini = 0, minj = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                maxi = i;
                maxj = j;
            }

            if (min > arr[i][j])
            {
                min = arr[i][j];
                mini = i;
                minj = j;
            }
        }
    }

    printf("Maximum number is %d at position [%d][%d]\n", max, maxi, maxj);
    printf("Minimum number is %d at position [%d][%d]\n", min, mini, minj);

    return 0;
}