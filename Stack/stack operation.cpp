#include<iostream>
#include<stack>
using namespace std;

int main(){
	stack<int>s;
	
	//push operation
	s.push(2);
	s.push(23);
	
	//pop operation
	s.pop();
	
	cout<<"Printing top element"<<s.top()<<endl;
	
	if(s.empty()){
		cout<<"Stack is emepty"<<endl;
	}
	else{
		cout<<"Stack is not empty"<<endl;
	}
	
	cout<<"Size of stack is "<<s.size();
}
