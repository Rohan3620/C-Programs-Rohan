#include<stdio.h>
int main(){
 int n ;
 printf("Enter anumber :");
 scanf("%d",&n);
 int count=0;
 while (n!=0)
 {
   n=n/10;

    count++;
 }
  printf("The number of digit are %d ",count);
 




    return 0;
}