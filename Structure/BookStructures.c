#include<stdio.h>
#include<string.h>
int main(){
typedef struct Books
{
  char name[50];
  int pages;
 float price;
}Books;
Books a;
a.price=400.11;
a.pages=100;
strcpy(a.name,"Rohan ");
printf("%d\n",a.pages);
printf("%f\n",a.price);
printf("%s\n",a.name);
Books b;
b.price=4001.11;
b.pages=1001;
strcpy(b.name,"Mishra ");
printf("%d\n",b.pages);
printf("%f\n",b.price);
printf("%s\n",b.name);
    return 0; 
}