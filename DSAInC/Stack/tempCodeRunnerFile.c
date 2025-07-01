#include <stdio.h>

int stack[10];
int top = -1;

int isEmpty(){
    if (top == -1)
    {
        printf("Stack is empty\n");
        return 1;
    }
    return 0;
}

int isFull(){
    if (top == 9)
    {
        printf("Stack is full\n");
        return 1;
    }
    return 0;
}

void push(int data){
    if (isFull())
    {
        return;
    }
    top++;
    stack[top] = data;
}

void pop(){
    if (isEmpty())
    {
        return;
    }
    printf("Popped: %d\n", stack[top--]);
}

void printTop(){
    if (!isEmpty())
    {
        printf("Top element: %d\n", stack[top]);
    }
}

void printStack(){
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }

    printf("Stack elements: ");
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    printf("After pushing  elements:\n");
    printStack();
    
    pop();
    pop();

    printf("After popping elements:\n");
    printStack();

    printTop();

    return 0;
}
