#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

struct Node {
    char data[10];
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(char* data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    strcpy(newNode->data, data);
    newNode->left = newNode->right = NULL;
    return newNode;
}

int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

struct Node* buildTree(char* postfix) {
    struct Node* stack[100];
    int top = -1;
    char num[10];
    int numIndex = 0;

    for (int i = 0; postfix[i] != '\0'; i++) {
        if (isdigit(postfix[i])) {
            num[numIndex++] = postfix[i];
        } else if (postfix[i] == ' ' || postfix[i] == '\0') {
            if (numIndex > 0) {
                num[numIndex] = '\0';
                stack[++top] = createNode(num);
                numIndex = 0;
            }
        } else if (isOperator(postfix[i])) {
            struct Node* node = createNode((char[]){postfix[i], '\0'});
            node->right = stack[top--];
            node->left = stack[top--];
            stack[++top] = node;
        }
    }
    return stack[top];
}

void inorder(struct Node* root) {
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%s ", root->data);
    inorder(root->right);
}

int main() {
    char postfix[100];
    printf("Enter postfix expression: ");
    fgets(postfix, sizeof(postfix), stdin);

    struct Node* root = buildTree(postfix);
    printf("Inorder traversal of expression tree: ");
    inorder(root);
    printf("\n");
    return 0;
}
