#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);
    int count =0;

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i >7; i++)
    {
        if (arr[i] > n)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}