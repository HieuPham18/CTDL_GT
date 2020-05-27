#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, d, c, i, a[1005]; cin>>t;
	while(t--){
		cin>>n; 
		for(i=1; i<=n; i++) cin>>a[i];
		sort(a+1, a+1+n);
		c=n; d=a[n]-a[1]+1;
		for(i=1; i<n; i++){
			if(a[i]==a[i+1]) c--;
		}
		cout<<d-c<<endl;
	}
}
