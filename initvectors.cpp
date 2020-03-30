//initializing vectors 

#include <bits/stdc++.h>
#include <vector>
using namespace std;

//pushing vector elements one by one 

int main(){
    vector<int> vect; // empty vector which means no size allocated

    vect.push_back(10);
    vect.push_back(20);
    vect.push_back(30);
    vect.push_back(40);

    for(int x: vect)
        cout << x << " ";
    return 0;

}