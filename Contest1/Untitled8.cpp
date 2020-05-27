#include<bits/stdc++.h>
using namespace std;
int n,k,x[10],ok=1;
void nhap(){
	cin>>n; k=1;
	x[k]=n;
}
void in(){
	cout<<"(";
	for(int i=1;i<=k;i++){
		if(i<k) cout<<x[i]<<" ";
		else cout<<x[k];
	}
	cout<<")"<<" ";
}
void Next_Division(){
	int i=k,j,R,S,D;
	while (i>0 && x[i]==1) i--;
	if(i>0){
		x[i]=x[i]-1;
		D=k-i+1;
		R=D/x[i];
		S=D%x[i];
		k=i;
		if(R>0){
			for(j=i+1;j<=i+R;j++) x[j]=x[i];
			k=k+R;
		}	
		if(S>0){
				k=k+1;x[k]=S;
		}
	}
	else ok=0;
}
int main (){
	int t;
	cin>>t;
	while(t--){
		nhap();ok=1;
		while(ok){
			in();
			Next_Division();
		}
		cout<<endl;
	}
}
