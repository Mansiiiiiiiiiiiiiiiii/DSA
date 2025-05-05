#include<iostream>
using namespace std;
#include<vector>

int main(){
	vector<string> cars={"volvo","BMW","Ford"};
	for(string car:cars){
		cout<<car<<"\n";
	}
	cout<<cars[1]<<endl;
	cout<<cars.at(1)<<endl;
	cars[0]="Opel";
	cout<<cars.at(0);
}
