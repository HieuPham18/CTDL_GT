#include <bits/stdc++.h>
using namespace std;
int n,a[20][20],b[20][20]={0},kt;
string s;
	void in(int m){
	  	for(int i=0; i<m; i++)
 			cout<<s[i];
        cout<<" ";
	}
	void Try(int i, int j, int m){
		if(i==n && j==n){
			in(m); kt=1; return;
		}
		if(i<n && a[i+1][j]==1 && !b[i+1][j]){
			s[m]='D';
			b[i+1][j]=1;
			Try(i+1,j,m+1);
			b[i+1][j]=0;
		}
		if(j>0 && a[i][j-1]==1 && !b[i][j-1]){
			s[m]='L';
			b[i][j-1]=1;
			Try(i,j-1,m+1);
			b[i][j-1]=0;
		}
		if(j<n && a[i][j+1]==1 && !b[i][j+1]){
			s[m]='R';
			b[i][j+1]=1;
			Try(i,j+1,m+1);
			b[i][j+1]=0;
		}
		if(i>0 && a[i-1][j]==1 && !b[i-1][j]){
			s[m]='U';
			b[i-1][j]=1;
			Try(i-1,j,m+1);
			b[i-1][j]=0;
		}
	}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;kt=0;s="";
		for(int i=1;i<=n;i++) for(int j=1;j<=n;j++) cin>>a[i][j];
		b[1][1]=1;
		if(a[1][1]==0) cout<<-1;
		else{
			Try(1,1,0);
			if(!kt) cout<<-1;
		}
		cout<<endl;
	}
}
