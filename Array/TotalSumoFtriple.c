#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int TotalTriplets = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i + 1; j < 8; j++)
        {
            for (int k = j+1; k < 8; k++)
            {
                
            if (arr[i] + arr[j] +arr[k] == n)
            {
                TotalTriplets++;
                printf("(%d %d %d)\n", arr[i], arr[j] ,arr[k]);
            }
            }
            
        }
    }

    printf("%d", TotalTriplets);
    return 0;
}