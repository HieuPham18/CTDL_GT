#include<bits/stdc++.h>
using namespace std;
int A[1005], C[1005][55], N, K;
	int tinh(){
		//memset(C,0,sizeof(C));
		for(int i=1; i<=N; i++){
			for(int j=0;j<=K; j++){
				C[i][j]=-1;
			}
		}
		C[1][A[1]%K] = 1;
		for(int i=2; i<=N; i++){
			for(int j=0; j<K; j++){
				C[i][j] = C[i-1][j];
				if(C[i-1][(j-A[i]+K)%K] != -1)
					C[i][j] = max(C[i][j], C[i-1][(j-A[i]+K)%K] + 1);
			}
		}
		return C[N][0];
	}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>N>>K;
		for(int i=1; i<=N; i++) cin>>A[i];
		cout<<tinh()<<endl;
	}
}
