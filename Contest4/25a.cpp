#include<bits/stdc++.h>
using namespace std;
long long F[100];
char FiBo(int n, long long k){
	if(n==1) return 'A';
	if(n==2) return 'B';
	if(k<=F[n-2]) return FiBo(n-2, k);
	return FiBo(n-1, k-F[n-2]);
}
int main(){
	int t, n; cin>>t;
	F[1]=1;F[2]=1;
	for(int i=3; i<=92; i++) F[i]=F[i-1]+F[i-2];
	long long k;
	while(t--){
		cin>>n>>k;
		cout<<FiBo(n,k)<<endl;
	}
}
