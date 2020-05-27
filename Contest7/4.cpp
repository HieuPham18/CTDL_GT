#include<bits/stdc++.h>
using namespace std;

bool KT(string st){
	stack<char> s;
	for(int i=0; i<st.length(); i++){
			char c= st[i];
			if(c=='(' || c=='{' || c=='[')
				s.push(c);
			else{
				if(!s.empty() && c==']' && s.top()=='[')
					s.pop();
				else if(!s.empty() && c=='}' && s.top()=='{')
					s.pop();
				else if(!s.empty() && c==')' && s.top()=='(')
					s.pop();
				else
					return 0;
			}
		}
	return 1;
}
int main(){
	int t; cin>>t;
	while(t--){
		string st; cin>>st;
		if(KT(st)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}

