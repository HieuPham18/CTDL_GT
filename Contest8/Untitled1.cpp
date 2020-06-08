#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	while(t--){
		int a, tmp=0;
		deque<int> q;
		cin>>a;
		while(a--){
			int so; cin>>so;
			if(so==1) cout<<q.size()<<endl;
			else if(so==2){
				if(q.size()>0) cout<<"N0"<<endl;
				else cout<<"YES"<<endl;
			} 
			else if(so==3){
				int n; cin>>n;
				q.push_back(n);
			}
			else if(so==4 && q.size()>0) q.pop_front();
			else if(so==5){
				if(q.size()>0) cout<<q.front()<<endl;
				else cout<<-1<<endl;
			}
			else if(so==6){
				if(q.size()>0) cout<<q.back()<<endl;
				else cout<<-1<<endl;
			}
			tmp=so;
		}
		if(tmp==3 || tmp==4) cout<<endl;
	}
}
