#include<bits/stdc++.h>
using namespace std;
int n, a[100000000], i;

void Nhap(){
	cin>>n;
	for(int i=1; i<n; i++) cin>>a[n];
	sort(a+1, a+1+n);
}
void Xuat(){
	int kq=a[i], i=1;
	while(kq=a[i]){
		kq++; i++;
	}
	cout<<kq<<endl;
}
int main(){
	int t; cin>>t;
	while(t--){
		Nhap();
		Xuat();
	}
}
