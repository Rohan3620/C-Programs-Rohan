#include <stdio.h>
#include <string.h>
int main()
{
    char str[20] = "Rohan";
    printf("%s\n", str);
    for (int i = 5; i >= 2; i--)
    {
        str[i + 1] = str[i];
    }
    str[2] = 'k';
    printf("%s", str);
    return 0;
}