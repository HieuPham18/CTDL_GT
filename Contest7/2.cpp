#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, a; cin>>t;
	stack<int> st2;
	cin.ignore();
	while(t--){
		string s; cin>>s;
		if(s == "PUSH"){
			cin>>a;
			cin.ignore();
			st2.push(a);
		}
		if(s == "PRINT"){
			if(st2.empty()) cout<<"NONE"<<endl;
			else cout<<st2.top()<<endl;
		}
		if(s == "POP")
			if(!st2.empty()) st2.pop();
	}
}

