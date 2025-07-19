#include<iostream>
using namespace std;

void printArray(int arr[], int size){
	cout<<"Printing the array"<<endl;
	
	for(int i=0; i<size; i++){
		cout<<arr[i]<<" ";
	}
	cout<<"Printing DONE"<<endl;
}
int main(){
	int number[15];
	
	//access the array
	cout<<"Value at index 14"<<number[14]<<endl;
	
	//intialize
	int second[5] = {1,2,3};
	//value at 2nd index
	cout<<second[2]<<endl;
	
	int third[15] = {2,7};
	
	int n=3;
	printArray(third,15);
	
	int fourth[10] ={0};
	n = 10;
	printArray(fourth,10);
	
	int fourthSize = sizeof(fourth)/sizeof(int);
	cout<<"Size of fourth is"<<fourthSize<<endl;
	
	char ch[5] = {'a', 'e', 'i', 'o', 'u'};
	cout<<ch[3]<<endl;
	
	cout<<"Everything is fine";
}
