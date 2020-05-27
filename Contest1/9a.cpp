#include<iostream>
using namespace std;
 
class Gray1{
	int m;
	int n;
	int a[10];
	public:
	void nhap();
	void xuat();
};
void Gray1::nhap(){
	cin>>m;
	a[0]=0;
	a[1]=1;
	int p=1;
	n=2;	
	for(int i=2;i<=m;i++){
		p=p*2;
		int u=2*n-1;
		for(int j=n;j<=u;j++) a[j]=a[u-j]+p;
		n=n*2;
	}	
}
void Gray1::xuat(){
	int b[10];
	for(int i=0;i<n;i++){
		int k=0;
		int u=a[i];
		while(u>0){
			b[k++]=u%2;
			u/=2;			
	}
	for(int j=k+1;j<=m;j++) cout<<"0";
	while(k>=1) cout<<b[--k];
	cout<<" ";
	}
}
int main(){
	int t;cin>>t;
	Gray1 G;
	while(t--){
		G.nhap();
		G.xuat();
		cout<<endl;
	}
}
 
 
