#include<stdio.h>
#define pi 3.141592
#define Area(r) (pi*r*r)
int main(){
  float a,x;
  printf("Enter radius");
  scanf("%d",&a);
  printf("%f\n",pi);
  x=Area(a);
  printf("%f",x);

}