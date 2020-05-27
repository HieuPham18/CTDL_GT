#include<iostream>
#include<algorithm>
using namespace std;
int n, k, a[20], b[20], kt;
	void xuly(){
		int tong=0, c[20], m=0;
		for(int i=1; i<=n; i++) tong+=a[i]*b[i];
		if(tong==k){
			kt=1;
			for(int i=1; i<=n; i++) 
					if(b[i]) c[m++]=a[i];
			cout<<"[";
			for(int i=0; i<m-1; i++) cout<<c[i]<<" ";
			cout<<c[m-1]<<"]";
		}
	}
	void Try(int i){
		for(int j=1; j>=0; j--){
			b[i]=j;
			if(i==n) xuly();
			else Try(i+1);
		}
	}
int main(){
	int t; cin>>t;
	while(t--){
		kt=0;
		cin>>n>>k;
		for(int i=1; i<=n; i++) cin>>a[i];
		sort(a+1, a+n+1);
		Try(1);
		if(kt=0) cout<<-1;
		cout<<endl;
	}
}
