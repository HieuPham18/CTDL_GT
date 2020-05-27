#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		stack<char> st;
		bool kt;
		for(int i=0; i<s.size(); i++){
			if(s[i] == ')'){
				kt = 1;
				char top = st.top(); 
				st.pop();
				while(top != '('){
					if(top == '+' || top == '-' || top == '*' || top == '/')
					kt = 0;
					top = st.top();
					st.pop();
				}
				if(kt) break;
			}
			else st.push(s[i]);
		}
		if(kt) cout<<"Yes";
		else cout<<"No";
		cout<<endl;
	}
}

