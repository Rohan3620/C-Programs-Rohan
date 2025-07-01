#include <stdio.h>

int main() {
    int day;

    // Step 1: Prompt user to enter a number
    printf("Enter a number (1-7) to display the corresponding day of the week: ");
    scanf("%d", &day);

    // Step 2: Use switch statement to check the value of day
    switch(day) {
        case 1:
            printf("Monday\n");
            break;  // Exit switch block
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:  // If day is not between 1 and 7
            printf("Invalid input! Please enter a number between 1 and 7.\n");
            break;
    }

    return 0;
}
