#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct DeQueue {
    struct Node* front;
    struct Node* rear;
};

void init(struct DeQueue* dq) {
    dq->front = dq->rear = NULL;
}

int isEmpty(struct DeQueue* dq) {
    return dq->front == NULL;
}

void insertFront(struct DeQueue* dq, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = dq->front;
    newNode->prev = NULL;
    if (isEmpty(dq)) {
        dq->front = dq->rear = newNode;
    } else {
        dq->front->prev = newNode;
        dq->front = newNode;
    }
}

void insertRear(struct DeQueue* dq, int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = dq->rear;
    if (isEmpty(dq)) {
        dq->front = dq->rear = newNode;
    } else {
        dq->rear->next = newNode;
        dq->rear = newNode;
    }
}

void deleteFront(struct DeQueue* dq) {
    if (isEmpty(dq)) {
        printf("DeQueue is Empty\n");
        return;
    }
    struct Node* temp = dq->front;
    if (dq->front == dq->rear) {
        dq->front = dq->rear = NULL;
    } else {
        dq->front = dq->front->next;
        dq->front->prev = NULL;
    }
    free(temp);
}

void deleteRear(struct DeQueue* dq) {
    if (isEmpty(dq)) {
        printf("DeQueue is Empty\n");
        return;
    }
    struct Node* temp = dq->rear;
    if (dq->front == dq->rear) {
        dq->front = dq->rear = NULL;
    } else {
        dq->rear = dq->rear->prev;
        dq->rear->next = NULL;
    }
    free(temp);
}

void display(struct DeQueue* dq) {
    if (isEmpty(dq)) {
        printf("DeQueue is Empty");
        return;
    }
    struct Node* temp = dq->front;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct DeQueue dq;
    init(&dq);
    insertRear(&dq, 10);
    insertRear(&dq, 20);
    insertFront(&dq, 5);
    display(&dq);
    deleteFront(&dq);
    display(&dq);
    deleteRear(&dq);
    display(&dq);
    return 0;
}
