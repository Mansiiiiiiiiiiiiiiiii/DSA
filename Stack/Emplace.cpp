#include<iostream>
#include<stack>
using namespace std;
 int main(){
 stack<int> st;
 st.emplace(1);
 st.emplace(2);
 st.emplace(3);
 st.emplace(4);
 st.emplace(5);
 st.emplace(6);

 cout<<"stack = "<<endl;
 while(!st.empty()){
 cout<<st.top()<<endl;
 st.pop();
 }
 return 0;
 }
