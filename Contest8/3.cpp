#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	deque<int> q;
	while(t--){
		string s; cin>>s;
		if(s=="PUSHBACK"){
			int so; cin>>so;
			q.push_back(so);
		}
		else if(s=="PUSHFRONT"){
			int so; cin>>so;
			q.push_front(so);
		}
		else if(s=="PRINTFRONT"){
			if(q.size()>0) cout<<q.front()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(s=="PRINTBACK"){
			if(q.size()>0) cout<<q.back()<<endl;
			else cout<<"NONE"<<endl;
		}
		else if(s=="POPFRONT" && q.size()>0) q.pop_front();
		else if(s=="POPBACK" && q.size()>0) q.pop_back();
	}
}
