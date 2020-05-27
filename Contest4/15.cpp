#include<bits/stdc++.h>
using namespace std;
int m,n,s,SoN;
int main(){
	int t; cin>>t;
	while(t--){
		cin>>n>>s>>m;
		if(s*m <= (s-s/7)*n){
			SoN=1;
			while(n*SoN < s*m){
				SoN++;
			}
			cout<<SoN<<endl;
		}
		else cout<<-1<<endl;
	}
}
