// Given a linked list of N nodes. 
// The task is to check if the the linked 
//  has a loop. Linked list can contain self loop.

//Solved using hare turtle Algorithm

#include<bits/stdc++.h>
using namespace std;
#define ll long long

struct node{
    int data;
    struct node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void loopHere(node* head,node* tail,int pos){
    if(pos==0) return;
    node* walk=head;
    for (int i = 1; i < pos; i++)
    {
        walk=walk->next;
    }
    tail->next=walk;
}

bool detectLoop(node* head);

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int data;
        cin>>data;
        struct node *head= new node(data);
        struct node *tail=head;
        for(int i=0;i<n-1;i++){
            cin>>data;
            tail->next= new node(data);
            tail=tail->next;
        }
        int pos;
        cin>>pos;
        loopHere(head,tail,pos);
        if(detectLoop(head)) cout<<"True\n";
        else cout<<"False\n";
    }
    return 0;
}

/* 
//This is using Hash Map
bool detectLoop(node* head){
    unordered_set<node*> s;
    while (head != NULL) {
        if (s.find(head) != s.end())
            return true;
        s.insert(head);
        head = head->next;
    }
    return false;
}
*/

// using hare turtle Algorithm
bool detectLoop(node* head)
{
    if(!head) return false;
    
    node* fast = head->next;
    node* slow = head;
    
    while( fast != slow)
    {
        if( !fast || !fast->next ) return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    
    return true;
}
