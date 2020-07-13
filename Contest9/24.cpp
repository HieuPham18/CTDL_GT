#include<bits/stdc++.h>
using namespace std;
int chuaxet[1005];
vector<int> List[1005];
bool check;
void BFS(int u){
	queue<int> q;
	q.push(u);
	chuaxet[u]=1;
	while(q.size()>0){
		int x=q.front(); q.pop();
		for(int i=0;i<List[x].size();i++){
			int y=List[x][i];
			if(chuaxet[y]==0){
				chuaxet[y]=1;
				q.push(y);
			}else if(chuaxet[y]==1) check=true;
		}
		chuaxet[x]=2;	
	}
}

void chutrinh(int x){
	check=false;
	for(int i=1;i<=x;i++){
		memset(chuaxet,0,sizeof(chuaxet));
		BFS(i);
		if(check){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}
main(){
	int t, x, m;
	cin>>t;
	while(t--){
		cin>>x>>m;
		for(int i=0; i<=x; i++) List[i].clear();
		for(int i=0; i<m; i++){
			int a, b; cin>>a>>b;
			List[a].push_back(b);
			List[b].push_back(a);
		}
		chutrinh(x);
	}
}
