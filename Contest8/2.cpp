#include<bits/stdc++.h>
using namespace std;

int main(){
	string s; int a;
	queue<int> q;
	int n; cin>>n;
	while(n--){
		cin>>s;
		if(s=="PUSH"){
			cin>>a; q.push(a);
		}
		else if(s=="POP"){
			if(!q.empty()) q.pop();
		}
		else if(s=="PRINTFRONT"){
			if(!q.empty()) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
	}
}
