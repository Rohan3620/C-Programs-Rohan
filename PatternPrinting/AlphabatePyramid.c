#include<stdio.h>
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
           
        for (int k = 1; k<= a; k++)
        {  
            printf("%c",64+k);
        }
        a = a + 2;
        printf("\n");
    }

    return 0;
}