#include<bits/stdc++.h>
#define m 1000000007
#define ll long long
using namespace std;
int main(){
	int t; cin>>t;
	while(t--){
		ll n; cin>>n;
		ll a[n];
		for(ll i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
		ll tong =0;
		for(ll i=0; i<n; i++){
			tong = (tong + (a[i] * i) % m) % m;
		}
		cout<<tong<<endl;
	}
}
