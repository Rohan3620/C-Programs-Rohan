#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNewNode(int value)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}

Node *InsertAtFront(Node *head, int value)
{
    Node *newnode = (Node *)malloc(sizeof(Node));
    newnode->data = value;

    if (head == NULL)
    {
        newnode->next = newnode;
        return newnode;
    }

    Node *Last = head;
    while (Last->next != head)
    {
        Last = Last->next;
    }

    Last->next = newnode;
    newnode->next = head;
    head = newnode;

    return head;
}
Node *deleteAtEnd(Node *head) {
    if (head == NULL) return NULL;

    if (head->next == head) {
        free(head);
        return NULL;
    }

    Node *temp = head;
    Node *prev;

    while (temp->next != head) {
        prev = temp;
        temp = temp->next;
    }

    prev->next = head;
    free(temp);

    return head;
}

Node *deleteAtFront(Node *head) {
    if (head == NULL) return NULL;

    if (head->next == head) {
        free(head);
        return NULL;
    }

    Node *last = head;
    while (last->next != head) {
        last = last->next;
    }

    Node *temp = head;
    head = head->next;
    last->next = head;
    free(temp);

    return head;
}


Node *insertAtEnd(Node *head, int newdata) {
    Node *newnode = createNewNode(newdata);

    if (head == NULL) {
        return newnode;
    }

    Node *last = head;
    while (last->next != head) {
        last = last->next;
    }

    last->next = newnode;
    newnode->next = head;

    return head;
}


void PrintList(Node *head)
{
    if (head == NULL)
        return;

    Node *curr = head;
    do
    {
        printf("%d ", curr->data);
        curr = curr->next;
    } while (curr != head);
    printf("\n");
}

int main()
{
    Node *head = createNewNode(20);
    Node *second = createNewNode(30);
    Node *third = createNewNode(40);
    Node *fourth = createNewNode(50);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = head; // Circular link

    printf("Circular linked list elements: ");
    PrintList(head);

    int data;
    printf("Enter the data to insert at front: ");
    scanf("%d", &data);
    head = InsertAtFront(head, data);
    printf("List after insertion at front: ");
    PrintList(head);

 
    printf("Del at front : ");
    head = deleteAtFront(head);
    PrintList(head);
 printf("Enter the data to insert at End: ");
    scanf("%d", &data);
    head = insertAtEnd(head, data);
    printf("List after insertion at end : ");
    PrintList(head);

    printf("Del at End : ");
    head = deleteAtEnd(head);
    PrintList(head);

    return 0;
}
