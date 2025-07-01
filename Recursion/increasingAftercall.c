#include<stdio.h>
int print(int n)
{
    if (n==0)  return 0;
    print(n-1);
     printf("%d\n",n);
     return 0;
}
int main(){
int n;
printf("Enter a Number : ");
scanf("%d",&n);
print(n);
    return 0;
}