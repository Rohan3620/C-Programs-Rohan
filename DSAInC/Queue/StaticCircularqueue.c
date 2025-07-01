#include <stdio.h>
#include <stdlib.h>

#define MAX 5 
typedef struct {
    int arr[MAX];
    int front, rear;
} CircularQueue;

void initializeQueue(CircularQueue* q) {
    q->front = q->rear = -1;
}

int isFull(CircularQueue* q) {
    return ((q->rear + 1) % MAX == q->front);
}

int isEmpty(CircularQueue* q) {
    return (q->front == -1);
}

void enqueue(CircularQueue* q, int data) {
    if (isFull(q)) {
        printf("Queue is full!\n");
    } else {
        if (q->front == -1) {
            q->front = 0;
        }
        q->rear = (q->rear + 1) % MAX;
        q->arr[q->rear] = data;
        printf("Enqueued: %d\n", data);
    }
}

int dequeue(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
        return -1;
    } else {
        int data = q->arr[q->front];
        if (q->front == q->rear) {
            q->front = q->rear = -1; 
        } else {
            q->front = (q->front + 1) % MAX;
        }
        printf("Dequeued: %d\n", data);
        return data;
    }
}

void displayQueue(CircularQueue* q) {
    if (isEmpty(q)) {
        printf("Queue is empty!\n");
    } else {
        int i = q->front;
        printf("Queue elements: ");
        while (i != q->rear) {
            printf("%d ", q->arr[i]);
            i = (i + 1) % MAX;
        }
        printf("%d\n", q->arr[q->rear]);
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
    enqueue(&q, 60);  

    displayQueue(&q);

    dequeue(&q);
    dequeue(&q);

    displayQueue(&q);

    enqueue(&q, 60);
    displayQueue(&q);

    return 0;
}
