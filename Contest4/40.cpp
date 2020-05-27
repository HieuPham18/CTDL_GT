#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin>>t;
	int n, a[1000], dem;
	while(t--){
		cin>>n;
		dem=0;
		for(int i=1; i<=n; i++) cin>>a[i];
		for(int i=1; i<=n; i++)
			if(a[i]==0) dem++;
		cout<<dem<<endl;
	}
}
