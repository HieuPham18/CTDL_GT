#include<bits/stdc++.h>
#define ll long long
#define M 10000000
using namespace std;
ll n, a[M], b[M-1];
	long long PT(){
		for(ll i=1; i<=n-1; i++)
			if(a[i]!=b[i]) return i;
	}
int main(){
	int t; cin>>t;	
	while(t--){
		cin>>n;
		for(ll i=1; i<=n; i++) cin>>a[i];
		for(ll i=1; i<=n-1; i++) cin>>b[i];
		ll kq = PT();
		cout<<kq<<endl;
	}
}
