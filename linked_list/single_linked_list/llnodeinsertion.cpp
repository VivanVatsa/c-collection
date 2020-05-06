#include <bits/stdc++.h>
using namespace std;

/*
1) At the front of the linked list
2) After a given node.
3) At the end of the linked list.
*/

//initialising the linked list node inside data.
class node{
    public:
        int data;
        node *next;
};

/*
Add a node at the front: (A 4 steps process)
The new node is always added before the head of the given Linked List. And newly added node becomes the new head of the Linked List. For example if the given Linked List is 10->15->20->25 and we add an item 5 at the front, then the Linked List becomes 5->10->15->20->25. Let us call the function that adds at the front of the list is push(). The push() must receive a pointer to the head pointer, because push must change the head pointer to point to the new node
*/
void push(node** head_ref, int new_data){
    //allocation of new node
    node *new_node = new node();

    //inserting data
    new_node->data = new_data;
    //making next of new_node as HEAD
    new_node->next = *head_ref;
    
    //making the head point to the new_node
    *head_ref = new_node;
}

/*
Add a node after a given node: (5 steps process)
We are given pointer to a node, and the new node is inserted after the given node.

*/
//insertion between nodes

