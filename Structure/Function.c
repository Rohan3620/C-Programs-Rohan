#include <stdio.h>
#include <string.h>
typedef struct pokemon // golbal decration of datatype
{
    int hp;
    int speed;
    int attack;
    char tier;
    char name[50];
} pokemon;
void fun(pokemon p)
{
    printf("%d", p.hp);
    return;
}
void change(pokemon p){//it prove it pass my value
  p.hp=70;
  p.speed=10;
  p.attack=19;
  
}
int main()
{
    pokemon pikachu;
    pikachu.hp = 100;
    pikachu.attack = 200;
    pikachu.speed = 1000;
    pikachu.tier = 'A';
    // fun(pikachu);
    change(pikachu);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    printf("%d\n", pikachu.attack);
    return 0;
}