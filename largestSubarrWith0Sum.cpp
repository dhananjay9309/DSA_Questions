#include <bits/stdc++.h> 
using namespace std; 

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
	unordered_map<int, int> presum; 
	int sum = 0;  
	int max_len = 0;
	for (int i = 0; i < n; i++) { 
		sum += arr[i]; 
		if (arr[i] == 0 && max_len == 0) 
			max_len = 1; 
		if (sum == 0) 
			max_len = i + 1; 
		if (presum.find(sum) != presum.end()) { 
			max_len = max(max_len, i - presum[sum]); 
		} 
		else { 
			presum[sum] = i; 
		} 
	} 
    cout<<max_len<<endl;
	return 0; 
} 
