#include<stdio.h>
int main(){
int n,x,arr[100],i,flag=0;
printf("Enter the size of array : ");
scanf("%d",&n);
printf("enter the element of array : ");
for ( i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
}
printf("Enter a number to search : ");
scanf("%d",&x);

for ( i = 0; i < n; i++)
{
    if (arr[i]==x)
    {
        flag=1;
    }
}

if (flag==1)
{
    printf("Number found");
}
else printf("Number not found");

    return 0;
}