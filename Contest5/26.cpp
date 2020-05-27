#include<bits/stdc++.h>
using namespace std;
int F[1005][25005], n, v, a[1005];
	int tinh(){
		for(int i=0; i<=n; i++) F[i][0]=0;
		for(int i=0; i<=v; i++) F[0][i]=0;
		
		for(int i=1; i<=n; i++){
			for(int j=1; j<=v; j++){
				F[i][j]=F[i-1][j];
				if(j>=a[i])
					F[i][j]= max(F[i-1][j-a[i]] + a[i], F[i][j]);
			}
		}
		return F[n][v];
	}
int main(){
		cin>>v>>n;
		for(int i=1; i<=n; i++) cin>>a[i];
		cout<<tinh()<<endl;
}
