#include <bits/stdc++.h>
using namespace std;

// algo of stack
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


