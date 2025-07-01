#include<stdio.h>
int main (){
int n;
printf("Enter a number :");
scanf("%d",&n);
int original =n ;

int r=0;
int sum;
while (n>0)
{
     r=r*10;
     r=r+(n%10);
     n=n/10;
    sum=r+original;
}
printf("The reverse of Given number is :%d",r);
printf("\nSum of number and its reverse is =%d+%d ", original,r);
printf("\n                                 = %d",sum );


    return 0;
}