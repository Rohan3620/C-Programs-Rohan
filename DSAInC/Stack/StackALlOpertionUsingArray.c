#include <stdio.h>
#include <stdlib.h>

#define SIZE 10
int arr[SIZE];
int top = -1;

int isFull() {
    return top == SIZE - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int value) {
    if (isFull()) {
        printf("Stack is full.\n");
        return;
    }
    arr[++top] = value;
}

void pop() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    top--;
}

int Top() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return -1; // Sentinel value
    }
    return arr[top];
}

void Printstack() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);

    printf("Elements of stack: ");
    Printstack();

    pop();
    pop();

    printf("Elements of stack after pop: ");
    Printstack();

    printf("The top of stack is %d\n", Top());

    return 0;
}
