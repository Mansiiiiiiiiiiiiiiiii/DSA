#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
	int start =0, end = size-1;
	
	
	while(start <= end){
		int mid= start + (end-start)/2;
		
		if(arr[mid] == key)
		return mid;
		
		if(arr[mid] < key)
		start=  mid+1;
		
		else
		end = mid-1;
		
		
	}
	return -1;
}
int main(){
	int even[6] = {2,4,6,8,10,12};
	int odd[5] ={3,5,7,9,11};
	
	int evenIndex = binarySearch(even, 6, 8);
	cout<<"Check if 8 is present at index "<<evenIndex<<endl;
	
	int oddIndex = binarySearch(odd, 5, 2);
	cout<<"Check if 2 is present "<< oddIndex<<endl;
	
	return 0;
	
}
