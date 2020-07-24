// priority queue
// Priority Queue is an extension of queue with following properties.

//     Every item has a priority associated with it.An element with high priority is dequeued before an element with low priority.If two elements have the same priority,
//     they are served according to their order in the queue.

// A typical priority queue supports following operations.
// insert(item, priority): Inserts an item with given priority.
// getHighestPriority(): Returns the highest priority item.
// deleteHighestPriority(): Removes the highest priority item.

#include <bits/stdc++.h>
#include <algorithm>
#include <queue>
using namespace std;

void showpq(priority_queue<int> gq){
    priority_queue<int> g = gq;
    while(!g.empty()){
        cout << g.top() << "\t";
        g.pop();
    }
    // cout << "\n";
}

int main(void){
    priority_queue<int> PQ;
    PQ.push(10);
    PQ.push(2);
    PQ.push(56);
    PQ.push(12);
    PQ.push(4);
    PQ.push(99);
    PQ.push(1);

    cout << "your priority Queue is: ";
    showpq(PQ);
    cout << "\nPQ.size() " << PQ.size();
    cout << "\nPQ.top()  " << PQ.top();
    cout << "\npq.Pop()  ";
    PQ.pop();
    showpq(PQ);

    return 0;
}