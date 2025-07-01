#include <stdio.h>
int main()
{
    int x;
    printf("Enter a Row :");
    scanf("%d", &x);
    int y;
    printf("Enter a Columb :");
    scanf("%d", &y);
  
    for (int i = 1; i <= x; i++)
    {
        for (int j = 1; j <= y; j++)
        {    
            if (i == 1 || j == 1 || i == x || j == y)
                printf("*");
                  
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}