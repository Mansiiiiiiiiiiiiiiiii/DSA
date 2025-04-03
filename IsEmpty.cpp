#include <iostream>
#include <stack>
using namespace std;

int main(){
stack<int> st;
if(st.empty()){
    cout<<"Stack is empty"<<endl;
}

else{
    cout<<"Stack is not empty"<<endl;
}

st.push(11);
if(st.empty()){
    cout<<"Stack is empty"<<endl;
}

else{
     cout<<"Stack is NOT empty"<<endl;
}

}
