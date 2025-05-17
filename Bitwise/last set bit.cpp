#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	int cnt = 0;
	while(a){
		cnt++;
		a = a&(a-1);
	}
	cout<<a;
}
