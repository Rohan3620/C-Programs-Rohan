#include<stdio.h>
#include<stdlib.h>
int main(){
int* ptr= malloc(10*4);
printf("%p\n",ptr);
ptr=realloc(ptr,20*4);
printf("%p",ptr);


    return 0;
}