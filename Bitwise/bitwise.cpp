#include<iostream>
using namespace std;

int main(){
	int a;
	cin>>a;
	int cnt = 0;
	while(a != 0){
		if((a&1) == 1) cnt++;
		a = a>>1;
	}
	cout<<cnt;
}
