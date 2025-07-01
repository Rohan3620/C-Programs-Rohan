//Program to print a pattern 
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
    int a = 1;
    for (int i = 1; i <= n; i++)
    {    
        int x=n-i;
        for (int j = 1; j <= x; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= a; j++)
        {
            printf("%d",j);
        }
        a = a + 2;
        printf("\n");
    }

    return 0;
}