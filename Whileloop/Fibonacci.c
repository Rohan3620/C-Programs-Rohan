#include<stdio.h>
int main (){
    
 int a=1, b=1,n;
 printf("Enter a Number :");
 scanf("%d",&n);
 int sum=1;
for (int i = 0; i < n-2; i++)
{
    sum = a+b;
    a=b;
    b=sum;
     
}
   printf("The %dth fibonaic term is %d\n ",n,sum); 

    return 0;
}