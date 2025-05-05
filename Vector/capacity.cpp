#include<iostream>
#include<vector>
using namespace std;

int main(){
	vector<int> v;
	cout<<"Capacity->"<<v.size()<<endl;
	
	v.push_back(1);
	cout<<"Capicity->"<<v.size()<<endl;
	
	v.push_back(2);
	cout<<"Capicity->"<<v.size()<<endl;
	
	v.push_back(3);
	cout<<"Capacity->"<<v.size()<<endl;
	
	cout<<"Front element"<<v.front()<<endl;
	cout<<"End element"<<v.back()<<endl;
	
}
