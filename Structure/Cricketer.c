#include <stdio.h>

int main() {
    typedef struct Cricketer {
        char name[50];
        int age;
        int matches;
        float average;
    } cricketer;

    cricketer arr[1];  // Array to hold one cricketer's data

    // Input data for cricketers
    for (int i = 0; i < 1; i++) {
        printf("Enter name: ");
        scanf(" %[^\n]s", arr[i].name);  // Space before % helps ignore leftover newline

        printf("Enter age: ");
        scanf("%d", &arr[i].age);

        printf("Enter number of matches: ");
        scanf("%d", &arr[i].matches);

        printf("Enter average score: ");
        scanf("%f", &arr[i].average);
    }

    // Output data for cricketers
    for (int i = 0; i < 1; i++) {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name: %s\n", arr[i].name);
        printf("Age: %d\n", arr[i].age);
        printf("Matches: %d\n", arr[i].matches);
        printf("Average: %.2f\n", arr[i].average);
    }

    return 0;
}