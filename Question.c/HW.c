#include<stdio.h>
int main (){
int a;
printf("Enter Power  :");
scanf("%d",&a);
int power=1;
for (int  i = 1; i <= a; i++)
{
 power=power*2;
 
   
}
printf("2 raised to the power %d is %d\n",a,power);
 
    return 0;
}