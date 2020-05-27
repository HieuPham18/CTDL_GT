#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;	cin>>t;
	while(t--){
		ll n, m;	
		cin>>n>>m;
		ll x[n], y[m];
		for(int i=1; i<=n; i++) cin>>x[i];
		for(int i=1; i<=m ;i++) cin>>y[i];
		ll dem = 0;
		for(ll i=1; i<=n; i++) {
			for(ll j=1; j<=m; j++) {
				if(x[i] > y[j])
					dem++;	
			}
		}
		cout<<dem<<endl;
	}
}
