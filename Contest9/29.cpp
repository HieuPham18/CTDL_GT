#include<bits/stdc++.h>
using namespace std;
int m, n;
vector<int> List[1005];
int check(){
	int i, c, d=0; 
	for(int i=1; i<=n; i++){
		if(List[i].size()%2==1)
			d++;
	}
	if(d==0) return 2;
	if(d==2) return 1;
	return 0;
}
main(){
	int t, x, y, i;
	cin>>t;
	while(t--){
		for(int i=0; i<1005; i++) List[i].clear();
		cin>>n>>m;
		for(int i=1; i<=m; i++){
			cin>>x>>y;
			List[x].push_back(y);
			List[y].push_back(x);
		}
		cout<<check()<<endl;
	}
}
