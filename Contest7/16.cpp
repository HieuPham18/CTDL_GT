#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		stack<long long> st;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='%' || s[i]=='^'){
				long long a = st.top();
				st.pop();
				long long b = st.top();
				st.pop();
				long long c;
				if(s[i]=='+') c = b+a;
				else if(s[i]=='-') c=b-a;
				else if(s[i]=='*') c=b*a;
				else if(s[i]=='/') c=b/a;
				else if(s[i]=='%') c=b%a;
				else if(s[i]=='^'){
					c=b; 
					for(int i=0; i<a-1; i++) c*=b;
				}
				st.push(c);
			}
			else st.push((long long)(s[i]-'0'));
		}
		cout<<st.top()<<endl;
	}
}
