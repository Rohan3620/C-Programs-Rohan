#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
    int size;
    int top;
    int *arr;
} Stack;

int isEmpty(Stack *ptr) {
    return ptr->top == -1;
}

int isFull(Stack *ptr) {
    return ptr->top == ptr->size - 1; 
}

void push(Stack *ptr, int data) {
    if (isFull(ptr)) { 
        printf("Stack Overflow! Cannot push %d.\n", data);
        return;
    }
    ptr->top++;
    ptr->arr[ptr->top] = data;
}
void top(){
    
}
void print(Stack *ptr) {
    if (isEmpty(ptr)) {
        printf("Stack is empty! Cannot print.\n");
        return;
    }
    printf("Stack elements:");
    for (int i = 0; i <= ptr->top; i++) {
        printf(" %d", ptr->arr[i]);
    }
    printf("\n");
}

int main() {
    Stack ptr;
    ptr.top = -1;
    int i, value;

    printf("Enter the size of the stack: ");
    scanf("%d", &ptr.size);

    ptr.arr = (int*)malloc(ptr.size * sizeof(int));
    if (ptr.arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter values to push into the stack:\n");
    for (i = 0; i < ptr.size + 2; i++) { 
        scanf("%d", &value);
        push(&ptr, value);
    }


    print(&ptr);


    return 0;
}
