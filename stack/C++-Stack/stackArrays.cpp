#include <bits/stdc++.h>
using namespace std;

#define MAX 100

class Stack{
    int top;
    public:
        int ar[MAX]; //max size in array
        // constructor
        Stack() { top = -1; };
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};

// func to add values in stack ? : check if stack is full....? -> stackoverflow else push
bool Stack::push(int x){
    if(top >= (MAX-1)){
        cout << "Stack Oveflow";
        return false;
    }
    else
    {
        ar[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

// remove values from stack
int Stack::pop(){
    if(top<0){
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = ar[top--];
        return x;
    }
}

// return top element of the stack
int Stack::peek(){
    if(top < 0){
        std::cout << "stack is empty" << '\n';
        return 0;
    }
    else
    {
        int x = ar[top];
        return x;
    }
}

bool Stack::isEmpty(){
    return (top < 0);
}

int main(){
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.pop() << " Popped from stack\n";

    return 0;
}
