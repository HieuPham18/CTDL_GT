#include<bits/stdc++.h>
using namespace std;
int F[5005][5005];
	int tinh(string s){
		int n = s.length();
		for(int i=0; i<n; i++) F[i][i]=1;
		for(int i=n-1; i>=0; i--){
			for(int j=i+1; j<n; j++){
				if(s[i] == s[j])
					F[i][j] = F[i+1][j-1] + 2;
				else 
					F[i][j] = max(F[i+1][j], F[i][j-1]);		
			}
		}
		return F[0][n-1];
	}
int main(){
	int t; cin>>t;
	string s;
	while(t--){
		cin>>s; 
		cout<<tinh(s)<<endl;
	}
}

