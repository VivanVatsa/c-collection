#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *next;
};

void deleteList(node **head_ref){

    // deref to get to the real head

    node *current = *head_ref;
    node *next;

    while(current != NULL){
        next = current->next;
        free(current);
        current = next;

    }
    //deref *head_ref to affect the real head back in caller
    *head_ref = NULL;
}

/* Given a reference (pointer to pointer) to the head  
of a list and an int, push a new node on the front  
of the list. */

void push(node **head_ref, int new_data){
    //allocation
    node *new_node = new node();

    // data insetion
    new_node->data = new_data;

    /* link the old list off the new node */
    new_node->next = *head_ref;

    //moving head to the new node
    *head_ref = new_node;

}

int main(){
    /*Start with the empty list */
    node *head = NULL;

    /* Use push() to construct below list  
    1->12->1->4->1 */
    push(&head, 1);
    push(&head, 4);
    push(&head, 1);
    push(&head, 12);
    push(&head, 1);

    cout << "Deleting linked list";
    deleteList(&head);

    cout << "\nLinked list deleted";
}