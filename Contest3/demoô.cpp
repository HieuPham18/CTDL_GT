#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t; cin>>t;
	int n, A[20], kq, a, b;
	while(t--){
		cin>>n; 
		for(int i=0; i<n; i++) cin>>A[i];
		sort(a,a+n);
		for(int i=0; i<n; i++){
			if(i%2==0) a=a*10+A[i];
			else b=b*10+A[i];
		}
		kq=a+b;
		cout<<kq<<endl;
	}
}
