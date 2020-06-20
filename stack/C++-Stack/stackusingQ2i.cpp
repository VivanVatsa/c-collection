#include <bits/stdc++.h>
#include <stack>
using namespace std;
// stack algo for DeQ to be costly
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

struct Queue{
    stack<int> s1, s2;

    void enQueue(int x){
        while(!s1.empty()){
            s1.push(x);
        }
    }

    int deQueue(){
        if(s1.empty() && s2.empty()){
            std::cout << "ERROR! EMPTY STACK" << '\n';
        }
        
        if(s2.empty()){
            while(!s2.empty()){
                s2.push(s1.top());
                s1.top();
                }
            }

            int x = s2.top();
            s2.pop();
    }
};

int main(void){
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);

    std::cout << q.deQueue() << '\n';
    std::cout << q.deQueue() << '\n';
    std::cout << q.deQueue() << '\n';
    std::cout << q.deQueue() << '\n';

    return 0;
}