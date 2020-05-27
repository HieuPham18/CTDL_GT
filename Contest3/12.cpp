#include<bits/stdc++.h>
#define max 10000
using namespace std;
int x;
string s;
int KT(){
	int a=s.size();
	if(x-1<=a-x) return 1;
	return -1;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>s;
		int a=s.size(), b[max]={0}; x=0;
		for(int i=0;i<s.size();i++){
			b[s[i]]++;
			if(x<b[s[i]]) x=b[s[i]];
		}
		cout<<KT()<<endl;
	}
}
