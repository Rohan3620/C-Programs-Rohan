// Wap to convert celsius to Fahrenheit
#include <stdio.h>
int main()
{
    int c;
    float f;
    printf("Enter temperature in celsius : ");
    scanf("%d", &c);
    f = (c * 1.8) + 32;
    printf("Temperature in frahrenheit is %.2f", f);
    
    return 0;
}