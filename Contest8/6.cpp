#include<bits/stdc++.h>
using namespace std;
string Tinh(int n){
	queue<string> q;
	q.push("9");
	while(q.size()>0){
		string a = q.front();
		q.pop();
		long long b=0;
		for(int i=0; i<a.size(); i++){
			b=10*b+(int)(a[i]-'0');
			b%=n;
		}
		if(b==0) return a;
			q.push(a+"0");
			q.push(a+"9");
	}
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		cout<<Tinh(n)<<endl;
	}
}
