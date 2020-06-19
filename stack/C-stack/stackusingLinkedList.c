#include <bits/stdc++.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct StackNode{
    int data;
    struct StackNode *next;
};

// init of new node of stack using linked list

struct StackNode *newNode(int data){
    struct StackNode *stacknode = (struct StrucNode *)malloc(sizeof(strcut StackNode));
    stacknode->data = data;
    stacknode->next = NULL;
    return stacknode;
}

// check whether the stack is empty
int isEmpty(struct StackNode *root){
    return !root;
}

void push(struct StackNode **root, int data){
    struct StackNode *stacknode = newNode(data);
    stacknode->next = *root;
    *root = stacknode;
    printf('%d pushed into stack', data);
}

int pop(struct StackNode **root){
    if(isEmpty(*root))
        return INT_MIN;
    struct StackNode *temp = *root;
    *root = (*root)->next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(struct StackNode *root){
    if(isEmpty(root))
        return INT_MIN;
    return root->data;
}

int main(void){
    struct StackNode *root = NULL;

    push(&root, 10);
    push(&root, 20);
    push(&root, 30);

    printf("%d popped from stack\n", pop(&root));

    printf("Top element is %d\n", peek(root));

    return 0; 
}