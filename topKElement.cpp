// Given a non-empty array of integers, 
// find the top K elements which have the highest 
// frequency in the array. If two numbers have 
// the same frequency then the larger number should be given preference. 
#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.second == p2.second)
		return p1.first > p2.first;
	return p1.second > p2.second;
}

vector<int> TopK(int array[],int n, int k) 
{
    vector<int> result; 
    unordered_map <int,int> ump; 
    for(int i=0; i<n; i++)
        ump[array[i]]++;
    vector<pair<int,int> > frequency(ump.begin(), ump.end());
    sort(frequency.begin(), frequency.end(), compare);
    for(int i=0; i<k; i++)
        result.push_back (frequency[i].first);
    return result;
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
    vector<int> result=TopK(A,n,k);
    for(int i:result){
        cout<<i<<" ";
    }cout<<endl;
	return 0;
}
