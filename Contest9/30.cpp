#include<bits/stdc++.h>
using namespace std;
int m, n;
vector<int> List1[1005], List2[1005];

main(){
	int t, d, x, y, i;
	cin>>t;
	while(t--){
		for(int i=0; i<1005; i++) {
			List1[i].clear();
			List2[i].clear();
		}
		cin>>n>>m;
		for(int i=1; i<=m; i++){
			cin>>x>>y;
			List1[x].push_back(y);
			List2[y].push_back(x);
		}
		d=0; 
		for(int i=1; i<=n; i++)
			if(List1[i].size()==List2[i].size()) d++;
	
		if(d==n) cout<<1<<endl;
		else cout<<0<<endl;
	}
}
