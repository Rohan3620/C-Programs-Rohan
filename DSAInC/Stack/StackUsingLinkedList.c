#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node * next;
}Node;
Node* top=NULL;

void push(int value){
Node* newnode=(Node*)malloc(sizeof(Node));
newnode->data=value;
newnode->next=top;
top=newnode;
}

void pop(){
 Node* temp=top;
 top=temp->next;
 free(temp);
}
void PrintSatck(){
  Node* curr= top;
    while (curr!=NULL)
    {
    printf("%d ",curr->data);
    curr=curr->next;
    }
    printf("\n");
}

int main(){
push(10);
push(20);
push(30);
push(40);
push(50);
PrintSatck();
pop();
pop();
pop();
PrintSatck();
    return 0;
}
