#include<bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int t; cin>>t;
	while(t--){
		long long k; string s; 
		cin>>k>>s;
		long long F[300]={0};
		priority_queue<long long, vector<long long> > q;
		for(int i=0; i<s.size(); i++) F[s[i]]++;
		for(int i=0; i<300; i++) if(F[i]>0) q.push(F[i]);
		while(q.size()>0 && k>0){
			long long top = q.top();
			q.pop();
			k--; top--;
			q.push(top);
		}	
		long long tmp=0;
		while(q.size()>0){
			tmp += q.top()*q.top();
			q.pop();
		}
		cout<<tmp<<endl;
	}
}
