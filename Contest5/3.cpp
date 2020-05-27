#include<bits/stdc++.h>
using namespace std;
int F[40005], n, s, a[205];
int kt(){
	memset(F, 0, sizeof(F));
	F[0]=1;
	for(int i=1; i<=n; i++){
		for(int j=s; j>=a[i]; j--)
			if(F[j]==0 && F[j-a[i]]==1) F[j]=1;
	}
	return F[s];
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>s;
		for(int i=1; i<=n; i++) cin>>a[i];
		if(kt()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
