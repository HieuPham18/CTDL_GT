#include<bits/stdc++.h>
using namespace std;
int n=8, a[100], c[100][100], tmp=0;
bool cot[100], cheo1[100], cheo2[100];
	void nhap(){
		for(int i=1; i<=n; i++)
			for(int j=1; j<=n; j++)
				cin>>c[i][j];
	}
	int tinhtong(){
		int s=0;
		for(int i=1; i<=n; i++)
			s+=c[i][a[i]];
		return s;
	}
	void Try(int i){
		for(int j=1; j<=n; j++){
			if(!(cot[j] || cheo1[i-j+n] || cheo2[i+j-1])){
				a[i]=j;
				cot[j]=1; cheo1[i-j+n]=1; cheo2[i+j-1]=1;
				if(i==n){
					int t = tinhtong();
					if(t>tmp) tmp=t;
				}
				else Try(i+1);
				cot[j]=0; cheo1[i-j+n]=0; cheo2[i+j-1]=0;
			}
		}
	}
int main(){
	int t;cin>>t;
	while(t--){
		tmp=0;
		nhap();
		Try(1);
		cout<<tmp<<endl;
	}
	return 0;
}
