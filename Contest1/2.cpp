#include<iostream>
using namespace std;
int n, k, a[100];
void nhap(){
	for(int i=1; i<=k; i++)
		cin>>a[i];
}
void xuat(){
	for(int i=1; i<=k; i++)
		cout<<a[i]<<" ";
}
sinhkt(){
	int i=k;
	while(a[i]==n-k+i) i--;
	if(i==0){
		for(int i=1; i<=k; i++){
			a[i]=i;
		}
	}
	else{
		a[i]++;
		for(int j=i+1; j<=k; j++){
			a[j]=a[j-1]+1;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		nhap();
		sinhkt();
		xuat();
		cout<<endl;
	}
}
