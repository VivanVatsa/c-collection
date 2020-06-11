#include <bits/stdc++.h>
//in double linked list we add extra pointer previous pointer
struct node{
    int data;
    struct node *next;
    struct node *prev;
};


// insertion at the start of the node
void push(struct node **head_ref,int newData){
    //allocate the new node
    struct node *new_node = (struct node*)malloc(sizeof(struct node));

    // insert the data
    new_node->data = newData;

    // now assigning both pointers their respective values
    new_node->next = *head_ref;
    new_node->prev = nullptr;

    /* 4. change prev of head node to new node */
        if((*head_ref)!=NULL)
        (*head_ref)->prev=new_node;

    // move the head to point to the new node
        (*head_ref) = new_node;
}


int main(void){

}