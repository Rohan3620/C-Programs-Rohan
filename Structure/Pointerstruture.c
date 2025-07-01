#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    int attacks;
    int speed;
    char tier;
    char name[15];
} pokemon;
void change(pokemon *p)
{
    (*p).hp=70 ; //way to acess (*variable).
    p->attacks=70;//way to acesss variable->
    p->speed=70;
    p->tier='C';
 strcpy((*p).name, "Rikachu");

}
int main()
{
    pokemon pikachu={60,70,100,'A',"Pikachu"};
    // pikachu.hp = 60;
    // pikachu.attacks = 70;
    // pikachu.speed = 100;
    // pikachu.tier = 'A';
    // strcpy(pikachu.name, "Pikachu");
    pokemon *x = &pikachu;
    // printf("%p\n", x);
    // printf("%p\n", &pikachu.hp);
    // printf("%p\n", &pikachu.attacks);
    //  printf("%p\n", &pikachu.speed);
    // printf("%p\n", &pikachu.tier);
    // printf("%p\n", pikachu.name);
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attacks);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    printf("%s\n\n", pikachu.name);

    change(&pikachu);
  printf("Changed Data\n\n");
    printf("%d\n", pikachu.hp);
    printf("%d\n", pikachu.attacks);
    printf("%d\n", pikachu.speed);
    printf("%c\n", pikachu.tier);
    printf("%s\n", pikachu.name);
    return 0;
}