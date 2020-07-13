#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
main(){
	int t,n,m,u,v,i,j;
	cin >> t;
	while(t--){
		memset(a,0,sizeof(a));
		cin>>n>>m;
		for(i=0; i<m; i++){
			cin>>u>>v;
			a[u][v] = 1;
			a[v][u] = 1;
		}
		for(i=1; i<=n; i++){
			cout<<i<<": ";
			for(j=1; j<=n; j++)
				if(a[i][j]) cout<<j<<" ";
			cout<<endl;
		}
	}
}

