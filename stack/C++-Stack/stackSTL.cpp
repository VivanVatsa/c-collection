#include <bits/stdc++.h>
#include <stack>

using namespace std;

void showstack(stack <int> s){
    while(!s.empty())
    {
        std::cout << "\t" << s.top();
        s.pop();
    }
    cout << '\n';
}

int main(void){
    stack<int> s;
    s.push(10);
    s.push(21);
    s.push(3);
    s.push(220);
    s.push(1);
    s.push(130);
    s.push(90);

    cout << "The stack is: ";
    showstack(s);

    cout << "\n stack size : " << s.size();
    std::cout << "\n stack top element : " << s.top();

    std::cout << "\n stack popped element : ";
    s.pop();
    showstack(s);

    return 0;
}