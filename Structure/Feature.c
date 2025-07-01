#include<stdio.h>
#include<string.h>
int main(){
 typedef struct 
 pokemon
 {
  int hp;
  int speed;
  int attacks;
  char tier ;
  char name[15];
 }pokemon;
 pokemon a,b,c;
 a.attacks =100;
 a.hp=90;
 a.tier='A';
strcpy(a.name,"efrea");
b=a;//deep copy
printf("%d",b.attacks);


  return 0;
}