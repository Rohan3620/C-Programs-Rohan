#include<stdio.h>
int main (){
    printf("Odd number btween 1 to 100 are :\n");
for (int  i = 1; i < 100; i++)
{
  if (i%2==0) 
    {
     continue;
    }
    
      printf("%d ",i);
    }
      
   return 0;
}