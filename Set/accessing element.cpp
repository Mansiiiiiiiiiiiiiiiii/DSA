#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int> s={20,12,34};
	if(s.find(20)!= s.end()){
		cout<<"element is present";
	}
	else{
		cout<<"element is not present";
	}
	
	//Accessing first element
	auto t1= s.begin();
	
	//accessing last element
	auto t2 = next(t1,2);
	cout<<*t1<<endl<<*t2;
}
