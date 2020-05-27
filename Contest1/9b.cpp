#include<bits/stdc++.h>
using namespace std;
int a[100];
// in xau nhi phan nguoc
void solve(int k, int n, int pre){
	if(k==n+1){
		for(int i=1; i<=n; i++)cout<<a[i];
		cout<<" ";
		return;
	}
	if(pre=0){
		a[k]=0;
		solve(k+1,n,0);
		a[k]=1;
		solve(k+1,n,1);
	}
	else{
		a[k]=1;
		solve(k+1,n,0);
		a[k]=0;
		solve(k+1,n,1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		solve(1,n,0);
		cout<<endl;
	}
}

