//traversal of a circular linked list

/* Function to traverse a given Circular linked list and print nodes
void printList(struct Node *first)
{
    struct Node *temp = first;

    // If linked list is not empty
    if (first != NULL)
    {
        // Keep printing nodes till we reach the first node again
        do
        {
            printf("%d ", temp->data);
            temp = temp->next;
        } while (temp != first);
    }
}
*/

#include <bits/stdc++.h>
using namespace std;
// init in C
/*
struct node{
    int data;
    struct node *next;
};
*/

//init in C++

class node{
    public:
        int data;
        node *next;
};

// creating the functions

//insetion func
void pushValue(node **head_ref, int data){

    node *ptr1 = new node();
    node *temp = *head_ref;

    ptr1->data = data;
    ptr1->next = *head_ref;

    //here too will check
    // if linked list is not NULL then set the next of the last node

    if(*head_ref!=NULL){
        while (temp->next != *head_ref) // loop will end if only found that the pointer is again on the start
            temp = temp->next;
        temp->next = ptr1;

    }

    else
        ptr1->next = ptr1;

    *head_ref = ptr1;

}

void printList(node *head){
    node *temp = head;
    if(head !=NULL){
        do{
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp != NULL);

    }
}

int main(){
    node *head = NULL;

    /* Created linked list will be 11->2->56->12 */
    pushValue(&head, 12);
    pushValue(&head, 56);
    pushValue(&head, 2);
    pushValue(&head, 11);

    cout << "Contents of Circular Linked List\n ";
    printList(head);

    return 0;
}