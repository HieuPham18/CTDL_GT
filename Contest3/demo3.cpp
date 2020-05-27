#inlude<bits/stdc++.h>

using namespace std;
int main(){
	int n, a[n], m, t; cin>>t;
	m = 1000000007
	while(t--){
		cin>>n; max=0;
		for(int i=0; i<n; i++) cin>>a[i];
		sort(a,a+n);
		for(int i=0; i<n; i++){
			max+=a[i]*i;
		}
		cout<<max%m<<endl;;
	}
}
