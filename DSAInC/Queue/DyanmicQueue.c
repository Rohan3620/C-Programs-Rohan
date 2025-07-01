#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Queue {
    Node* front;
    Node* rear;
} Queue;

Queue* createQueue() {
    Queue* q = (Queue*) malloc(sizeof(Queue));
    q->front = q->rear = NULL;
    return q;
}

void Enqueue(Queue* q, int value) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;

    if (q->rear == NULL) { 
        q->front = q->rear = newNode;
        return;
    }

    q->rear->next = newNode;
    q->rear = newNode;
}
void Dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("Queue is empty\n");
        return;
    }

    Node* temp = q->front;
    q->front = q->front->next;

    if (q->front == NULL) {
        q->rear = NULL;
    }

    free(temp);
}


void printQueue(Queue* q) {
    Node* temp = q->front;
    if (!temp) {
        printf("Queue is empty\n");
        return;
    }
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


int Front(Queue* q) {
    if (q->front == NULL) return -1;
    return q->front->data;
}

int Rear(Queue* q) {
    if (q->rear == NULL) return -1;
    return q->rear->data;
}

void freeQueue(Queue* q) {
    while (q->front != NULL) {
        Dequeue(q);
    }
    free(q);
}

int main() {
    Queue* q = createQueue();

    Enqueue(q, 10);
    Enqueue(q, 20);
    Enqueue(q, 30);
    Enqueue(q, 40);
    Enqueue(q, 50);

    printf("Queue Elements: ");
    printQueue(q);

    Dequeue(q);
    Dequeue(q);

    printf("Queue Elements after 2 Dequeue: ");
    printQueue(q);

    printf("Front: %d\n", Front(q));
    printf("Rear: %d\n", Rear(q));

    freeQueue(q);
    return 0;
}
