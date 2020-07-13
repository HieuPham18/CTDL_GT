#include<bits/stdc++.h>
using namespace std;
int dx[]={0,0,1,1,1,-1,-1,-1};
int dy[]={-1,1,-1,0,1,-1,0,1};
bool chuaxet[505][505];
int a[505][505];
void BFS(int u,int v){
	queue<pair<int,int> > q;
	pair<int,int> t,tmp;
	tmp.first = u; tmp.second = v;
	q.push(tmp);
	chuaxet[u][v]=false;
	while(!q.empty()){
		t=q.front(); q.pop();
		for(int i=0;i<8;i++){
			int x=t.first+dx[i];
			int y=t.second+dy[i];
			if(chuaxet[x][y] && a[x][y]==1){
				chuaxet[x][y]=false;
				tmp.first = x; tmp.second = y;
				q.push(tmp);
			}
		}
	}
}

main(){
	int t,n,m,d,i,j;
	cin>>t;
	while(t--){
		memset(chuaxet,true,sizeof(chuaxet));
		d=0;
		cin>>n>>m;

		for(i=1;i<=n;i++) for(j=1;j<=m;j++) cin>>a[i][j];

		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				if(a[i][j]==1 && chuaxet[i][j]){
					BFS(i,j);
					d++;
				}

		cout<<d<<endl;
	}
}
