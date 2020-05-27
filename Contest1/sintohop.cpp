#include<iostream>
using namespace std;
int n, k , a[100], stop=0;
void in(){
	for(int i=1; i<=k; i++)
			cout<<a[i]<<" ";
	cout<<endl;
}
void khoitao(){
	for(int i=1; i<=k; i++)
			a[i]=i;
}
void sinhkt(){
	int i=k;
	while(a[i]==n-k+i){
		i--;
	}
	if(i==0) stop=1;
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
		stop=0;
		cin>>n>>k;
		khoitao();
		while(!stop){
			in();
			sinhkt();
		}
		cout<<endl;
	}
}
