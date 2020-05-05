#include <bits/stdc++.h>

struct node
{
    int data;
    struct node *next;
};

int main(){
    // initialising the structure as NULL as it is empty
    struct node *head = NULL;
    struct node *second = NULL;
    struct node *third = NULL;

    // u cant initialise the nodes in C like this 
    // head = new node();
    // second = new node();
    // third = new node();

    // so there is a different way of allocating the memory space of the linked list
    head = (struct node *)malloc(sizeof(struct node));

    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    head->data = 1; 
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    
}