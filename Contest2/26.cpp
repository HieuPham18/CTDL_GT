#include<bits/stdc++.h>
using namespace std;
int k;
string s, kq;
	void Try(string s, int k){
		if(k==0) return;
		for(int i=0; i<s.length(); i++){
				for(int j=i+1; j<s.length(); j++){
				if(s[i]<s[j]){
					swap(s[i], s[j]);
					kq=max(kq, s);
					Try(s, k-1);
					swap(s[i], s[j]);
				}
			}
		}
	}
int main(){
	int t; cin>>t;
	while(t--){
		s=""; kq="";
		cin>>k>>s;
		kq=s;
		Try(s,k);
		cout<<kq<<endl;
	}
}
