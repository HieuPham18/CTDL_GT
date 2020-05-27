#include<bits/stdc++.h>
using namespace std;
int c[1005][1005];
	int tinh(string s1, string s2){
		int m=s1.length(), n=s2.length();
		for(int i=0; i<=m; i++) c[i][0]=0;
		for(int i=0; i<=n; i++) c[0][i]=0;
		
		for(int i=1; i<=m; i++){
			for(int j=1; j<=n; j++){
				if(s1[i-1]==s2[j-1])
					c[i][j] = c[i-1][j-1]+1;
				else 
					c[i][j] = max(c[i-1][j], c[i][j-1]);
			}
		}
		return c[m][n];
	}
int main(){
	int t; cin>>t;
	string s1, s2;
	while(t--){
		cin>>s1>>s2;
		cout<<tinh(s1,s2)<<endl;
	}
}
