#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, a[105]; cin>> t;
	while(t--){
		memset(a, 0, sizeof(a));
		cin>>n;
		for(int i=1; i<=n; i++){
			string s;
			cin>>s;
			for(int j=0; j<s.size(); j++){
				int x = s[j] - '0';
				if(!a[x]) a[x]=1;
			}
		}
		for(int i=0; i<10; i++)
			if(a[i]) cout<<i<<" ";
		cout<<endl;
	}
}
