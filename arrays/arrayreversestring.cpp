#include <bits/stdc++.h>

using namespace std;

void reverse(int ar[], int start, int end)
{
    
    if(start>=end)
    return;

    int temp = ar[start];
    ar[start] = ar[end];
    ar[end] = temp;

    reverse(ar, start + 1, end - 1); // reverse recursive call
}

void disp(int ar[], int size)
{
    for (int i = 0; i < size;i++)
        cout << ar[i] << " ";
        cout << endl;
}

int main()
{
    int ar[] = {1, 2, 3, 4, 5, 6};

    disp(ar, 6);

    reverse(ar, 0, 5);

    cout << "reverse array of the above one is" << endl;

    disp(ar, 6);

    return 0;
}