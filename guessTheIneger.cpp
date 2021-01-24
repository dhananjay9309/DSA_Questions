#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int> l;
		vector<int> r;
		for(int i=0;i<n;i++)
		{
			char a;
			int b;
			cin>>a>>b;
			if(a=='L')
			{
				l.push_back(b);
			}
			else
			{
				r.push_back(b);
			}
		}
		if(r.empty() || l.empty())
		{
			cout<<"-1"<<endl;
		}
		else
		{
			sort(l.begin(), l.end()); 
			sort(r.begin(), r.end()); 
			int lsize=l.size();
			int rsize=r.size();
			int k=((l[0])-(r[rsize-1]))-1;
			if(k<=0)
			{
				cout<<"-1"<<endl;
			}
			else
			{
				cout<<k<<endl;
			}
		}
	}										
	return 0;
	
}


