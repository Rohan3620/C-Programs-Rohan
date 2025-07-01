#include<stdio.h>
typedef struct person
{
    int age;
    float weight;
}person;
void display(person *a){
printf("%d\n",a->age);
printf("%f\n",a->weight);
}
int main(){
person R;
R.age=23;
R.weight=75.5;
display(&R);
    return 0;
}