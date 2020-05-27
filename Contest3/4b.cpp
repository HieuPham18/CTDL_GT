#include<bits/stdc++.h>
#define ll long long
using namespace std; 
ll kq; ll a; ll b;
int main(){
	int t; cin>>t;
	while(t--){
		int n, A[20]; kq=0, a=0, b=0;
		cin>>n; 
		for(int i=0; i<n; i++) cin>>A[i];
		sort(a,a+n);
		for(int i=0; i<n; i++){
			if(i%2==0) a=a*10+A[i];
			else b=b*10+A[i];
			kq=a+b;
		}
		cout<<kq<<endl;
	}
}
