#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;	cin>>t;
	ll n, k;
	while(t--) {
		cin>>n>>k;
		ll a[n];
		for(int i=1; i<=n; i++) cin>>a[i];
		ll dem = 0;
		for(ll i=1; i<=n-1; i++) {
			for(ll j=i+1; j<=n; j++) {
				if(a[i] + a[j] == k)
					dem++;
			}
		}
		cout<<dem<<endl;
	}
}
