#include<bits/stdc++.h>
using namespace std;
vector<int> List[1005];
int chuaxet[1005];
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
void kiemtra(int v){
	for(int i=1;i<=v;i++){
		memset(chuaxet,0,sizeof(chuaxet));
		if(DFS(i)){
			cout<<"YES"<<endl;
			return;
		}
	}
	cout<<"NO"<<endl;
}

main(){
	int T,v,e;
	cin>>T;
	while(T--){
		cin>>v>>e;
		int a,b;
		for(int i=0;i<=v;i++) List[i].clear();
		for(int i=0;i<e;i++){
			cin>>a>>b;
			List[a].push_back(b);
		}
		kiemtra(v);
	}
}
