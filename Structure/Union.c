#include <stdio.h>
#include <string.h>
typedef union pokemon
{
    int hp;
    int attacks;
    int speed;
    char tier;
    char name[15];
    }    pokemon;

    int main()
    {
        pokemon pikachu;
        pikachu.hp=60;
        pikachu.attacks=70;
        pikachu.speed=100;
        pikachu.tier ='A';
        // strcpy(pikachu.name,"Pikachu");

        printf("%d\n", pikachu.hp);
        printf("%d\n", pikachu.attacks);
        printf("%d\n", pikachu.speed);
        printf("%c\n", pikachu.tier);
        // printf("%s\n", pikachu.name);

        return 0;
    }