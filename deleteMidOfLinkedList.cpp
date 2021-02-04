// Given a singly linked list, delete middle of the linked list. For example, if given linked list is 1->2->3->4->5 then linked list should be modified to 1->2->4->5.
// If there are even nodes, then there would be two middle nodes, we need to delete the second middle element. For example, if given linked list is 1->2->3->4->5->6 then it should be modified to 1->2->3->5->6.
// If the input linked list is NULL or has 1 node, then it should return NULL


//Solved using fast pointer approach
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

struct node* deleteMid(struct node *head);

void printList(node *start) 
{ 
	node *temp; 
	
	if(start != NULL) 
	{ 
		temp = start; 
		do { 
		cout<<temp->data<<" "; 
		temp = temp->next; 
		} while(temp != start); 
	} 
}


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
        head = deleteMid(head);
        printList(head);
    }
    return 0;
}


struct node* deleteMid(struct node *head){
    if (head == NULL) return NULL;
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    struct node *prev = NULL;
    struct node *slow_ptr = head;
    struct node *fast_ptr = head;
    while (fast_ptr != NULL && fast_ptr->next != NULL) 
    {
        fast_ptr = fast_ptr->next->next;
        prev = slow_ptr;
        slow_ptr = slow_ptr->next;
    }
    prev->next = slow_ptr->next; 
    delete slow_ptr;
    return head;
}
