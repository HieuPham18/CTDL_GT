#include<iostream>
using namespace std;
int n, a[1000];
void in(){
	for(int i=1; i<=n; i++)
			cout<<a[i]<<" ";
	cout<<endl;
}
void nhap(){
	for(int i=1; i<=n; i++)
			cin>>a[i];
}
void sinhkt(){
	int i=n-1;
	while(i>0&&a[i]>a[i+1]) i--;
	if(i==0){
		for(int i=1; i<=n; i++)
				a[i]=i;
	}
	else{
		int k=n;
		while(a[i]>a[k]) k--;
		int t=a[i]; a[i]=a[k]; a[k]=t;
		int r=i+1, s=n;
		while(r<=s){
			int t=a[r]; a[r]=a[s]; a[s]=t;
			r++; s--;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
 	    nhap();
	    sinhkt();
	    in();
	}
}
