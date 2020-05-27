#include<bits/stdc++.h>
using namespace std;
int x, d;
string s;
int KT(){
	if((x-1)*(d-1)<=s.size()-x) return 1;
	return -1;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>d>>s;
		int a[300]={0}; x=0;
		for(int i=0;i<s.size();i++){
			a[s[i]]++;
			if(a[s[i]]>x) x=a[s[i]];
		}
		cout<<KT()<<endl;
	}
}
