#include <stdio.h>
int main()
{
    //   print char array through array
    char ch[] = {'R', 'O', 'H', 'A', 'N', '\0'};
    int i = 0;
    while (ch[i] != '\0')
    {
        printf("%c", ch[i]);
        i++;
    }
    

    // // null character with ASCII value of 0
    // char ch = '\0';
    // printf("%d", ch); // for printing Ascii value
    // printf("%c", ch);
    // int x = 0;
    // char a = (char)x;
    // printf("%c", a); // prrint
    return 0;
}