#include <stdio.h>
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int Evensum = 0;
    int Oddsum = 0;
    for (int i = 0; i < 7; i++)
    {
        if (i % 2 == 0)
        {
            Evensum += arr[i];
        }
        else
        {
            Oddsum += arr[i];
        }
    }
    printf("%d ", Evensum - Oddsum);
    return 0;
}