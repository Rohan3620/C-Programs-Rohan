#include <stdio.h>
int main()
{
    int n;
    printf("Enter Row    : ");
    scanf("%d", &n);
    int m;
    printf("Enter Columb : ");
    scanf("%d", &m);
    int arr[n][m];

    printf("Give the value of First Matrix \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int p;
    printf("Enter Row    : ");
    scanf("%d", &p);
    int o;
    printf("Enter Columb : ");
    scanf("%d", &o);
    int brr[p][o];

    printf("Give the value of second Matrix \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < o; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    int res[n][o];
    if (m == p)
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < o; j++)
            {
                // we are intersterd in i rows of arr and j columb of brr
                // a[i][0],a[i][1].......
                // b[0][j],b[1][j].......
                // int res[i][j] = a[i][k]*b[k][j];
                res[i][j] = 0;
                for (int k = 0; k < m; k++)
                {
                    res[i][j] += arr[i][k] * brr[k][j];
                }
            }
        }
        printf("Answer is : \n");
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < o; j++)
            {
                printf("%d ", res[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("This Matrix Can't Multiply");
    }
    return 0;
}