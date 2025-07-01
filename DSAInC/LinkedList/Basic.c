#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;

} Node;

void Travese(Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    Node *head = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));
    Node *thrid = (Node *)malloc(sizeof(Node));
    Node *forth = (Node *)malloc(sizeof(Node));
    head->data = 7;
    head->next = second;
    second->data = 8;
    second->next = thrid;
      thrid->data = 12;
    thrid->next = forth;
    forth->data = 112;
    forth->next = NULL;
    Travese(head);
    return 0;
}