#include <bits/stdc++.h>
#include <stack>

// stack algo for deQ more costly
/*

enQueue(q,  x)
  1) Push x to stack1 (assuming size of stacks is unlimited).
Here time complexity will be O(1)

deQueue(q)
  1) If both stacks are empty then error.
  2) If stack2 is empty
       While stack1 is not empty, push everything from stack1 to stack2.
  3) Pop the element from stack2 and return it.
Here time complexity will be O(n)

*/

struct node{
    int data;
    struct node *next;
};

void push(struct node **top, int new_data){
    // init new stack
    struct node *new_node = (struct node *)malloc(sizeof(struct node));
    if(new_node == NULL){
        printf("stack overflow \n");
        getchar();
        exit(0);
    }

    new_node->data = new_data;
    new_node->next = (*top);
    (*top) = new_node;   
}

int pop(struct node **top){
    int result;
    struct node *top_ref;

    if()
}