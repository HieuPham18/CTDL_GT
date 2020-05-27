#include<bits/stdc++.h>
using namespace std;
int a[1005], F[1005], n, k;
int M = 1e9+7;
int tinh(){
	memset(F, 0, sizeof(F));
	F[0]=1;
	for(int i=1; i<=k; i++){
		for(int j=1; j<=n; j++){
			if(a[j]<=i) 
				F[i] = (F[i] + F[i-a[j]])%M;
		}
	}
	return F[k];
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1; i<=n; i++) cin>>a[i];
		cout<<tinh()<<endl;
	}
}
