#include<bits/stdc++.h>
using namespace std;
int M =1e9+7;
int C[105][50005];
	void tinh(){
		for(int i=1; i<=9; i++) C[1][i] = 1;
		
		for(int i=1; i<=100; i++){
			for(int j=1; j<=50000; j++){
				for(int k=0; k<=9; k++){
					if(k<=j){
						C[i][j] = (C[i][j] + C[i-1][j-k])%M;
					}
					else{
						break;
					}
				}
			}
		}
	}
int main(){
	int t, n, k; cin>>t;
	tinh();
	while(t--){
		cin>>n>>k;
		cout<<C[n][k]<<endl;
	}
}
