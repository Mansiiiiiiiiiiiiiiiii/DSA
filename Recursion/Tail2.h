#include<iostream>
using namespace std;
void fun(int n){
if(n>0){
cout<<n<<" ";
fun(n-1);
}
}
int main(){
int n=4;
fun(n);
return 0;
}
