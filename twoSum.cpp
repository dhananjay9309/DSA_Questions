// Given an array of positive integers 
// and an integer. Determine whether or 
// not there exist two elements in 
// A whose sum is exactly equal to that integer

#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
#define ll long long

bool keypair(vector<int> A,int n,int x){
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int target = x - A[i];
        if (mp.find(target) != mp.end())
            return 1;
        if (mp.find(A[i]) == mp.end()) 
            mp[A[i]] = i;
    }
    return 0;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout<<(keypair(a,n,x)?"Yes":"No")<<"\n";
    }
    return 0;
}
