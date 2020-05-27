#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;	cin>>t;
	while(t--){
		ll n, x;	
		cin>>n;
		vector<ll> v;
		for(ll i=1; i<=n; i++) {
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(), v.end());
		for(ll i=0; i<n; i++)
			cout<<v.at(i)<<" ";
		cout<<endl;
	}
}
