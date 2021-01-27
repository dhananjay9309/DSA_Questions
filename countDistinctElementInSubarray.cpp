#include <bits\stdc++.h> 
#include <map> 
using namespace std; 

vector<int> countDistinct(int A[], int n, int k) 
{ 
	map<int, int> hm; 
    vector<int> v1;
	int diff = 0;  
	for (int i = 0; i < k; i++) { 
		if (hm[A[i]] == 0) { 
			diff++; 
		} 
		hm[A[i]] += 1; 
	} 
    v1.push_back(diff);
	for (int i = k; i < n; i++) { 
		if (hm[A[i - k]] == 1) { 
			diff--; 
		} 
		hm[A[i - k]] -= 1; 
		if (hm[A[i]] == 0) { 
			diff++; 
		} 
		hm[A[i]] += 1;  
        v1.push_back(diff);
	} 
    return v1;
} 

int main() 
{
    int n;
    cin>>n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin>>A[i];
    }
    int k;
    cin>>k;
    vector<int> result=countDistinct(A, n, k);
    for(int i:result){
        cout<<i<<" ";
    }cout<<endl;
	return 0; 
}
