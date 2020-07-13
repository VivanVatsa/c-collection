// sequence containers
#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;
// implementation of vectors
int main(void){
    vector<int> vect;
    for(int i = 1; i <= 5;i++)
        vect.push_back(i);
    cout << "Output of begin to end: ";
    for (auto i = vect.begin(); i != vect.end(); ++i)
        cout << *i << " ";

    cout << "\n output of cbegin & cend: ";
    for (auto i = vect.begin(); i != vect.cend();++i)
        cout << *i << " ";

    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = vect.rbegin(); ir != vect.rend(); ++ir)
        cout << *ir << " ";

    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = vect.crbegin(); ir != vect.crend(); ++ir)
        cout << *ir << " ";

    return 0;
}