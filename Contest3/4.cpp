#include<bits/stdc++.h>
using namespace std;
int n, X[20];
long long a, b;
	long long tinh(int X[], int n){
		a=0; b=0;
		for(int i=0; i<n; i++){
			if(i%2==0) a=a*10+X[i];
			else  b=b*10+X[i];
		}
		return a+b;
	}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++) cin>>X[i];
		sort(X, X+n);
		cout<<tinh(X, n)<<endl;
		
	}
}
