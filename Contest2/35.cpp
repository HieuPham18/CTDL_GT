#include<iostream>
using namespace std;
int n, k, s, C[20], d;
void in(){
	int tong=0;
	for(int i=1; i<=k; i++)
			tong=tong+C[i];
	if(tong==s) d++;
}
void Try(int i){
	for(int j=C[i-1]+1; j<=n-k+i; j++){
		C[i]=j;
		if(i==k) in();
		else Try(i+1);
	}
}
int main(){
	while(1){
		cin>>n>>k>>s; d=0;
		if(n==0&&k==0&&s==0) break;
		Try(1);
		cout<<d<<endl;
	}
}

