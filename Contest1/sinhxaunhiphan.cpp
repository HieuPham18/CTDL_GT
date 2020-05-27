#include<iostream>
using namespace std;
int n, a[100],stop=0;
void in(){
	for(int i=1; i<=n; i++)
			cout<<a[i]<<" ";
	cout<<endl;
}
void khoitao(){
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}
void sinhkt(){
	int i=n;
	while(a[i]!=0){
		a[i]=0;i--;
	}
	if(i==0) stop=1;
	else a[i]=1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		stop=0;
		while(!stop){
			in();
			sinhkt();
		}
		cout<<endl;
	}
}
