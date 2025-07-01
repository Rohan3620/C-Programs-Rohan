#include <stdio.h>
#include <string.h>

int main()
{
    char Str[40];
    printf("Enter a string: ");
    
    // Using fgets for safer input
    if (fgets(Str, sizeof(Str), stdin) != NULL) {
        // Remove newline character if present
        size_t len = strlen(Str);
        if (len > 0 && Str[len - 1] == '\n') {
            Str[len - 1] = '\0';
        }

        // Calculate the size of the string
        int size = strlen(Str);

        // Reverse the string
        for (int i = 0, j = size - 1; i < j; i++, j--) {
            char temp = Str[i];
            Str[i] = Str[j];
            Str[j] = temp;
        }

        printf("The reversed string is: ");
        puts(Str);
    } else {
        printf("Error reading input.\n");
    }

    return 0;
}
