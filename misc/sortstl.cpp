#include <bits/stdc++.h>
using namespace std;

struct interval{
    int start;
    int end;
};

/* 
For eg: In the code below, suppose intervals {6,8} and {1,9} are passed as arguments in the “compareInterval” function(comparator function). Now as i1.first (=6) > i2.first (=1), so our function returns “false”, which tells us that “first” argument should not be placed before “second” argument and so sorting will be done in order like {1,9} first and then {6,8} as next.
*/
bool compInterval(interval i1, interval i2){
    return (i1.start < i2.start);
}

int main(){
    interval ar[] = {{6, 8}, {1, 9}, {2, 4}, {4, 7}};
    int size = sizeof(ar) / sizeof(ar[0]);
    sort(ar, ar + size, compInterval); // sorting the intervals in increasing order of the start time

    cout << "Intervals sorted by start time : \n";
    for(int i=0; i<size; i++)
        cout << "[" << ar[i].start << "," << ar[i].end << "] ";

    return 0;
}