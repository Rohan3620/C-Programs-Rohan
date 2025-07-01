#include<stdio.h>
int main(){
FILE* ptr=fopen("pw.txt","w");
char str[1000]="PW is the worst platform";
fputs(str,ptr);
fclose(ptr);
    return 0;
}