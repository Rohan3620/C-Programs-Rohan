#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include<string.h>
#define MAX 50

struct Stack {
    int items[MAX];
    int top;
};

void initStack(struct Stack* stack) {
    stack->top = -1;
}

void push(struct Stack* stack, int value) {
    if (stack->top == (MAX - 1)) {
        printf("Stack overflow\n");
        return;
    }
    stack->items[++(stack->top)] = value;
}

int pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->items[(stack->top)--];
}

int evaluatePostfix(char* expression) {
    struct Stack stack;
    initStack(&stack);
    int i = 0;
    char symbol;
    int operand1, operand2;

    while ((symbol = expression[i++]) != '\0') {
        if (isdigit(symbol)) {
            push(&stack, symbol - '0');
        } else {
            operand2 = pop(&stack);
            operand1 = pop(&stack);
            switch (symbol) {
                case '+': push(&stack, operand1 + operand2); break;
                case '-': push(&stack, operand1 - operand2); break;
                case '*': push(&stack, operand1 * operand2); break;
                case '/': push(&stack, operand1 / operand2); break;
            }
        }
    }
    return pop(&stack);
}

int evaluatePrefix(char* expression) {
    struct Stack stack;
    initStack(&stack);
    int i = strlen(expression) - 1;
    char symbol;
    int operand1, operand2;

    while (i >= 0) {
        symbol = expression[i--];

        if (isdigit(symbol)) {
            push(&stack, symbol - '0');
        } else if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
            if (stack.top >= 1) {
                operand1 = pop(&stack);
                operand2 = pop(&stack);
                switch (symbol) {
                    case '+': push(&stack, operand1 + operand2); break;
                    case '-': push(&stack, operand1 - operand2); break;
                    case '*': push(&stack, operand1 * operand2); break;
                    case '/': push(&stack, operand1 / operand2); break;
                }
            }
        }
    }
    return pop(&stack);
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
