#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);
   
    for (int i = 1; i <= n; i++)
    {     int a = n+1;
        for (int j = 1; j<= n-i; j++)
        {
            printf(" ");
        }
       for (int  k = 1; k<= i; k++)
       {
         printf("*");
       }
      printf("\n"); 
    }

    return 0;
}