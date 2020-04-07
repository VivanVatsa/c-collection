#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int x, int y){
    cout << "before swapping in func" << endl;
    cout << x << " " << y << endl;

    int temp = x;
    x = y;
    y = temp;

    cout << "after swapping in func" << endl;
    cout << x << " " << y << endl;
}

int main(){
    int x = 7;
    int y = 5;
    cout << "before swapping in mainfunc" << endl;
    cout << x << " " << y << endl;

    swap(x, y);
    
    cout << "after swapping in mainfunc" << endl;
    cout << x << " " << y << endl;
}