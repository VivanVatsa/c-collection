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

void del_list(struct node *head, int key){
    if(head == NULL)
        return;
    
    // find the required node
    struct node *current = head;
    struct node *previous;

    while (current->data != key){
        if(current->next==head){
            printf("\ngiven node is not found in the list");
            break;
        }

        previous = current;
        current = current->data;

    }

    //check if node is the only node
    if(current->next==head){
        head = NULL;
        free(current);
        return;
    }

    // if more than one node, check if the first node
    if(current==head){
        previous = head;
        while (previous->next!=head)
        {
            previous = previous->next;
            head = current->next;
            previous->next = head;
            free(current);
        }
    }
        // check if node is last node
    else if(current->next == head){
            previous->next = head;
            free(current);
    }
    
    else
        {
            previous->next = current->next;
            free(current);
        }
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

    del_list(head, 7);

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