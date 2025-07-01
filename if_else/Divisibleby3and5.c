#include<stdio.h>
int main (){
int n;
printf("Enter postive integer ");
scanf("%d",&n);
  
  if (n%5==0&&n%3==0)
  {
    printf("It is divisble by both 5 and 3");
  }
   else{

    printf("It is not divisble by both 5 and 3");
   }
  
    return 0;
}