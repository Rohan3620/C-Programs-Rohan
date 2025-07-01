#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 50

int evaluatePostfix(char* expression) {
    int result = 0;
    int i = 0;
    char symbol;
    int operand1, operand2;

    while ((symbol = expression[i++]) != '\0') {
        if (isdigit(symbol)) {
            result = symbol - '0';
        } else {
            operand2 = result; 
            operand1 = expression[i++] - '0'; 
            switch (symbol) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
            }
        }
    }
    return result;
}

int evaluatePrefix(char* expression) {
    int result = 0;
    int i = strlen(expression) - 1;
    char symbol;
    int operand1, operand2;

    while (i >= 0) {
        symbol = expression[i--];

        if (isdigit(symbol)) {
            result = symbol - '0';
        } else {
            operand1 = result;  
            operand2 = expression[i--] - '0';  
            switch (symbol) {
                case '+': result = operand1 + operand2; break;
                case '-': result = operand1 - operand2; break;
                case '*': result = operand1 * operand2; break;
                case '/': result = operand1 / operand2; break;
            }
        }
    }
    return result;
}

int main() {
    char postfix[MAX], prefix[MAX];
    int result;
    printf("Enter a Postfix expression: ");
    scanf("%s", postfix);
    result = evaluatePostfix(postfix);
    printf("Postfix Evaluation Result: %d\n", result);

    printf("Enter a Prefix expression: ");
    scanf("%s", prefix);
    result = evaluatePrefix(prefix);
    printf("Prefix Evaluation Result: %d\n", result);

    return 0;
}
