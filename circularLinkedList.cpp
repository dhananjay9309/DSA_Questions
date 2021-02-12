#include<bits/stdc++.h> 
using namespace std; 

struct Node 
{ 
    int data; 
    struct Node *next; 
}; 
struct Node *addEnd(struct Node *last, int data) 
{ 
    if (last == NULL) 
    {
        struct Node *temp = new Node; 
        temp -> data = data; 
        last = temp; 
        last -> next = last; 
        return last; 
    }
    
    struct Node *temp = new Node;
    temp -> data = data; 
    temp -> next = last -> next; 
    last -> next = temp; 
    last = temp; 

    return last; 
} 
void traverse(struct Node *last) 
{ 
    struct Node *p; 
    if (last == NULL) 
    { 
        cout << "List is empty." << endl; 
        return; 
    } 

    p = last -> next; 

    do
    { 
        cout << p -> data << " "; 
        p = p -> next; 

    } 
    while(p != last->next); 

} 

int main() 
{ 
    struct Node *last = NULL; 

    last = addEnd(last, 6); 
    last = addEnd(last, 4); 
    last = addEnd(last, 2); 
    last = addEnd(last, 8); 
    last = addEnd(last, 12); 
    last = addEnd(last, 10); 

    traverse(last); 

    return 0; 
}
