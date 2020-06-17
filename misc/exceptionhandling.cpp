#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

void mightGoWrong(){

    bool error = true;

    if(error){
        throw 10;
    }
}
int main(){
    try{
        mightGoWrong();
    }
    catch (int a){
        cout << "Error Caused cause of sample code:  " << a << endl;

    }
    cout << "Damn, it is still running" << endl;

    return 0;
}
