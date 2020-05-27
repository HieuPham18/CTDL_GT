#include<iostream>
#include<algorithm>
using namespace std;
int B[20], A[20], n, k, kt;

	void xuly(){
	  	int tong=0, C[20], m=0;
	  	for(int i=1; i<=n; i++) tong+=A[i]*B[i];
	  	if(tong==k){
	  		kt=1;
	  		for(int i=1; i<=n; i++)
	  				if(B[i]) C[m++]=A[i];
 			cout<<"[";
 			for(int i=0; i<m-1; i++) cout<<C[i]<<" ";
 			cout<<C[m-1]<<"]";
		}
	}
	
	void Try(int i){
		for(int j=1; j>=0; j--){
			B[i]=j;
			if(i==n) xuly();
			else Try(i+1);
		}
	}
int main(){
	int t; cin>>t;
	while(t--){
		kt=0;
		cin>>n>>k;
		for(int i=1; i<=n; i++) cin>>A[i];
		sort(A+1,A+n+1);
		Try(1);
		if(kt==0) cout<<-1;
		cout<<endl;
	}
}
