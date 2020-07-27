#include <bits/stdc++.h>
#include <stack>
#include <queue>
/*
    enQueue(q, x): costly
        While stack1 is not empty, push everything from stack1 to stack2.
        Push x to stack1 (assuming size of stacks is unlimited).
        Push everything back to stack1.

    Here time complexity will be O(n)

    deQueue(q):

        If stack1 is empty then error
        Pop an item from stack1 and return it

    Here time complexity will be O(1)
*/
using namespace std;

struct Queue
{
    stack<int> s1, s2;

    void enQueue(int x)
    {
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while (!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
    }

    int deQueue()
    {
        if (s1.empty())
        {
            cout << "Queue is empty";
            exit(0);
        }
        int x = s1.top();
        s1.pop();
        return x;
    }
};

int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(4);
    q.enQueue(3);
    q.enQueue(2);

    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';

    return 0;
}
