#include<bits/stdc++.h>
using namespace std;
int main(){
	int n, k, a[51], tong1, tong2, kq;
	int t; cin>>t;
	while(t--){
		cin>>n>>k; 
		tong1=0, tong2=0, kq=0;
		for(int i=0; i<n; i++) cin>>a[i];
		if(k<=n/2){
			sort(a,a+n);
			for(int i=0; i<k; i++) tong1+=a[i];
			for(int i=k; i<n; i++) tong2+=a[i];	
			kq=tong2-tong1;
		}
		else{
			sort(a, a+n, greater<int>());
			for(int i=0; i<k; i++) tong1+=a[i];
			for(int i=k; i<n; i++) tong2+=a[i];	
			kq=tong1-tong2;
		}
		cout<<kq;
		cout<<endl;
	}
}
