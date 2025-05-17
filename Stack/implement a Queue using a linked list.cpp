#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
		Node(int data){
			this->data = data;
			this->next = nullptr;
		}
};

class Queue{
	public:
		Node* head;
		Node* tail;
		int s;
		
		Queue(){
			this->head = nullptr;
			tail = nullptr;
			s=0;
		}
		
		void enqueue(int data){
			Node* node = new Node(data);
			// cout<<node<<endl; memory ka address print karega
			if(head == nullptr){
				head = node;
				tail = node;
			}
			else{
				tail->next = node;
				tail = node;
			}
			this->s++;
		}
		int dequeue(){
			if(head == nullptr) return -1;
			Node* temp = head;
			int val = temp->data;
			head = head->next;
			this->s--; //Queue ka size kam hua
			delete temp ;//memory free kar diya
			
			return val; //Jo delete kar rahe hai uska value kya hai
			
		}
		
		int front(){
			if(head == nullptr) return -1;
			return head->data;
			
		}
		
		bool empty(){
			return s==0;
		}
		
		int size(){
			return s;
		}
};

int main(){
	Queue q;
	q.enqueue(1);
	q.enqueue(2);
	
	q.dequeue();
	cout<<q.front()<<endl;
	
	cout<<q.front()<<endl;
	
	if(q.empty()){
		cout<<"Queue is empty"<<endl;
	}
	else {
		cout<<"Queue is not empty"<<endl;
	}
	cout<<"Size of the queue "<<q.size()<<endl;
}
