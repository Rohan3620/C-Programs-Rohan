#include<stdio.h>
#include<stdlib.h>
int main(){
    int* p;
int* ptr;
ptr=(int*) calloc(10,4);
p=ptr;// Starting per point
ptr++;
free(p);


    return 0;
}