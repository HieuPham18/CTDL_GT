#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack<string> st;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='%' || s[i]=='^'){
				string a = st.top();
				st.pop();
				string b = st.top();
				st.pop();
				string c = s[i] + b + a;
				st.push(c);
			}
			else st.push(string(1, s[i]));
		}
		cout<<st.top()<<endl;
	}
}
