#include<stdio.h>
int main (){
int  x1 ,x2 , x3  , y1 , y2 , y3;
printf("Enter the point :");
scanf("%d", &x1);
printf("Enter the point :");
scanf("%d", &x2);
printf("Enter the point :");
scanf("%d", &x3);
printf("Enter the point :");
scanf("%d", &y1);
printf("Enter the point :");
scanf("%d", &y2);
printf("Enter the point :");
scanf("%d", &y3);

double m1= (y2-y1)/(x2-x1);
double m2= (y3-y2)/(x3-x2);
if (m1==m2)
{
    printf("It is a straight line");
}
 else{
    printf("It is not straight line");
 }


 







 return 0;
}