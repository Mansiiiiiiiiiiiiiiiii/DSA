#include<iostream>
using namespace std;
void subset(string s, string curr="",int i=0){
	if(i == s.length()){
		cout<<curr;
		return ;
	}
	subset(s,curr, i+1);
	subset(s,curr+s[i],i+1);
}
int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "Subsets of the string are:\n";
    subset(s);

    return 0;
}

