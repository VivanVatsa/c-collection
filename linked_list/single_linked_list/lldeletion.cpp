// #include <bits/stdc++.h>
#include <stdio.h>
#include <stdlib.h>
// using namespace std;

struct node{
    int data;
    struct node *next;
};

/* Given a reference (pointer to pointer) to the head of a list 
   and an int, inserts a new node on the front of the list. */
void pushValue(struct node **head_ref, int new_data){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;

}

/* Given a reference (pointer to pointer) to the head of a list 
   and a key, deletes the first occurrence of key in linked list */
void deleteNode(struct node **head_ref, int key){
    // store the head node
    struct node *temp = *head_ref, *prev;

    //first case that if the head_ref is the key that is to be searched
    if(temp != NULL && temp->data==key){
        *head_ref = temp->next;
        free(temp);
        return;
    }

    //search the key to be deleted keep the track of the previous node as we need to change the node linked previois to the node that has to be deleted as the next pointer of node removed has to be linked to list the list after that
    while(temp != NULL && temp->data !=key){
        prev = temp;
        temp = temp->next;
    }

    //if the key is not present in the list
    if(temp == NULL)
        return;

        //unlink the node from the linked list
    prev->next = temp->next;

    free(temp); // free the memory from the linked list

}

// This function prints contents of linked list starting from
// the given node
void printList(struct node *node)
{
    while (node != NULL)
    {
        // cin >> node->data;
        printf("%d  ", node->data);

        node = node->next;
    }
}


int main() {
    struct node *head = NULL;

    pushValue(&head, 7);
    pushValue(&head, 1);
    pushValue(&head, 3);
    pushValue(&head, 2);

    puts("Created linked list");
    // puts(" ");
    printList(head);
    deleteNode(&head, 3);
    puts("\n linked list after deletion are ");
    // puts(" ");
    printList(head);

    return 0;
}


/*
delete the first occurrence of this key in linked list.
To delete a node from linked list, we need to do following steps.
1) Find previous node of the node to be deleted.
2) Change the next of previous node.
3) Free memory for the node to be deleted
*/