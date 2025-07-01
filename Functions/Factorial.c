#include<stdio.h>
int Factorial(int a){
    int Fact =1 ;
    for (int i = 1; i <= a; i++)
    {
        
         Fact = Fact *i;
    
    }
     return Fact; 
}
int main (){
    int n;
    printf("Enter a Number :");
    scanf("%d",&n);
     int x = Factorial(n);
     printf ("The Factorial of %d is %d",n,x);
    return 0;
}