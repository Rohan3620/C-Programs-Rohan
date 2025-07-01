#include<stdio.h>
 int main (){
 int n;
printf("Enter the no :");
scanf("%d",&n);
for (int i = n; i <= n*10; i=i+n)
{
   printf("\n%d ",i);
} 

    return 0;
 }