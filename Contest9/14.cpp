#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> List[1005]; 

void DFS(int u, int v){
	if(chuaxet[v]==1) return;
	chuaxet[u]=1;
	for(int i=0; i<List[u].size(); i++){
		if(chuaxet[List[u][i]]==0){
			chuaxet[List[u][i]]=1;
			DFS(List[u][i],v);
		}
	}
}
int main(){
	int t, u, v, q, n, m;
	cin>>t;
	while(t--){
		cin>>n>>m;
		for(int i=0; i<=n; i++) List[i].clear();
		for(int i=0; i<m; i++){
			cin>>u>>v;
			List[u].push_back(v);
			List[v].push_back(u);
		}
		cin>>q;
		while(q--){
			memset(chuaxet, false, sizeof(chuaxet));
			cin>>u>>v;	
			DFS(u,v);
			if(chuaxet[v]) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
	}
}
