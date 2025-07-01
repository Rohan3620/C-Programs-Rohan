#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements of the array: ", n);
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter a number to search: ");
    scanf("%d", &x);

    int flag = 0; 
    int i;

    for (i = 0; i < n; i++){
        if (arr[i] == x){
            flag = 1;
            break;
        }
    }

    if (flag == 0){
        printf("%d is not present in the array.\n", x);
    }
    else{
        printf("%d is present in the array at index %d.\n", x, i);
    }

    return 0;
}
