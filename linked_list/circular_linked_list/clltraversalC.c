// #include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

//to insert a node at the begining of the circular linked list

void push(struct node **head_ref, int data){
    struct node *ptr1 = (struct node *)malloc(sizeof(struct node));
    struct node *temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;

    //if linked list is not NULL then set the next of the last node
    if(*head_ref != NULL){
        while(temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;

    }
    else
        ptr1->next = ptr1; //for the first node

    *head_ref = ptr1;
}

//to print the nodes in the circular linked list
void displayList(struct node *head){
    struct node *temp = head;
    if(head != NULL){
        do{
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != head);

    }
}

/* Driver program to test above functions */
int main()
{
    /* Initialize lists as empty */
    struct node *head = NULL;

    /* Created linked list will be 11->2->56->12 */
    push(&head, 12);
    push(&head, 56);
    push(&head, 2);
    push(&head, 11);

    printf("Contents of Circular Linked List\n ");
    displayList(head);

    return 0;
}