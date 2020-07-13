#include<bits/stdc++.h>
using namespace std;
bool chuaxet[1005];
vector<int> List[1005];
int truoc[1005], n,m,u,v;

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
				truoc[y] = x;
				q.push(y);
				chuaxet[y]=false;
				//cout<<y<<" ";
			}
		}
	}
	//cout<<endl;
}
void induongdi(){
    stack <int> st;
    st.push(v);
    while(st.top()!=u){
        int t=st.top();
        st.push(truoc[t]);
    }
    while(!st.empty()){
        int t=st.top();st.pop();
        cout<<t<<" ";
    }
    cout<<endl;
}

main(){
	int t,i,x,y;
	cin>>t;
	while(t--){
		for(i=0; i<1005; i++)	List[i].clear();
		memset(chuaxet, true, sizeof(chuaxet));
		memset(truoc, 0, sizeof(truoc));
		cin>>n>>m>>u>>v;
		for(i=0; i<m; i++){
			cin>>x>>y;
			List[x].push_back(y);
			//List[y].push_back(x);
		}
		BFS(u);
		if(chuaxet[v]==true) cout<<-1<<endl;
		else induongdi();
	}
}
