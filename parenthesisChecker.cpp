// Given an expression string x. Examine whether the 
// pairs and the orders of “{“,”}”,”(“,”)”,”[“,”]” are 
// correct in exp. For example, the function should 
// return 'true' for exp = “[()]{}{[()()]()}” and 
// 'false' for exp = “[(])”.

#include<bits/stdc++.h>
using namespace std;

bool ispar(string x) {
    stack<char> s; 
    char x1; 
    for (int i = 0; i < x.length(); i++)  
    { 
        if (x[i] == '(' || x[i] == '[' || x[i] == '{')  
        { 
            s.push(x[i]);
            continue; 
        } 
        if (s.empty()) 
            return false; 
        switch (x[i]) { 
        case ')': 
            x1 = s.top(); 
            s.pop(); 
            if (x1 == '{' || x1 == '[') 
                return false; 
            break; 
        case '}': 
            x1 = s.top(); 
            s.pop(); 
            if (x1 == '(' || x1 == '[') 
                return false; 
            break; 
        case ']': 
            x1 = s.top(); 
            s.pop(); 
            if (x1 == '(' || x1 == '{') 
                return false; 
            break; 
        } 
    } 
    int flag=0;
    (s.empty()) ? flag=1 : flag =0;
    return flag;
}

int main(){
    int t;
    string a;
    cin>>t;
    while(t--){
        cin>>a;
        (ispar(a)) ? cout<<"Balanced"<<endl : cout<<"Not Balanced"<<endl ;
        
    }
}
