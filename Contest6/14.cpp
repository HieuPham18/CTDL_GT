#include<bits/stdc++.h>
using namespace std;
int n, a[1000005];
void tinh(){
	a[0]=a[1]=1;
	for(int i=2; i<=sqrt(1000000); i++){
		if(a[i]==0){
			for(int j=i*2; j<=1000000; j+=i){
				a[j]=1;
			}
		}
	}
}
void xuly(int n){
	for(int i=2; i<=n/2; i++){
		if(a[i]==0 && a[n-i]==0){
			cout<<i<<" "<<n-i<<endl;
			return;
		}
	}
	cout<<"-1\n";
}
int main(){
	int t;
	tinh(); 
	cin>>t;
	while(t--){
		cin>>n;
		xuly(n);
	}
}
