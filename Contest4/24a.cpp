#include<bits/stdc++.h>
using namespace std;
int M = 123456789;
long long tinh(int n, long long k){
	if(k==0) return 1;
	long long x = tinh(n,k/2);
	if(k%2==0) return x*x%M;
	else return n*(x*x%M)%M;
}
int main(){
	int t; cin>>t;
	long long n;
	while(t--){
		cin>>n;
		cout<<tinh(2,n-1)<<endl;
	}
}
