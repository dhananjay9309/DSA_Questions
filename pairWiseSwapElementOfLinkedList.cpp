// Given a singly linked list of size N.
//  The task is to swap elements in the linked list pairwise.
// For example, if the input list is 1 2 3 4, 
// the resulting list after swaps will be 2 1 4 3

#include <bits/stdc++.h> 
using namespace std; 
class Node { 
public: 
	int data; 
	Node* next; 
}; 
void pairWiseSwap(Node* head) 
{ 
	Node* temp = head; 
	while (temp != NULL && temp->next != NULL) { 
		swap(temp->data, temp->next->data); 
		temp = temp->next->next; 
	} 
} 
void push(Node** head_ref, int new_data) 
{ 
	Node* new_node = new Node(); 
	new_node->data = new_data; 
	new_node->next = (*head_ref); 
	(*head_ref) = new_node; 
} 
void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data << " "; 
		node = node->next; 
	} 
} 
int main() 
{ 
	Node* start = NULL; 
    int n=5;
    int val;
    for (int i = 0; i < n; i++)
    {
        cin>>val;
        push(&start, val); 
    }
	cout << "Linked list "<< "before calling pairWiseSwap()\n"; 
	printList(start); 
	pairWiseSwap(start); 
	cout << "\nLinked list "<< "after calling pairWiseSwap()\n"; 
	printList(start); 
	return 0; 
} 
