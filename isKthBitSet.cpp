#include <iostream> 
using namespace std; 

bool isKthBitSet(int n, int k) 
{ 
	if (n & (1 << (k - 1))) 
		return 1; 
	else
		return 0; 
} 

int main() 
{ 
	int n , k; 
  	cin>>n>>k;
	if(isKthBitSet(n, k))
    		cout<<"Set\n";
  	else
    		cout<<"Not Set\n";
	return 0; 
} 
