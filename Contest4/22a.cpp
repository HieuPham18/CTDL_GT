#include<bits/stdc++.h>
using namespace std; 
long long n, k, a[100000];
int TKnhiphan(){
	for(int i=1; i<=n; i++)
		if(a[i]==k) 
		return i;
	return -1;
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=1; i<=n; i++) cin>>a[i];
		int kq=TKnhiphan();
		if(kq!=-1) cout<<kq;
		else cout<<"NO";
		cout<<endl;
	}
}
