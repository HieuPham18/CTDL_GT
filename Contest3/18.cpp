#include<bits/stdc++.h>
using namespace std;
main(){
	int t,n; cin>>t;
	while(t--){
		cin>>n;
		int x=0,y=0;
		for(int i=0; i<=n/4; i++){
			if((n-4*i)%7==0){
				x=i; y=(n-4*i)/7;
				break;
			}
		}
		if(4*x+7*y!=n) cout<<-1<<endl;	
		else{
			for(int i=0; i<x; i++) cout<<4;
			for(int j=0; j<y; j++) cout<<7;
			cout<<endl;
		}
	}
}
