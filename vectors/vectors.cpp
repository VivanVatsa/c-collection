#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> g1;

    for (int i = 0; i < 5; i++)
        g1.push_back(i);

    cout << "output of the begin and the end is:-" << endl;
    for (auto i = g1.begin(); i!=g1.end(); ++i)
        cout << *i << endl;

    
}