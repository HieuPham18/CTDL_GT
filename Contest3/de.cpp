#include<bits/stdc++.h>
using namespace std;
int n, X[20], a, b;
long long kq;
	long long tinh(){
		kq=0; a=0; b=0;
		for(int i=0; i<n; i++){
			if(i%2==0) a=a*10+X[i];
			else  b=b*10+X[i];
		}
		kq=a+b;
		return kq;
	}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0; i<n; i++) cin>>X[i];
		sort(X, X+n);
		tinh();
		cout<<kq<<endl;
	}
}
