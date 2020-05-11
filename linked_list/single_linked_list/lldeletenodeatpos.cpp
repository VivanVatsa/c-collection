#include <bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *next;
};

    //creation of a new linked list 

void push(struct node **head_ref, int new_data){
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = *head_ref;
    *head_ref = new_node;
}

void deleteNode(struct node **head_ref, int position){

    //if the linked list is empty
    if(*head_ref == NULL)
        return;
    
    //storing the head node
    struct node *temp = *head_ref;

    //if the first pos or the head is to be removed then

    if(position == 0){
        *head_ref = temp->next; //change the head
        free(temp); // free old head
        return;
    }

    //to delete previous node of the given positoion node

    for (int i = 0; temp != NULL && i < position - 1; i++)
        temp = temp->next;

        //if position value is more than the number of nodes present in the linked _list

        if(temp == NULL || temp->next == NULL )
            return;
    // we have to delete temp->next wala node so
    // storing the pointer to the next of the node which i have to delete

        struct node *next = temp->next->next;

    // unlink the node from the linked list
        free(temp->next);

        temp->next = next;

}

void dispList(struct node *node){
    while(node != NULL){
        printf("%d", node->data);
        node = node->next;
    }
}

int main(){
    /* Start with the empty list */
    struct node *head = NULL;

    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);

    puts("Created Linked List: ");
    dispList(head);
    deleteNode(&head, 4);
    puts("\nLinked List after Deletion at position 4: ");
    dispList(head);
    return 0;
}


