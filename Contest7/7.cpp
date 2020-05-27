#include<bits/stdc++.h>
using namespace std;

int main(){	
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack<char> st;
		for(int i=0; i<s.size(); i++){
			if(s[i] == '(' || s[i] == ')' && st.size() == 0)
				st.push(s[i]);
			else if(s[i]==')'){
				if(st.size()>0 && st.top()=='(') st.pop();
				else st.push(s[i]);
			}
		}
		int a1=0, a2=0;
		while(st.size()>0){
			if(st.top()=='(') a1++;
			else a2++;
			st.pop();
		}
		int a = a1/2+a2/2+a1%2+a2%2;
		cout<<a<<endl;
	}
}
