#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next; //Pointer
	//self referential structure : every node needs to have address of 
	// next node and the data type of next node is same as current node
};
int main(){
	
	struct Node* head =NULL;
	struct Node* second = NULL;
	struct Node* third = NULL;
	head->data =1;
	//Link first node to second node
	head -> next = second;
	second->data =2;
	//link second node to third node
	second->next = third;
	third -> data =3;
	third ->next=NULL;
	//the third block is made NULL to indicate that the linked list is terminated here.
	return 0; 
}
