#include <stdio.h>
int main()
{
    int n;
    printf("Enter a arr : ");
    scanf("%d", &n);
    int arr[n];
    int Multiply = 1;
    for (int i = 0; i < n; i++)
    {
        printf("Enter a Number : ");
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        Multiply = Multiply * arr[i];
    }
    printf("arr of the Element %d", Multiply);

    return 0;
}