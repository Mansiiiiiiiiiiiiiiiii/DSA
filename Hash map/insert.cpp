#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int, string> x = {{1,"Mansi"},{2,"Harshita"},{3,"Rupali"},{4,"Lavina"}};
	x.insert({5,"Ujjwal"});
	for(auto p:x){
		cout<<p.first<<" "<<p.second<<"\n";
	}
	return 0;
}
