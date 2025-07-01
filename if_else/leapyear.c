#include<stdio.h>
int main(){
int year;
printf("Enter Year : ");
scanf("%d",&year);
if (year%4==0)
{
   printf("It is leap year");
}
else{
 printf ("It is Not a leap year");
}



   return 0;
}