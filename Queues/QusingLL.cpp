// implmenting Queue data structure using linked list in C
// #include <bits/stdc++.h>
// #include <stack>
// #include <queue>
#include <stdlib.h>
#include <stdio.h>

// using namespace std;

//node for storing the queue block
struct Qnode
{
    int key;
    struct Qnode *next;
};

//this is to store the front and rear pointers
struct Queue
{
    struct Qnode *front, *rear;
};

// now first i gotta create that first queue block node
struct Qnode *newNode(int k)
{
    struct Qnode *temp = (struct Qnode *)malloc(sizeof(struct Qnode));
    temp->key = k;
    temp->next = NULL;

    return temp;
};

// this is for the intial assignment of the front and the rear pointer which is gonna point to the first and the last element of the queue
struct Queue *createQueue()
{
    struct Queue *q = (struct Queue *)malloc(sizeof(struct Queue));
    q->front = NULL;
    q->rear = NULL;

    return q;
};

// now i will create enQueue and deQueue
// here i am adding "value" to q
void enQueue(struct Queue *q, int k)
{
    struct Qnode *temp = newNode(k);
    // now all the necessary condition check
    // as insertion happens at the end so we have to work with rear pointer
    // check if pointer is null or not
    if (q->rear == NULL)
    {
        q->front = q->rear = temp;
        return;
    }
    // ahh this is the step which i call
    // ASSIGN AND MOVE
    // as rear is suppose to be at the end of the queue and now the value is added in the queue and uske saath rear also moved so we gotta bring it back to its original position
    q->rear->next = temp;
    q->rear = temp;
}

void deQueue(struct Queue *q)
{
    if (q->front == NULL)
        return;
    struct Qnode *temp = q->front;
    q->front = q->front->next;

    // condition check
    if (q->front == NULL)
        q->rear = NULL;

    free(temp);
}

int main(void)
{
    struct Queue *q = createQueue();
    enQueue(q, 1);
    enQueue(q, 2);

    deQueue(q);
    deQueue(q);

    enQueue(q, 3);
    enQueue(q, 4);
    enQueue(q, 5);
    enQueue(q, 6);

    printf("Queue front is at : %d \n", q->front->key);
    printf("Queue rear is at : %d \n", q->rear->key);

    return 0;
}
