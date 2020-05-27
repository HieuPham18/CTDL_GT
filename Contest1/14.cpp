#include<iostream>
using namespace std;
int n,k,a[50],b[50],tmp;
bool OK;
	void sinhkt(){
		int i=k;
		while(i>0&&a[i]==n-k+i) i--;
		if(i<=0) OK=true;
		else{
			a[i]++;
			for(int j=i+1; j<=k; j++)
				a[j]=a[j-1]+1;
		}
	}
	void Next(){
		tmp=0;
		for(int i=1;i<=k;i++) b[i]=a[i];
		OK=false;
		sinhkt();
		if(OK) tmp=k;
		else{
			for(int i=1;i<=k;i++){
				int count=0;
				for(int j=1;j<=k;j++){
					if(b[i]!=a[j]){
						count++;
					}
				}
				if(count==k) tmp++;
			}
		}
	}
	void nhap(){
		for(int i=1; i<=k; i++)
		cin>>a[i];
	}
main(){
	int t;cin>>t;
	while(t--){
		cin>>n>>k;
		nhap();
		Next();
		cout<<tmp;
		cout<<endl;
	}
}
