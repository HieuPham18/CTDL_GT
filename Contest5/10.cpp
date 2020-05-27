#include<bits/stdc++.h>
using namespace std;
int A[1005][1005], C[1005][1005], n, m;
int tinh(){
	memset(C, 0, sizeof(0));
	int kq=0;
	for(int i=1; i<=m; i++) C[1][i] = C[1][i-1] + A[1][i];
	for(int i=1; i<=n; i++) C[i][1] = C[i-1][1] + A[i][1];
	for(int i=2; i<=n; i++){
		for(int j=2; j<=m; j++){		
			C[i][j] = min(C[i-1][j], min(C[i][j-1], C[i-1][j-1])) + A[i][j];
		}
	}
	return C[n][m];
}
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=1; i<=n; i++)
			for(int j=1; j<=m; j++) 
				cin>>A[i][j];
		cout<<tinh()<<endl;
	}
}
