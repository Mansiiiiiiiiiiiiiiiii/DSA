#include<bits/stdc++.h>
using namespace std;

int main(){
	map<int, string> m {{1,"Mansi"},{2,"Kumari"},{3,"Khushi"},{4,"Sharma"}};
	for(auto &p:m){
		cout<<p.first<<" "<<p.second<<"\n";
	}
	return 0;
}
