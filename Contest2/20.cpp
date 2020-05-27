#include<bits/stdc++.h>
using namespace std;
void in(int a[], int n) {
	for (int i=1; i<=n; i++){
		if(i<n) cout<<a[i]<<" ";
		else cout<<a[i];
	}
	cout<<"]";
}
void dequy(int a[], int n) {
	if (n<1) return;
	else {
		int temp[n-1];
		for (int i=1; i<=n; i++) {
			int x = a[i] + a[i+1];
			temp[i] = x;
		}
		dequy(temp, n - 1);
		cout<<"[";
		in(a, n);
	}
}
int main() {
	int T, n, a[100];
	cin>>T;
	while(T--){
		cin >> n;
		for (int i=1; i<=n; i++) {
			cin>>a[i];
		}
		dequy(a,n);
		cout<<endl;
	}
}
