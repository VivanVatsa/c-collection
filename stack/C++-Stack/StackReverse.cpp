#include <bits/stdc++.h>
#include <stack>
#include <algorithm>
#include <string>
// with using the STL
using namespace std;

stack<int> st;
string ns;
// recursive function that inserts elements in the bottom of the stack
char insertAtBottom(char x){ // this is the logic for inserting at the bottom
    if(st.size() == 0)
        st.push(x);
        // the engineering happening here is that
        // all i am doing to reverse is that pop elements one by one and save it some temp address and then when my main stack is empty
        // i push all the values from the bottom one by one from that temp address 
    else
    {
        char a = st.top();
        st.pop();
        insertAtBottom(x);
        st.push(a);
    }

}

char reverse(){
    if(st.size() > 0){
        char x = st.top();
        st.pop();
        reverse();
        insertAtBottom(x);
    }
}

int main(void){
    // push elements into  
    // the stack 
    st.push('1'); 
    st.push('2'); 
    st.push('3'); 
    st.push('4'); 
      
    cout<<"Original Stack"<<endl; 
      
    // print the elements  
    // of original stack 
    cout<<"1"<<" "<<"2"<<" "
        <<"3"<<" "<<"4"
        <<endl;
    // int ns = 0;
    // function to reverse  
    // the stack 
    reverse(); 
    cout<<"Reversed Stack"
        <<endl;
    while (!st.empty())
    {
        char p = st.top();
        st.pop();
        ns += p;
    }

    //display of reversed stack
    cout << ns[3] << " " << ns[2] << " "
         << ns[1] << " " << ns[0] << endl;
    return 0;
}