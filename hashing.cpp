#include<iostream> 
#include<set> 
#include<unordered_set>
#include<map>
#include<unordered_map>
#include<iterator> 

using namespace std; 
// Hashing can be performed using 
// many different ways some of example are
// using map,unordered map,set and unordered set
int main() 
{ 
    // empty set & map container 
    set <int> s;
    unordered_set <int> us;
    map<int,int> mp;
    unordered_map<string,int> ump;
    // List of elements
    int arr[] = {40, 20, 60, 30, 50, 50, 10};
    //Inserting Elements
    mp.insert(pair<int,int>(1,40));
    mp.insert(pair<int,int>(2,30));
    mp.insert(pair<int,int>(2,60));
    mp.insert(pair<int,int>(4,20));
    mp.insert(pair<int,int>(5,50));
    mp.insert(pair<int,int>(6,50));
    mp.insert(pair<int,int>(7,10));
    //Inserting Elements in unordered map
    ump.insert({"a",40});
    ump.insert({"b",30});
    ump.insert({"c",60});
    ump.insert({"d",20});
    ump.insert({"e",50});
    ump.insert({"f",50});
    ump.insert({"g",10});

    for(int i = 0; i < 7; i++){
        s.insert(arr[i]);
        us.insert(arr[i]);
    }
    cout<<"The elements in the set are: \n";
    for(auto itr=s.begin(); itr!=s.end(); itr++)
    {   
        cout<<*itr<<" ";
    }
    cout<<"\n";
    cout<<"The elements in the unorderd_set are: \n";
    for(auto itr=us.begin(); itr!=us.end(); itr++)
    {   
        cout<<*itr<<" ";
    }
    cout<<"\n";
    
    //printing map 
    map<int,int>::iterator itr;
    cout<<"KEY\tELEMENT\n";
    for(itr=mp.begin();itr!=mp.end();itr++){
        cout<<itr->first<<"\t"<<itr->second<<"\n";
    }
    cout<<"\n";

    cout<<"This is for Unordered map\n";
    cout<<"KEY\tELEMENT\n";
    for(auto itr=ump.begin();itr!=ump.end();itr++){
        cout<<itr->first<<"\t"<<itr->second<<"\n";
    }
    cout<<"\n";
    // Check if 50 is present in the set
    if(s.find(50)!=s.end())
    {
        cout<<"\n50 is present";
    }
    else
    {
        cout<<"\n50 is not present";
    }
    if(us.find(50)!=us.end())
    {
        cout<<"\n50 is present";
    }
    else
    {
        cout<<"\n50 is not present";
    }
    
    return 0; 
} 
