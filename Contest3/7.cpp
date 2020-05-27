#include<bits/stdc++.h>
#define max 10000000
#define ll long long
using namespace std;
ll n; ll a[max]; ll b[max]; ll tong; 
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n; tong=0;
		for(ll i=0; i<n; i++) cin>>a[i];
		for(ll i=0; i<n; i++) cin>>b[i];
		sort(a,a+n);
		sort(b, b+n, greater<ll>());
		for(ll i=0; i<n; i++) tong+=a[i]*b[i];
		cout<<tong<<endl;
	}
}
