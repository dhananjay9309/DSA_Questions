// The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate the span of stock’s price for all n days. 
// The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
// For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}.

#include<bits/stdc++.h>
using namespace std;
vector <int> calculateSpan(int *price, int n)
{
    stack<int> s;
    s.push(0);
    vector <int> S (n);
    S[0] =1;
    for(int i=1;i<n;i++)
    {
        while(s.empty()==false and price[s.top()] <= price[i])
        s.pop();
        int span = (s.empty()) ? (i+1) : (i-s.top());
        S[i] = span;
        s.push(i);
   	}
   	return S;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int i,a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int> s=calculateSpan(a,n);
        for(i=0;i<n;i++){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
