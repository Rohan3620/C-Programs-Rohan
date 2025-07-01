#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number Of Rows   : ");
    scanf("%d", &n);
    int m;
    printf("Enter Number Of Columbs : ");
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
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = m - 1;
    int tne = m * n;
    int count = 0;
    while (count < tne)
    {
        // print the minumum row
        for (int j = minc; j <= maxc; j++)
        {
            printf("%d ", arr[minr][j]);
            count++;
        }
        minr++;
        if (count>=tne) break;
        // print the maximum column
        for (int i = minr; i <= maxr; i++)
        {
            printf("%d ", arr[i][maxc]);
            count++;
        }
        maxc--;
         if (count>=tne) break;
        // Print the maximum row
        for (int j = maxc; j >= minc; j--)
        {
            printf("%d ", arr[maxr][j]);
            count++;
        }
        maxr--;
         if (count>=tne) break;
        // print the mimumum column
        for (int i = maxr; i >= minr; i--)
        {
            printf("%d ", arr[i][minc]);
            count++;
        }
        minc++;
         if (count>=tne) break;
    }

    return 0;
}