#include<bits/stdc++.h>
using namespace std;
int TimKiem(int a[], int l, int h, int x){
	if(l>h) return -1;
	int m = (l+h)/2;
	if(a[m]==x) return m;
	if(a[l]<=a[m]){
		if(a[l]<=x && a[m]>=x)
			return TimKiem(a, l, m-1, x);
		return TimKiem(a, m+1, h, x);
	}
	if(a[m]<=x && a[h]>=x)
		return TimKiem(a, m+1, h, x);
	return TimKiem(a, l, m-1, x);
}
int main(){
	int t, n, x; cin>>t;
	while(t--){
		cin>>n>>x;
		int a[n+1];
		for(int i=0; i<n; i++) cin>>a[i];
		cout<<TimKiem(a, 0, n-1, x) + 1<<endl;
	}
}
