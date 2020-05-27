#include<bits/stdc++.h>
using namespace std;
long long tinh(string s){
	long long F[15], kq=0;
	int n = s.length();
	F[0] = s[0] - '0'; kq=F[0];
	for(int i=1; i<n; i++){
		F[i] = F[i-1]*10 + (i+1)*(s[i]-'0');
		kq=kq+F[i];
	}
	return kq;
}
int main(){
	int t; cin>>t;
	string s;
	while(t--){
		cin>>s;
		cout<<tinh(s)<<endl;
	}
}
