#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next; //Pointer
};
void printList(Node *node){
	while(node != NULL){
		cout<<node->data<<" ";
		node = node->next;
	}
}
int main(){
	struct Node* head =NULL;
	struct Node* second =NULL;
	struct Node* third = NULL;
	//allocate
	head = new Node;
	second = new Node;
	third = new Node;
	
	head->data=1;
	head->next=second;
	second->data=2;
	second->next=third;
	third->data=3;
	third->next=NULL;
	//print the linked list
	printList(head);
	return 0;
}
