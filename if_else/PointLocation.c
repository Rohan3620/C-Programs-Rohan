#include<stdio.h>
int main(){
    int x,y;
     printf("Enter the corrdinate : ");
     scanf("%d %d" ,&x ,&y);
     if (x==0 && y==0){
        printf("Lies on orgin");
     }
     else if (y==0){
        printf("Lies on X-axis");
     }
     else if (x==0) {
        printf("Lies on Y-axis");
     }
     else{
        printf("The point does not lies on x and y axis");
     }
     







   return 0;
}