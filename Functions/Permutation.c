#include <stdio.h>
int Fatorial(int x)
{
    int Fact = 1;
    for (int i = 1; i <= x; i++)
    {
        Fact = Fact * i;
    }
    return Fact;
}
int main()
{
    int n;
    printf("Enter N :");
    scanf("%d", &n);
    int r;
    printf("Enter R :");
    scanf("%d", &r);
    if (n >= r && r >= 0)
    {
        int nPr = Fatorial(n) / (Fatorial(n - r));
        printf("Answer = %d", nPr);
    }
    else
    {
        printf("Not Vaild");
    }

    return 0;
}