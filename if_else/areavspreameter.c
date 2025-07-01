#include <stdio.h>
int main()
{
    int l, b, area, prameter;
    printf("Enter length of rectangle : ");
    scanf("%d", &l);
    printf("Enter width of rectangle : ");
    scanf("%d", &b);
    area = l * b;
    printf("Area of retcangle is %d\n",area);
    prameter = 2 * (l + b);
        printf("Prameter of retcangle is %d\n",prameter);
    if (area < prameter)
        
    {
        printf("Prameter is Greater than area");
    }
    else
    {
        printf("Area is Greater than Parameter");
    }
    if (area == prameter)
    {
        printf("Area is Equal to prameter");
    }

    return 0;
}