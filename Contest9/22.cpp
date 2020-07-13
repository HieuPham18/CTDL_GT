#include<bits/stdc++.h>
using namespace std;
int m, n, u;
bool chuaxet[1005];
vector<int> List[1005];

void BFS(int u){
	queue<int>q; q.push(u);
	chuaxet[u]=false;
	//cout<<u<<" ";
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0; i<List[x].size(); i++){
			int y=List[x][i];
			if(chuaxet[y]){
				q.push(y);
				chuaxet[y]=false;
				//cout<<y<<" ";
			}
		}
	}
	//cout<<endl;
}
void canhcau(){
	int i, j, k, u;
	for(int i=1; i<=n; i++){
		for(int u=0; u<List[i].size(); u++){
			j=List[i][u];
			List[i].erase(List[i].begin()+u);
			BFS(i);
			bool check=false;
			for(k=1; k<=n; k++) if(chuaxet[k]) check=true;
			if(check&&i<j) cout<<i<<" "<<j<<" ";
			List[i].insert(List[i].begin()+u, j);
			memset(chuaxet, true, sizeof(chuaxet));
		}
	}
}
main(){
	int t, x, y, i;
	cin>>t;
	while(t--){
		memset(chuaxet, true, sizeof(chuaxet));
		for(int i=0; i<1005; i++) List[i].clear();
		cin>>n>>m;
		for(int i=1; i<=m; i++){
			cin>>x>>y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		canhcau();
		cout<<endl;
	}
}
