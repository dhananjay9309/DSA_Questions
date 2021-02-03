// Given a sorted circular linked list, 
// the task is to insert a new node in 
// this circular list so that it remains 
// a sorted circular linked list.

#include <bits/stdc++.h>
using namespace std;
class Node 
{ 
	public:
	int data; 
	Node *next; 
}; 
Node* sortedInsert(Node* head, Node* new_node) 
{ 
	Node* current = head; 
	if (current == NULL) 
	{ 
		new_node->next = new_node; 
		head = new_node; 
	} 
	else if (current->data >= new_node->data) 
	{
		while(current->next != head) 
			current = current->next; 
		current->next = new_node; 
		new_node->next = head; 
		head = new_node; 
	} 
	else
	{ 
		while (current->next!= head && current->next->data < new_node->data) 
		current = current->next; 
	
		new_node->next = current->next; 
		current->next = new_node; 
	} 
    return head;
} 
void printList(Node *start) 
{ 
	Node *temp; 
	
	if(start != NULL) 
	{ 
		temp = start; 
		do { 
		cout<<temp->data<<" "; 
		temp = temp->next; 
		} while(temp != start); 
	} 
} 
int main() 
{ 
	int arr[] = {12, 56, 2, 11, 1, 90}; 
	int list_size, i; 
	Node *start = NULL; 
	Node *temp; 
	for (i = 0; i< 6; i++) 
	{ 
		temp = new Node();
		temp->data = arr[i]; 
		start=sortedInsert(start, temp); 
	} 
	printList(start); 
	return 0; 
}
