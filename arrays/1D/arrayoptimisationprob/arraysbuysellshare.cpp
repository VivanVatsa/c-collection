#include <bits/stdc++.h>
using namespace std;

//return max profit from 2 transactions
int shareBuySell(int price[], int n){
    int *profit = new int[n]; // creating profit array and initializing it by 0
    for (int i = 0; i<n; i++)
        profit[i] = 0;
    int max_price = price[n - 1]; // doing the max ptofit loop for first transaction
    for (int i = n - 2; i >= 0; i--){
        if(price[i] > max_price)
            max_price = price[i]; // max_price contains maximum price in price[0...n-1]
        profit[i] = max(profit[i + 1], (max_price - price[i]));
    }

    int min_price = price[0]; // doing for transaction
    for (int i = 1; i < n; i++)
    {
        if(price[i] < min_price)
            min_price = price[i];
        profit[i] = max(profit[i - 1], profit[i] + (price[i] - min_price));
    }
    int answer = profit[n-1]; // this is our final result after both transactions

    delete[] profit;// to avoid memory leak

    return answer;
}
int main(){
    int price[] = {2, 30, 15, 10, 8, 25, 80};
    int n = sizeof(price) / sizeof(price[0]);
    cout << "Maximum profit = " << shareBuySell(price, n);

    return 0;
}