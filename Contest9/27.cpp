#include<bits/stdc++.h>

using namespace std;
int m, n, u;
bool chuaxet[1005];
vector<int> List[1005];
bool DFS(int u){
	stack<int> st;
	st.push(u);
	chuaxet[u]=1;
	while(st.size()>0){
		int t=st.top(); st.pop();
		for(int i=0;i<List[t].size();i++){
			if(chuaxet[List[t][i]]==0){
				chuaxet[List[t][i]]=1;
				st.push(List[t][i]);
			}else if(List[t][i]==u) return true;
		}	
	}
	return false;
}
//int v=list
void chutrinh(){
	for(int i=1; i<=n; i++){
		memset(chuaxet, false, sizeof(chuaxet));
		if(DFS(i)){
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
		cin>>n>>m;
		for(int i=0; i<=n; i++) List[i].clear();
		for(int i=0; i<m; i++){
			cin>>x>>y;
			List[x].push_back(y);
			//List[y].push_back(x);
		}
		chutrinh();
	}
}
