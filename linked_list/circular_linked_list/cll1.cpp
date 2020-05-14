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
void pushValue(node **head_ref, int data)