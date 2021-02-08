//You are given a string S, the task is to reverse the string using stack.
#include<bits\stdc++.h>
using namespace std;
char* reverse(char *str,int len);
int main(){
    long long int t;
    cin>>t;
    while(t--){
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        cout<<ch<<endl;
    }
}
char* reverse(char *str,int len){
    stack<char> st;

    for(int i = 0; i < len;i++)
        st.push(str[i]);

    for(int i = 0; i < len; i++)
    {
        str[i] = st.top();
        st.pop();
    }
    return str;
}
