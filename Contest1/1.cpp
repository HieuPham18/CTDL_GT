#include<iostream>
using namespace std;
int main(){
	int t; string s;
	cin>>t;
	while(t--){
		cin>>s;
		int i=s.length()-1;
		while(i>=0&&s[i]=='1'){
			s[i]='0';i--;
		}
		if(i>=0) s[i]='1';
		cout<<s<<endl;
	}
}
