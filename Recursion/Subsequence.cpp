#include<bits/stdc++.h>
using namespace std;
                          //temp ko ham by reference pass nahi kar sakte
void solve(int i, int n, string temp, vector<string>& ans, string str){
	if(i == n){
		ans.push_back(temp);
		return;
	}
	solve(i+1, n, temp, ans, str); // exclude
	temp.push_back(str[i]);
	solve(i+1, n, temp, ans, str); // include
	//temp.pop_back(); agar temp ko by reference pass kiya
}

int main(){
	string str = "abc";
	vector<string> ans;
	string temp = "";
	int n = str.size();
	solve(0, n, temp, ans, str);

	for(int i = 0; i < ans.size(); i++){
		cout << ans[i] << endl;
	}
}

