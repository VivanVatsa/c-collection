#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node *next;
};

//insertion at front
void push(node** head_ref, int new_data){
    node* new_node=new node();

    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;

}

//insertion in between
void insertAfter(node* prev_node, int new_data){

    if(prev_node == NULL){
        cout << "the given previous node cant be NULL";
        return;
    }

    node *new_node = new node();

    new_node->data = new_data;
    new_node->next=prev_node->next;
    prev_node->next=new_node;
}

//insertion at the end
void append(node** head_ref, int new_data){
    node *new_node = new node();

    node *last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    //check for empty linked list

    if(*head_ref == NULL){
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    return;
}

void dispList(node *node){
    while (node !=NULL)
    {
        std::cout << " " << node->data;
        node = node->next;
    }    
}

int main(){

    //start with an empty list

    node *head = NULL;
    // Insert 6. So linked list becomes 6->NULL
    append(&head, 6);

    // Insert 7 at the beginning.
    // So linked list becomes 7->6->NULL
    push(&head, 7);

    // Insert 1 at the beginning.
    // So linked list becomes 1->7->6->NULL
    push(&head, 1);

    // Insert 4 at the end. So
    // linked list becomes 1->7->6->4->NULL
    append(&head, 4);

    // Insert 8, after 7. So linked
    // list becomes 1->7->8->6->4->NULL
    // insertAfter(head->next, 8);
    insertAfter(head->next, 8);

    cout << "Created Linked list is: ";
    dispList(head);

    return 0;
}