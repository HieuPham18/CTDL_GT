#include<iostream>
using namespace std;
int n, a[20][20], kt;
string s;
	void in(int m){
	  	for(int i=0; i<m; i++)
 			cout<<s[i];
        cout<<" ";
	}
	void dequy(int i, int j, int m){
		if(i==n && j==n){
			kt=1; in(m); return;
		}
		if(i<n && a[i+1][j]==1){
			s[m]='D';
			dequy(i+1,j,m+1);
		}
		if(j<n && a[i][j+1]==1){
			s[m]='R';
			dequy(i,j+1,m+1);
		}
	}
	void nhap(){
		for(int i=1; i<=n; i++)
		    for(int j=1; j<=n; j++)
		    		cin>>a[i][j];
	}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n;kt=0;s="";
		nhap(); 
		if(a[1][1]==0 || a[n][n]==0) cout<<-1;
		else{
			dequy(1,1,0);
			if(!kt) cout<<-1;
		}
		cout<<endl;
	}	
	return 0;
}
