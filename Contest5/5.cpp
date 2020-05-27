#include<bits/stdc++.h>
#define MOD 1000000007
#define ll long long
using namespace std;
ll c[1005][1005];
int main(){
	int t, n, k; cin>>t;
	for(ll i=0;i<=1000;i++) c[0][i]=1;
	for(ll j=1;j<=1000;j++){
		for(ll i=1;i<=j;i++){
			c[i][j]=(c[i][j-1]+c[i-1][j-1])%MOD;
		}
	}
	while(t--){
		cin>>n>>k;
		cout<<c[k][n]<<endl;
	}
}

