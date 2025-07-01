#include <stdio.h>
#include <string.h>
int main()
{
    char s1[] = "Rohan Mishra";
    char s2[] = "Rohan Mishra";

    s2[0] = 'M';
    printf("%s\n", s1);
    printf("%s\n", s2);

    return 0;
}