// queue is just more improvised form of stack with a different approach called FIFO
#include <bits/stdc++.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
// first i gotta analyze what is needed to implement that q
// that is a front pointer and a rear/end pointer and the size of the q to which it would be filles
// as this implementation is with the help of arrays so the algorithm goes like this
class Queue{
    public:
    int front, rear, size;
    unsigned capacity; // trying to figure out why this
    int *array;
};

// so there are steps involved in creation of this queue
// first the new creation of the queue
// then will divide the requirements into functionality as needed
Queue *createQ(unsigned capacity){
    // i know that boring step of inti and then all data placing and then boom its done
    Queue *queue = (Queue *)malloc(sizeof(Queue));
    queue->capacity = capacity;
    queue->front = queue->size = 0;
    queue->rear = capacity - 1;
    queue->array = (int *)malloc(queue->capacity * sizeof(int));
    return queue;
}

int Qfull(Queue *queue){
    // this is a bool condition check so just return the true or false value of the condition
    return (queue->size == queue->capacity);
}

int Qempty(Queue *queue){

}
// now we need functions of addition and deletion of the elements so
void enqueue(Queue *queue, int data){
    // now to fill up the queue we have to check whether the queue is full or not and if its full show overflow stats
    // and for that we need to create the function to check whether it is full pretty fun huh
     //when the functions are created than now we can actually put it into work
     if(Qfull(queue))
         return;
     queue->rear = (queue->rear + 1) % queue->capacity;
     queue->array[queue->rear] = data;
     queue->size = queue->size + 1;
     cout << data << "enqueue or push of the queue \n";
}

int dequeue(Queue *queue){
    if(Qempty(queue))
        return INT_MIN;
    int data = queue->array[queue->front];
    queue->size = queue->size - 1;
    return data;
}

// now to point the function at the front of queue
int front(Queue *queue){ //for the first element in the queue
    if(Qempty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}

// Function to get rear of queue
int rear(Queue *queue)
{ //for the second element in queue
    if (Qempty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}
// now when all the required functions are at their place lets start projecting the queue i have understood today
int main(void){
// lets go
// Queue *queue =   //so now here i have the requirement to create a new queue with a given capacity and for that i need a function so lets hit it
    Queue *queue = createQ(1000);

enqueue(queue, 10);
enqueue(queue, 20);
enqueue(queue, 30);
enqueue(queue, 40);

cout << dequeue(queue)
     << " dequeued from queue\n";

cout << "Front item is "
     << front(queue) << endl;
cout << "Rear item is "
     << rear(queue) << endl;

return 0;
}