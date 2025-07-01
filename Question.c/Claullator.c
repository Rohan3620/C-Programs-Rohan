#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    double num1, num2, result;
    char operator;

    // Step 1: Prompt the user to enter the calculation
    printf("Enter a calculation (e.g., 10+50): ");
    fgets(input, sizeof(input), stdin);  // Read the entire line of input

    // Step 2: Parse the input to extract numbers and operator
    // This assumes the input format is always "number operator number"
    if (sscanf(input, "%lf %c %lf", &num1, &operator, &num2) != 3) {
        printf("Invalid input format. Please enter in the format 'number operator number'.\n");
        return 1;
    }

    // Step 3: Perform calculation based on the operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("=%lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("=%lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("=%lf\n", result);
            break;
        case '/':
            if (num2 != 0) {  // Check for division by zero
                result = num1 / num2;
                printf("=%lf\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
            break;
    }

    return 0;
}

