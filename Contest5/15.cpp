#include<bits/stdc++.h>
using namespace std;
int c[105][105][105];
	int tinh(string s1, string s2, string s3, int n, int m, int p){
		memset(c, 0, sizeof(c));
		for(int i=1; i<=n; i++){
			for(int j=1; j<=m; j++){
				for(int k=1; k<=p; k++){
					if(s1[i-1]==s2[j-1] && s2[j-1]==s3[k-1])
						c[i][j][k] = c[i-1][j-1][k-1]+1;
					else 
						c[i][j][k] = max(c[i-1][j][k], max(c[i][j-1][k], c[i][j][k-1]));
				}
			}
		}
		return c[n][m][p];
	}
int main(){
	int t, n, m, p; cin>>t;
	string s1, s2, s3;
	while(t--){
		cin>>n>>m>>p>>s1>>s2>>s3;
		cout<<tinh(s1,s2,s3,n,m,p)<<endl;
	}
}
