#include<stdio.h>
int main(){
struct pokemon
{   
    int hp;
    int speed;
    int attacks;
    char tier; //S,A,B,C;
}pikachu,charized;

printf("Enter attacks of pikachu");
    scanf("%d",&pikachu.attacks );
    pikachu.hp=50;
    pikachu.speed=100;
    pikachu.tier='A';
     charized.attacks=130;
    charized.hp=80;
    charized.speed=80;
    charized.tier='s';

// struct pokemon pikachu; method of decalration 
// { 
//     printf("Enter attacks of pikachu");
//     scanf("%d",&pikachu.attacks : );
//     pikachu.hp=50;
//     pikachu.speed=100;
//     pikachu.tier='A';
// };
// struct pokemon charized;
// {
//     charized.attacks=130;
//     charized.hp=80;
//     charized.speed=80;
//     charized.tier='s';
// };
printf("%d",pikachu.attacks);

    return 0;
}