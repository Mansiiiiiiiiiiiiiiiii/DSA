#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* left;
		Node* right;
		
		Node(int d){
			this->data = d;
			this->left = NULL;
			this->right = NULL;
		}
};

Node* buildTree(Node* root){
	cout<<"Enter the data"<<endl;
	int data;
	cin>>data;

	
	if(data == -1){
		return NULL;
	}
	
	cout<<"Data inserted at left"<<endl;
	root->left = buildTree(root->left);
	cout<<"Enter Data for inserting in right"<<endl;
	root->right = buildTree(root->right);
	return root;
}
int main(){
	Node* root = NULL;
	root = buildTree(root);
}
