#include<stdio.h>
int main (){
 int r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    int sum=0;

    int arr[r][c];
    // Input for the 1st Matrix
    printf("Enter values for the 1st Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", arr[i][j]);
        }
      printf("\n");
    }
    for (int i = 0; i < r; i++)
    {
       for (int j = 0; j < c; j++)
       {
        sum+=arr[i][j];
       }
       
    }
    printf("\n");
    printf("Sum of the give matrix is %d",sum);

    return 0;
}