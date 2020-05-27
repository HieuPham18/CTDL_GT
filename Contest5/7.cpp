#include<bits/stdc++.h>
using namespace std;
long long F[100000];
int M = 1e9+7;
long long tinh(int n, int k){
	memset(F, 0, sizeof(F));
	F[0] = 1;
	F[1] = 1;
	for(int i=2; i<=n; i++){
		for(int j=1; j<=i && j<=k; j++){
			F[i] = (F[i]+F[i-j])%M;
		}
	}
	return F[n];
}
int main(){
	int t, n, k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<tinh(n,k)<<endl;
	}
}
