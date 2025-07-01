#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct {
    Node *front, *rear;
} CircularQueue;

void initializeQueue(CircularQueue* q) {
    q->front = q->rear = NULL;
}


int isEmpty(CircularQueue* q) {
    return (q->front == NULL);
}

void enqueue(CircularQueue* q, int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty(q)) {
        q->front = q->rear = newNode;
        q->rear->next = q->front; 
    } else {
        q->rear->next = newNode;
        q->rear = newNode;
        q->rear->next = q->front; 
    }
    printf("Enqueued: %d\n", data);
}


int dequeue(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    } else {
        int data = q->front->data;
        if (q->front == q->rear) {
            free(q->front);
            q->front = q->rear = NULL;
        } else {
            Node* temp = q->front;
            q->front = q->front->next;
            q->rear->next = q->front; 
            free(temp);
        }
        printf("Dequeued: %d\n", data);
        return data;
    }
}


void displayQueue(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
    } else {
        Node* temp = q->front;
        printf("Queue elements: ");
        do {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != q->front);
        printf("\n");
    }
}

int main() {
    CircularQueue q;
    initializeQueue(&q);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);

    displayQueue(&q);

    dequeue(&q);
    dequeue(&q);

    displayQueue(&q);

    enqueue(&q, 60);
    displayQueue(&q);

    return 0;
}
