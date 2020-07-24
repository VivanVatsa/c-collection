/*
Operations on Circular Queue:

    Front: Get the front item from queue.
    Rear: Get the last item from queue.
    enQueue(value) This function is used to insert an element into the circular queue. In a circular queue, the new element is always inserted at Rear position.
        Steps:
        Check whether queue is Full – Check ((rear == SIZE-1 && front == 0) || (rear == front-1)).
        If it is full then display Queue is full. If queue is not full then, check if (rear == SIZE – 1 && front != 0) if it is true then set rear=0 and insert element.
    deQueue() This function is used to delete an element from the circular queue. In a circular queue, the element is always deleted from front position.
        Steps:
        Check whether queue is Empty means check (front==-1).
        If it is empty then display Queue is empty. If queue is not empty then step 3
        Check if (front==rear) if it is true then set front=rear= -1 else check if (front==size-1), if it is true then set front=0 and return the element.


*/

#include <bits/stdc++.h>
using namespace std;

struct Queue{
    // initialize front and rear
    int rear, front;
    // circualar Q attributes
    int size;
    int *ar;
    // constructor for allocating new queue
    Queue(int s){
        front = rear = -1;
        size = s;
        ar = new int[s];
    }

    void enQueue(int value);
    int deQueue();
    void displayQ();
};

// func to create/ add elements in circular Q
void Queue::enQueue(int value){
     if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){ //the second condn states that overlapping of front and rear
         printf("\nQueue is full");
         return;
     }
     else if(front == -1){
         front = rear = 0;
         ar[rear] = value;
     } //inserting the first element
     else if(rear = size-1 && front !=0){
         rear = 0;
         ar[rear] = value;
     }
     else{
         rear++;
         ar[rear] = value;
     }
}

// func to delete an element from Circular Q
// i know deletion in CQ happens from the front so
int Queue::deQueue(){
    if(front == -1){
        printf("\nQueue is Empty");
        return INT_MIN;
    }

    int data = ar[front];
    ar[front] = - 1;
    if(front == rear){
        front = -1;
        rear = -1;
    }
    else if(front == size-1)
        front = 0;
    else
        front++;

    return data;
}

//to display all the elements of the circular Q
void Queue::displayQ(){

    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nElements in Circular Queue are: ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ", ar[i]);
    }
    else
    {
        for (int i = front; i < size; i++)
            printf("%d ", ar[i]);

        for (int i = 0; i <= rear; i++)
            printf("%d ", ar[i]);
    }
}

// int main(void)
// {
//     Queue q(10);
//     q.enQueue(14);
//     q.enQueue(22);
//     q.enQueue(4);
//     q.enQueue(1);
//     q.enQueue(-8);

//     q.displayQ();

//     printf("\nDeleted Element is = %d", q.deQueue());
//     printf("\nDeleted Element is = %d", q.deQueue());

//     q.displayQ();
//     q.enQueue(77);
//     q.enQueue(21);
//     q.enQueue(-2);

//     q.displayQ();
//     q.enQueue(99);
//     return 0;
// }

int main()
{
    Queue q(5);

    // Inserting elements in Circular Queue
    q.enQueue(14);
    q.enQueue(22);
    q.enQueue(13);
    q.enQueue(-6);

    // Display elements present in Circular Queue
    q.displayQ();

    // Deleting elements from Circular Queue
    printf("\nDeleted value = %d", q.deQueue());
    printf("\nDeleted value = %d", q.deQueue());

    q.displayQ();

    q.enQueue(9);
    q.enQueue(20);
    q.enQueue(5);

    q.displayQ();

    q.enQueue(20);
    return 0;
}