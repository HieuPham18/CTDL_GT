#include<bits/stdc++.h>
#define ll long long
#define Max 1000000
using namespace std;
ll m,n,k, a[Max], b[Max], c[Max], p;
int main(){
	int t; cin>>t;
	while(t--){
		cin>>m>>n>>k;
		for(ll i=1; i<=m; i++) cin>>a[i];
		for(ll i=1; i<=n; i++) cin>>b[i];
		p = m+n;
			for(int i=1; i<=p; i++)
				if(i<=m) c[i]=a[i];
				else c[i]=b[i-m];
			sort(c+1, c+p+1);
		for(ll i=1; i<=p; i++)
		if(i==k) cout<<c[i]<<endl;
	}
}
