//https://www.geeksforgeeks.org/deletion-circular-linked-list/

#include <bits/stdc++.h>

// first we need to define the list attributes/prop
struct node{
    int data;
    struct node *next;
};
// first the insertion of the node
void push(struct node **head_ref, int data){
    struct node *ptr1 = (struct node *)malloc(sizeof(struct node));
    ptr1->data = data;
    ptr1->next = *head_ref;

    if(*head_ref !=NULL){
        struct node *temp = *head_ref;
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;
    }

    else
        ptr1->next = ptr1;
        //for the first node

    *head_ref = ptr1;
}

void printList(struct node *head){
    struct node *temp = head;
    if(head !=NULL){
        do{
            printf("%d", temp->data);
            temp = temp->next;
        } while (temp != head);

    }

    printf("\n");
}
    int del_node(struct node **head_ref, int data)
{
}

int main(void){
    /* 
    Initialize lists as empty */
    struct node *head = NULL;

    /* Created linked list will be 2->5->7->8->10 */
    push(&head, 2);
    push(&head, 5);
    push(&head, 7);
    push(&head, 8);
    push(&head, 10);

    printf("List Before Deletion: ");
    printList(head);

    del_node(head, 7);

    printf("List After Deletion: ");
    printList(head);

    return 0;
}




















/*
Case 1: List is empty.

    If the list is empty we will simply return.

Case 2:List is not empty

    If the list is not empty then we define two pointers curr and prev and initialize the pointer curr with the head node.
    Traverse the list using curr to find the node to be deleted and before moving curr to next node, everytime set prev = curr.
    If the node is found, check if it is the only node in the list. If yes, set head = NULL and free(curr).
    If the list has more than one node, check if it is the first node of the list. Condition to check this( curr == head). If yes, then move prev until it reaches the last node. After prev reaches the last node, set head = head -> next and prev -> next = head. Delete curr.
    If curr is not first node, we check if it is the last node in the list. Condition to check this is (curr -> next == head).
    If curr is the last node. Set prev -> next = head and delete the node curr by free(curr).
    If the node to be deleted is neither the first node nor the last node, then set prev -> next = temp -> next and delete curr.
*/