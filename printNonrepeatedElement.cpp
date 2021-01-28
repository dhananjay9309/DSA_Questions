// You are given an array of integers. You need to print the non-repeated elements as they appear in the array in O(n) 

#include <bits/stdc++.h> 
using namespace std; 

vector<int> NonRepeating(int arr[], int n) 
{ 
	unordered_map<int, int> mp; 
    vector<int> v1;
	for (int i = 0; i < n; i++) 
		mp[arr[i]]++; 
	for (int i = 0; i < n; i++)
		if (mp[arr[i]] == 1) 
			v1.push_back(arr[i]);
    return v1;
} 

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> v=NonRepeating(a,n);
    for(int i:v)
        cout<<i<<" ";
    cout<<endl;
	return 0; 
} 
