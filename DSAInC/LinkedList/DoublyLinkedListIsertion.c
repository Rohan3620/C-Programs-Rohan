#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *createNode(int value)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    newnode->next = NULL;
    return newnode;
}
struct Node *InsertAtFront(struct Node *head, int value)
{
    struct Node *newnode = createNode(value);
    newnode->next = head;
    if (head != NULL)
        head->prev = newnode;
    newnode->prev = NULL;
    return newnode;
}
struct Node *DelAtEnd(struct Node *head)
{
    struct Node *curr ;
    struct Node* temp= head;
    if (head==NULL)
    {
        printf("Linked list is emplty");
    }
    while (temp->next!= NULL)
    {
        temp = temp->next;
    }
    curr=temp->prev;
    curr->next=NULL;
    free(temp);
    return head;
}
struct Node *InsertAtEnd(struct Node *head, int value)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *curr = head;
    newnode->data = value;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newnode;
    newnode->prev = curr;
    newnode->next = NULL;

    return head;
}
struct Node * DelATFront(struct Node * head){


 return head;
}
void printList(struct Node *head)
{
    struct Node *curr = head;
    printf("Linked list Element : ");
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

int main()
{
    struct Node *head = createNode(10);
    struct Node *second = createNode(20);
    struct Node *thrid = createNode(30);
    struct Node *fourth = createNode(40);
    head->next = second;
    second->next = thrid;
    thrid->next = fourth;

    fourth->prev = thrid;
    thrid->prev = second;
    second->prev = thrid;

    printList(head);
    head = InsertAtFront(head, 0);
    printList(head);
    head = InsertAtEnd(head, 50);
    printList(head);
    head=DelAtEnd(head);
    printList(head);
    return 0;
}