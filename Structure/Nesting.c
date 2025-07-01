#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attack;
        char tier;
        char name[50];
    } pokemon;
    typedef struct legendary
    {
        pokemon normal;
        char ability[10];
    } legendary;

    legendary mewtwo;
    mewtwo.normal.attack = 100;
    mewtwo.normal.hp = 20;
    mewtwo.normal.speed = 100;
    mewtwo.normal.tier = 'a';
    strcpy(mewtwo.ability, "Pressure");
    typedef struct god
    {
        legendary speical;
        int specialattack;
    } god;
    god z;
    z.specialattack = 100;
    z.speical.normal.speed = 1000;

    return 0;
}