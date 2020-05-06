#include <bits/stdc++.h>

//in C we have to initialise the node by using Structures
struct node
{
    int data;
    struct node *next;
};

void push(struct node *head_ref, int new_data){
    //allocation of new node in C
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = new_data;

    //assigning next to the HEAD
    new_node->next = *head_ref;

    *head_ref = new_node;

}

//insertion between nodes
void push(struct node *prev_node, int new_data){

    //first check if the given prev_node is NULL

    if(prev_node == NULL){
        printf("the given previous node cant be NULL");
        return;
    }
    
    //allocation
    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = new_data;

    //assigning next of new_node to next of previous node
    new_node->next = prev_node->next;

    //move the next of new_node to prev_node

    prev_node->next = new_node;

}

/*Add a node at the end: (6 steps process)
The new node is always added after the last node of the given Linked List. For example if the given Linked List is 5->10->15->20->25 and we add an item 30 at the end, then the Linked List becomes 5->10->15->20->25->30.
Since a Linked List is typically represented by the head of it, we have to traverse the list till end and then change the next of last node to new node.

linkedlist_insert_last
*/

void append(struct node** head_ref, int new_data){

    struct node* new_node=(struct node*)malloc(sizeof(struct node));

    struct node *last = *head_ref;

    new_node->data = new_data;

    //this new_node is going to last so this node next value is NULL

    new_node->next = NULL;

    //now we have to check that if the linked list is empty then 
    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    // else traverse till the last node
    while(last->next != NULL)
        last = last->next;

    //point the next of last node to a new node
    last->next = new_node;

    return;
}
