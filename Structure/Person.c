#include<stdio.h>
#include<string.h>
int main(){
    struct Person
    {
        char name[50];
        int  age;
        float salary;
    }a,b;
    strcpy(a.name,"Rohan");
    a.age= 45;
    a.salary=1200.40;
    strcpy(b.name,"krishna");
    b.age= 55;
    b.salary=1500.40;
    printf("%s\n",a.name);
    printf("%d",b.age);
    
    return 0;
}