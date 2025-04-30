#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int> s={1,2,3};
	
	//insert and emplace both are used to add elements in set
	s.insert(10);
	s.emplace(2);
	s.insert(14);
	
	for(int x:s ){
		cout<<x<<endl;
		
	}
}
