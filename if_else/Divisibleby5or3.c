#include<stdio.h>
int main(){
int n;
printf("Enter a Number : ");
scanf("%d",&n);
if (n%5==0||n%3==0)
{
  printf("%d is Divsible by either 3 or 5\n",n);
}
else printf("%d neither from 3 nor from 2 ",n);




  return 0;
}