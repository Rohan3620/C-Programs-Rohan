#include<stdio.h>
int main(){
int n;
printf("Enter a number :");
scanf("%d",&n);
// if(n%5==0||n%3==0){
//    if (n%15!=0)
//    {
//     printf("Its is divisble by 5 or 3 but not 15");
//    }
//    else{
//      printf("Its is divisble by 15");
//    }
// } else{
//     printf("Its is not divisble by 5 or 3");
// }
  
  if ((n%5==0||n%3)&&n%15!=0)
  {
    printf("its is divisble by 3 or 5");
  }
   else{
    printf("its is not divisble by 5 or 3");


   }
   
   
  
 


return 0;
}