#include<bits/stdc++.h>
using namespace std;

void sort(vector<int> &arr){
	int n = arr.size();
	for(int i=0; i<n; i++){
		int MIN_IDX=i;
		for(int j=i+1; j<n; j++){
			if(arr[j] < arr[MIN_IDX]){
					MIN_IDX=j;
			}
		
		}
		swap(arr[i],arr[MIN_IDX]);
	}
}
 int main(){
 	vector<int> arr={3,2,1,4,5};
 	sort(arr);
 	
 	for(int i:arr){
 		cout<<i<<" ";
	 }
 	return 0;
 }
