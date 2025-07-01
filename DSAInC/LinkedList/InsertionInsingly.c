#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *createnode(int value)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next = NULL;
    return newnode;
}
struct Node *InsertATFront(struct Node *head, int value)
{
    struct Node *newnode = createnode(value);
    newnode->next = head;
    return newnode;
}
struct Node *InsertATEnd(struct Node *head, int value)
{
    struct Node *newnode = createnode(value);
    if (head == NULL)
        return newnode;

    struct Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = newnode;
    return head;
}
void print(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }

    printf("Elements of Linked list: ");
    struct Node *curr = head;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}
struct Node *DelAtFront(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is Empty\n");
        return NULL;
    }

    struct Node *temp = head;
    head = temp->next;
    free(temp);
    return head;
}
struct Node *DelAtEnd(struct Node *head)
{
    if (head == NULL)
    {
        printf("List is empty\n");
        return NULL;
    }

    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }

    struct Node *curr = head;
    while (curr->next->next != NULL)
    {
        curr = curr->next;
    }

    free(curr->next);
    curr->next = NULL;
    return head;
}
struct Node *InsertAfterNode(int value, struct Node *head, struct Node *pos)
{
    struct Node *newnode = createnode(value);
    newnode->next = pos->next;
    pos->next = newnode;
    return head;
}
struct Node *DelAfterNode(struct Node *head, struct Node *pos)
{
    if (head == NULL)
    {
        printf("List is empty : ");
    }
    struct Node *temp = pos->next;
    pos->next = temp->next;
    free(temp);
    return head;
}
int main()
{
    struct Node *head = createnode(10);
    struct Node *second = createnode(20);
    struct Node *thrid = createnode(30);
    struct Node *fourth = createnode(40);

    head->next = second;
    second->next = thrid;
    thrid->next = fourth;
    print(head);

    head = InsertATFront(head, 0);
    print(head);

    head = DelAtFront(head);
    print(head);

    head = InsertATEnd(head, 60);
    print(head);

    head = DelAtEnd(head);
    print(head);

    head = InsertAfterNode(10, head, thrid);
    print(head);
     head = DelAfterNode(head, thrid);
    print(head);
    return 0;
}
