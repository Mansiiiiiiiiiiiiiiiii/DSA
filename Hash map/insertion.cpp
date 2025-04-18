#include<bits/stdc++.h>
using namespace std;

int main(){
	//unordered 
	unordered_map<string,int> m;
	
	//insertion
	
	//1
	pair<string,int> p= make_pair("mansi",2);
	m.insert(p);
	
	//2
	pair<string,int>pair2("kumari",3);
	m.insert(pair2);
	
	//3
	m["palak"]=1;
	
	//serach
	cout<<m["mansi"]<<endl;
	cout<<m.at("kumari")<<endl;
	
	cout<<m["unknownKey"]<<endl;
	cout<<m.at("unknownKey")<<endl;
	
	//size
	cout<<m.size()<<endl;
	
	//to check presence
	cout<<m.count("mansi")<<endl;
	
	//iterator
	unordered_map<string,int> :: iterator it = m.begin();
	
	while(it != m.end()){
		cout<<it -> first<<" "<<it -> second <<endl;
		it++;
	}
	return 0;
}
