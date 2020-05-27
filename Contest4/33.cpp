#include<bits/stdc++.h>
using namespace std;
int M=1e9+7;
long long tinh(long long n, long long k){
	if(k==0) return 1;
	long long x = tinh(n,k/2);
	if(k%2==0) return x*x%M;
	return n*(x*x%M)%M;	
}
long long dao(long long n){
	long long d=0;
	while(n>0){
		d=d*10+n%10;
		n/=10;
	}
	return d;
}
int main(){
	int t; cin>>t;
	long long n, k, d;
	while(t--){
		cin>>n;
		cout<<tinh(n,dao(n))<<endl;
	}
}
