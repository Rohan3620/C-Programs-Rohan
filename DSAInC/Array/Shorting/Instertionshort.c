#include <stdio.h>
int main()
{
    int arr[100];
    int i, j,temp;
    int n;
    printf("Enter number of element in array :  ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int key =arr[i];
         int j=i-1;
         while (j>=0 && arr[j]>key)
         {
            arr[j+1]=arr[j];
            j--;
         }
         arr[j+1]=key;
         
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}