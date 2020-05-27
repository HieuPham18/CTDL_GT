#include<bits/stdc++.h>
using namespace std;
 
int main(){
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		stack<char> st;
		getline(cin, s);
		for(int i=0; i<s.length(); i++){
			if(s[i] != ' ') st.push(s[i]);
			if(s[i] == ' ' || s[i+1] == NULL){
				while(!st.empty()){
					cout<<st.top(); 
					st.pop();
				}
				cout<<" ";
			}
		}
	cout<<endl;
	}
}
 
