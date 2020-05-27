#include<bits/stdc++.h>
using namespace std;
int main(){
	int t, i, j, a[1005], n; cin>>t;
	while(t--){
		cin>>n;
		for(i=0; i<n; i++) cin>>a[i];
		sort(a, a+n);
		for(i=n-1, j=0; i>j; i--, j++)
			cout<<a[i]<<" "<<a[j]<<" ";
		if(i==j) cout<<a[i];
		cout<<endl;
	}
}
