#include<bits/stdc++.h>
using namespace std;

int main(){
	set<int> s={20,10,30,40};
	
	//Deleting the element
	s.erase(20);
	
	//Deleting the first elemnt
	s.erase(s.begin());
	
	for(auto x:s){
		cout<<x<<" ";
	}
}
