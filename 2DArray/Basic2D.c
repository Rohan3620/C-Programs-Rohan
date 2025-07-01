#include <stdio.h>
int main()
{
    int arr[4][4] = {{1, 2, 4, 5}, {3, 4, 6, 7}, {1, 4, 8, 2}, {5, 9, 2, 3}};
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}