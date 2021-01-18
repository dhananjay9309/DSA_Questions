#include<bits/stdc++.h>
using namespace std;
int getBit(int n, int pos) {
    return ((n&(1<<pos))!=0);
}
int setBit(int n, int pos) {
    return (n|(1<<pos));
}
int clearBit(int n, int pos) {
    int mask=~(1<<pos);
    return (n&(mask));
}
int updateBit(int n, int pos, int value) {
    int mask=~(1<<pos);
    n = (n&(mask));
    return (n|(value<<pos));
}
bool isPowerOf2(int n) {
    return (n&& !(n&n-1));
}
int numberOfOnes(int n) {
    int count=0;
    while(n) {
        n=n&n-1;
        count++;
    }
    return count;
}
void subsets(int arr[],int n) {
    for (int i = 0; i < (1<<n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i&(1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
            
        
    }
    
}
int main() {
    int t=1;
    // cin>>t;
    while(t--) {
        // int n;
        // cin>>n;
        // int a[n];
        // for(int i=0;i<n;i++)
        //     cin>>a[i];
        cout<<getBit(5,2)<<endl;
        cout<<setBit(5,1)<<endl;
        cout<<clearBit(5,2)<<endl;
        cout<<updateBit(5,2,0)<<endl;
        cout<<isPowerOf2(16)<<endl;
        cout<<isPowerOf2(14)<<endl;
        cout<<numberOfOnes(16)<<endl;
        cout<<numberOfOnes(14)<<endl;
        int arr[4]={1,2,3,4};
        subsets(arr,4);

    }
    return 0;
}