#include<stdio.h>
 int main(){
int  sp, cp ,p,l;
printf("Enter Selling price :");
scanf("%d",&sp);
printf("\nEnter cost price    :");
scanf("\n%d",&cp);

if (sp>cp)
{
    printf("Profit = ");
    p=sp-cp;
    printf("%d",p);
    
}
else if(cp>sp){

    printf("Loss = ");
    l=cp-sp;
    printf("%d",l);
}
else{
    printf("no profit no loss");
}
 





    return 0;
 }