#include<bits/stdc++.h>
using namespace std;
	long long CS_k(long long n, int k){ 
		int dem=0,s,sum=0;
		while(n>0){
			s=n%10;	n=n/10;
			sum += s*tinh(k,dem);
			dem++;
		}
		return sum;
	}
	long long CS_10(long long n, int k){
		int sum=0,s,dem=0;
		while(n>0){							
			s=n%k; n=n/k;
			sum += s*tinh(10,dem);
			dem++;
		}
		return sum;
	}
	long long tinh(long long n, int k){
		if(k==0) return 1;
		long long x=tinh(n,k/2);
		if(k%2==1) return (x*x)*n;
		return x*x; 
	}
main(){
	int k;
	long long a, b;
	cin>>k>>a>>b;
	long long x=CS_k(a,k) + CS_k(b,k);
	cout<<CS_10(x,k);
}
