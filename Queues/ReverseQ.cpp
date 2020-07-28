#include <bits/stdc++.h>
#include <queue>
#include <stack>

using namespace std;

// logic to reverse the function
void reverseQ(queue<int> &Queue)
{
    stack<int> stack;
    while (!Queue.empty())
    {
        stack.push(Queue.front());
        Queue.pop();
    }

    while (!stack.empty())
    {
        Queue.push(stack.top());
        stack.pop();
    }
}

//function to print
void print(queue<int> &Queue)
{
    while (!Queue.empty())
    {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}

int main(void)
{
    queue<int> Queue;
    Queue.push(10);
    Queue.push(20);
    Queue.push(30);
    Queue.push(40);
    Queue.push(50);
    Queue.push(60);
    Queue.push(70);
    Queue.push(80);
    Queue.push(90);
    Queue.push(100);

    // print(Queue);
    reverseQ(Queue);
    print(Queue);

    return 0;
}