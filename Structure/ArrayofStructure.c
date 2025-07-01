#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct pokemon
    {
        int hp;
        int speed;
        int attacks;
        char tier;
        char name[15];
    } pokemon;
    pokemon arr[3];
    arr[0].attacks = 50;
    arr[0].hp = 100;
    arr[0].speed = 30;
    arr[0].tier = 'A';
    strcpy(arr[0].name, "charizard");

    arr[1].attacks = 500;
    arr[1].hp = 900;
    arr[1].speed = 70;
    arr[1].tier = 'B';
    strcpy(arr[1].name, "Mewtwo");
    arr[2].attacks = 70;
    arr[2].hp = 400;
    arr[2].speed = 90;
    arr[2].tier = 'C';
    strcpy(arr[2].name, "Pikachu");
    for (int i = 0; i <= 2; i++)
    {
        printf("%s\n", arr[i].name);
        printf("Attacks : %d\n", arr[i].attacks);
        printf("HP : %d\n", arr[i].hp);
        printf("Speed : %d\n", arr[i].speed);
        printf("Tier : %c\n\n", arr[i].tier);
    }

    return 0;
}