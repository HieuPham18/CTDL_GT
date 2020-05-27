#include<bits/stdc++.h>
using namespace std;
int c[1005][1005];
	int tinh(string s, int n){
		for(int i=0; i<=n; i++) c[i][0]=0;
		for(int i=0; i<=n; i++) c[0][i]=0;
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=n; j++){
				if(s[i-1]==s[j-1] && i!=j)
					c[i][j] = c[i-1][j-1]+1;
				else 
					c[i][j] = max(c[i-1][j], c[i][j-1]);
			}
		}
		return c[n][n];
	}
int main(){
	int t,n; cin>>t;
	string s;
	while(t--){
		cin>>n>>s;
		cout<<tinh(s,n)<<endl;
	}
}
