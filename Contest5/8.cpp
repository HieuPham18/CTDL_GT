#include<bits/stdc++.h>
using namespace std;
int A[505][505], C[505][505], n, m;
int tinh(){
	memset(C, 0, sizeof(0));
	int kq=0;
	for(int i=0; i<=m; i++) C[0][i] = A[0][i];
	for(int i=0; i<=n; i++) C[i][0] = A[i][0];
	for(int i=1; i<=n; i++){
		for(int j=1; j<=m; j++){
			if(A[i][j]){
				C[i][j] = min(C[i-1][j], min(C[i][j-1], C[i-1][j-1])) + 1;
				kq = max(kq, C[i][j]);
			}
			else{
				C[i][j]=0;
			}
		}
	}
	return kq;
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
