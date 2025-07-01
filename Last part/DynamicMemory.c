#include<stdio.h>
#include<stdlib.h>
int main(){
int* ptr=(int*)malloc(100*4);
int* qtr=(int*)calloc(10,4);
printf("%d\n",*ptr);
printf("%d",*qtr);

    return 0;
}