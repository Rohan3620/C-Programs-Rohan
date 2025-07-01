#include<stdio.h>
int fun(int n){
 if (n==0) return 1;
  else return n*fun(n-1);
 }
int main()
{
    int n,x;
    printf("Enter Nubmber : ");
    scanf("%d",&n);
    if (n< 0)  printf("Answer = N/A \nEnter a postive Number.\n");
  else printf("Answer = %d",fun(n));
  return 0;
}
