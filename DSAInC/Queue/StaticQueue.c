#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
    int *arr;
    int front, rear, capacity;
} Queue;

Queue* createQueue(int capacity) {
    Queue *queue = (Queue*) malloc(sizeof(Queue));
    queue->front = 0;
    queue->rear = -1;
    queue->capacity = capacity;
    queue->arr = (int*) malloc(capacity * sizeof(int));
    return queue;
}

void Enqueue(Queue *queue, int x) {
    if (queue->rear == queue->capacity - 1) {
        printf("Queue is full\n");
        return;
    }
    queue->arr[++queue->rear] = x;
}

void Dequeue(Queue *queue) {
    if (queue->front > queue->rear) {
        printf("Queue is empty\n");
        return;
    }
    queue->front++;
}

void printQueue(Queue* queue) {
    if (queue->front > queue->rear) {
        printf("Queue is empty\n");
        return;
    }

    for (int i = queue->front; i <= queue->rear; i++) {
        printf("%d ", queue->arr[i]);
    }
    printf("\n");
}

int main() {
    Queue *q = createQueue(100);

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

    return 0;
}
/*#include <stdio.h>

int Queue[5];
int rear = -1, front = -1;

int isFull() {
    if (rear == 4) {
        printf("Queue is full\n");
        return 1;
    }
    return 0;
}

int isEmpty() {
    if (rear == front) {
        printf("Queue is empty\n");
        return 1;
    }
    return 0;
}

void Enqueue(int data) {
    if (isFull()) {
        return;
    }
    rear++;
    Queue[rear] = data;
}

void Dequeue() {
    if (isEmpty()) {
        return;
    }
    front++;
}

void printQueue() {
    if (isEmpty()) {
        return;
    }
    for (int i = front + 1; i <= rear; i++) {
        printf("%d ", Queue[i]);
    }
    printf("\n");
}

int Front() {
    if (isEmpty()) return -1;  // optional
    return Queue[front + 1];
}

int Rear() {
    if (isEmpty()) return -1;  // optional
    return Queue[rear];
}

int main() {
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
    Enqueue(50);

    printf("Queue Elements: ");
    printQueue();

    Dequeue();
    Dequeue();

    printf("Queue Elements after 2 Dequeue: ");
    printQueue();

    printf("Front of Queue: %d\n", Front());
    printf("Rear of Queue: %d\n", Rear());

    return 0;
}
*/