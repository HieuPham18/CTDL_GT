#include<bits/stdc++.h>
using namespace std;
void in(int a[], int n) {
	cout<<"[";
	for (int i=1; i<=n; i++){
		if(i<n)cout<<a[i]<<" ";
		else cout<<a[n];
	}
	cout<<"]";
	if(n!=1) cout<<endl;
}
void dequy(int a[], int n) {
	if (n<1) return;
	else {
		int temp[n-1];
		for (int i=1; i <=n; i++) {
			temp[i] = a[i] + a[i+1];
		}
		in(a,n);
		dequy(temp,n-1);
	}
}
void nhap(int a[], int n){
	for (int i=1; i<=n; i++) {
			cin>>a[i];
	}
}
int main() {
	int t,n,a[10];cin>>t;
	while(t--){
		cin>>n;
		nhap(a,n);
		dequy(a,n);
		cout<<endl;
	}
}
