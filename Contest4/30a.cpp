#include<bits/stdc++.h>
using namespace std;
int M = 1000000007;
long long Fibonacci(long long n){
    if (n==0) return 0;
    if (n==1) return 1;
    int i,F1=0,F2=1,F;
    for (i=2; i<=n; i++){
        F=(F1+F2)%M; F1=F2; F2=F;
    }
    return F;
}
int main(){
    int t; cin>>t;
    long long n;
    while(t--){
    cin>>n;
  	cout<<Fibonacci(n)<<endl;
	}
	return 0;
}
