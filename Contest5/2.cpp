#include<bits/stdc++.h>
using namespace std;
int tinh(int a[], int n){
	int F[1005], kq=0;
	for(int i=1; i<=n; i++){
		F[i]=1;
		for(int j=1; j<=i; j++){
			if(a[j]<a[i]){
				F[i]= max(F[i], F[j]+1);
			}
		}
		kq=max(kq,F[i]);
	}
	return kq;
}
int main(){
	int n, a[1005];
	cin>>n;
	for(int i=1; i<=n; i++) cin>>a[i];
	cout<<tinh(a,n)<<endl;
}
