#include<bits/stdc++.h>
using namespace std;
int a[1000005], b[1000005];
int main(){
	int t, m, n, k, i, j; cin>>t;
	while(t--){
		cin>>n>>m;
		for(i=0; i<n; i++) cin>>a[i];
		for(i=0; i<m; i++) cin>>b[i];
		sort(a, a+n);
		sort(b, b+m);
		int c[n+m];
	 	i = j = k = 0;
		while(i<n && j<m)
			if(a[i]<=b[j]) c[k++]=a[i++];
			else c[k++]=b[j++];
		while(i<n) c[k++]=a[i++];
		while(j<m) c[k++]=b[j++];
		for(int i=0; i<n+m; i++) cout<<c[i]<<" ";
		cout<<endl;
	}
}
