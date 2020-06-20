#include <bits/stdc++.h>
#include <stack>
using namespace std;

// algo of stack by enQ costly (more TC)
/*
    enQueue(q, x):

        While stack1 is not empty, push everything from stack1 to stack2.
        Push x to stack1 (assuming size of stacks is unlimited).
        Push everything back to stack1.

    Here time complexity will be O(n)

    deQueue(q):

        If stack1 is empty then error
        Pop an item from stack1 and return it

    Here time complexity will be O(1)
*/

struct Queue
{
    stack<int> stack1;
    stack<int> stack2;

    // insertion of element in a stack
    void enQueue(int x){
        // moving all elements from stack1 to stack2
        while(!stack1.empty()){
            stack2.push(stack1.top());
            stack1.pop();
        }
        // pushing x into stack1
        stack1.push(x);

        // again moving all elements back into stack1
        while(!stack2.empty()){
            stack1.push(stack2.top());
            stack2.pop();
        }
    }
    
    // display of the elements inserted into stack
    int deQueue(){
        if(stack1.empty()){
            std::cout << "ERROR!! Q is Empty" << '\n';
            exit(0);
        }

        int x = stack1.top();
        stack1.pop();
        return x;
    }
};

int main(void){
    Queue Q;
    Q.enQueue(1);
    Q.enQueue(2);
    Q.enQueue(3);
    Q.enQueue(4);
    Q.enQueue(5);

    std::cout << Q.deQueue() << '\n';
    std::cout << Q.deQueue() << '\n';
    std::cout << Q.deQueue() << '\n';

    return 0;
}


