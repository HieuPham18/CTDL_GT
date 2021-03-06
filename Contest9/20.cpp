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
void dinhtru(){
	int i, u;
	for(int u=1; u<=n; u++){
		chuaxet[u] = false;
		if(u==1) BFS(2);
		else BFS(1);
		bool check=false;
		for(int i=1; i<=n; i++)
			if(chuaxet[i]) check=true;
			
		if(check) cout<<u<<" ";
		memset(chuaxet, true, sizeof(chuaxet));
	}
}
main(){
	int t, d, x, y, i;
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
		dinhtru();
		cout<<endl;
	}
}
