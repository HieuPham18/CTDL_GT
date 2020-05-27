#include<bits/stdc++.h>
using namespace std;
int F[1005][1005];
int M=1e9+7;
	int tinh(int k, int n){
		if(k==0||k==n)return 1;
		else{
			for(int i=0; i<=k; i++){
				for(int j=0; j<=n; j++){
					if(i==0 || i==j) 
						F[i][j]=1;
					else 
						F[i][j] = (F[i][j-1]%M + F[i-1][j-1]%M)%M;
				}
			}
		}
		return F[k][n];
	}
int main(){
	int t, n, k; cin>>t;
	while(t--){
		cin>>n>>k;
		cout<<tinh(k,n)<<endl;
	}
}
