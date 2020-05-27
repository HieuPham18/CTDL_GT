#include<bits/stdc++.h>
using namespace std;
void in(int a[], int n) {
	for (int i=1; i<=n; i++){
		if(i<n)cout<<a[i]<<" ";
		else cout<<a[i];
	}
	cout<<"]";
	cout<<endl;
}
void dequy(int a[], int n) {
	if (n<1) return;
	else {
		cout<<"[";
		in(a, n);
		int temp[n-1];
		for (int i=1; i <=n; i++) {
			int x = a[i] + a[i+1];
			temp[i] = x;
		}
		dequy(temp,n-1);
	}
}
int main() {
	int t, n, a[10];
	cin>>t;
	while(t--){
		cin>>n;
		for (int i=1; i<=n; i++) {
			cin>>a[i];
		}
		dequy(a,n);
		cout<<t;
	}
}
