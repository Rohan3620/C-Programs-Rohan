#include<stdio.h>
int main(){
int n;
printf("Enter a row number :");
scanf("%d",&n);
int x;
printf("Enter a columb number :");
scanf("%d",&x);
for (int  i =1 ; i <= n; i++)//outer loop is line
{
   for (int  i = 1; i <=x; i++)//inner loop is the in each line
   {
    printf("* ");
   }
printf("\n");
}


    return 0;
}