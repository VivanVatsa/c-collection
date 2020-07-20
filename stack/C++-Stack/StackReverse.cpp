#include <bits/stdc++.h>
#include <stack>
#include <algorithm>
#include <string>
// with using the STL
using namespace std;

stack<int> st;
string s;
// recursive function that inserts elements in the bottom of the stack
char insertAtBottom(char x){
    if(st.size() == 0)
        st.push(x);
    else
    {
        char a = st.top();
        st.pop();
        insertAtBottom(x);
        st.push(a);
    }
}
int main(void){

}