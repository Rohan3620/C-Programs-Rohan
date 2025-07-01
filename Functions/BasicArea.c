#include <stdio.h>
void Khora()
{
    printf("You are in khora Colony \n");
    return;
}
void UP()
{
    printf("You are in Uttar Pradesh\n");
    Khora();
    return;
}
void India()
{
    printf("You are in India\n");
    UP();
    return;
}
int main()
{
    India();
    return 0;
}