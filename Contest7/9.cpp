#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;cin>>t;
	cin.ignore();
	while(t--){
		string st;
		int dem=0;
		stack<char> s;
		getline(cin,st);
		for(int i=0;i<=st.length();i++){
			char c=st[i];
			if(c=='(') s.push(c);
			else if(c==')'){
				if(!s.empty()) s.pop();
				else{
					s.push('(');
					dem++;
				}
			}
		}
		cout<<dem+s.size()/2<<endl;
	}
}

