#include<bits/stdc++.h>
#define M 10000000
#define ll long long
using namespace std;
ll n, x, a[M], Max, k;
	long long flowr(){
		Max=a[1];
		if(a[1]>x) return -1;
		else{
			for(int i=1; i<=n; i++){
				if(a[i]>Max&&a[i]<=x){
				Max=a[i]; 
				k=i;
				}
			}
			return k;
		}
	}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=1; i<=n; i++) cin>>a[i];
		ll kq=flowr();
		if(kq!=-1) cout<<k;
		else cout<<-1;
		cout<<endl;
	}
}
