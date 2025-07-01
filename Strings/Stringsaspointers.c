#include <stdio.h>
#include <strings.h>
int main()
{
    char str[] = "college Wallah";
    // char *ptr = str; // ptr now point on str[0]
    // int i = 0;
    // while (*ptr!='\0')
    // {
    //     printf("%c",*ptr);
    //     ptr++;
    //     i++;
    // }
    str[0]='D';
    printf("%s",str);
    return 0;
}