#include<bits/stdc++.h>
using namespace std;

bool chuaxet[1005];
vector<int> List[1005];
int n, m;
bool BFS(int u){
	queue<int> q; q.push(u);
	chuaxet[u]=false;
	while(!q.empty()){
		int x=q.front(); q.pop();
		for(int i=0; i<List[x].size(); i++){
			int y=List[x][i];
			if(chuaxet[y]==true){
				q.push(y);
				chuaxet[y]=false;
			}
			else if(y==u) return true;
		}
	}
	return false;
}
void chutrinh(){
	for(int i=1; i<=n; i++){
		memset(chuaxet, true, sizeof(chuaxet));
		if(BFS(i)){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}
main(){
	int t, x, y, i;
	cin>>t;
	while(t--){
		//memset(chuaxet, true, sizeof(chuaxet));
		for(int i=0; i<1005; i++) List[i].clear();
		cin>>n>>m;
		for(int i=1; i<=m; i++){
			cin>>x>>y;
			List[x].push_back(y);
			//List[y].push_back(x);
		}
		chutrinh();
	}
}
