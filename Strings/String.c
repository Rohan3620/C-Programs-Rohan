#include <stdio.h>
#include <string.h>
int main()
{
    // char arr[14]="Physicswallah";
    // int i= 0;
    // while (arr[i]!='\0')
    // {
    //     printf("%c",arr[i]);

    //     i++;

    // }

    char str[40];
    // scanf("%s", str);//if we scanfonly through it read only first words
    // gets(str);
    scanf("%[^\n]s",str);
    // int i = 0;
    // // str[0]=65;
    // while (str[i] != '\0')
    // {
    //     // printf("%c",str[i]);

    //     // printf("%c",i[str]);

    //     // printf("%c",*(i+str));

    //     printf("%c", *(str + i));
    //     i++;
    // }
    // printf("%s ", str); // for printings strings
    puts(str); // for printings strings
    return 0;
}