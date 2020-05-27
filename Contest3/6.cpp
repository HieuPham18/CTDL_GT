#include<bits/stdc++.h>
using namespace std;
int t,n,a[100],b[100], dem;
main(){
	cin>>t;
	while(t--){
		cin>>n; dem=0;
		for(int i=1;i<=n;i++)	cin>>a[i];
		for(int i=1;i<=n;i++)	b[i]=a[i];
		sort(a+1,a+n+1);
		for(int i=1;i<=n;i++){
			if(a[i]!=b[i] && a[i]!=b[n-i+1]){
				cout<<"No"<<endl;
				break;
			}else dem++;
		}
		if(dem==n) cout<<"Yes"<<endl;
	}
}

