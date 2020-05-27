#include<iostream>
#include<string>
using namespace std;
int n,stop=0;
string s,a;
	void khoitao(){
		for(int i=1;i<=n;i++)
			s[i]='0';
	}
	void sinhkt(){
		int i=n;
		while(s[i]=='1'){
			s[i]='0';i--;
		}
		if(i==0) stop=1;
		else s[i]='1';
	}
	void gray1(){
		a[1]=s[1];
		for(int i=2;i<=n;i++){
			if(s[i]!=s[i-1]) a[i]='1';
			else a[i]='0';
		}
	}
	void in(){
		for(int i=1;i<=n;i++)
			cout<<a[i];
		cout<<" ";
	}
int main(){
	int t;cin>>t;
	while(t--){
		stop=0;
		cin>>n;
		khoitao();
		while(!stop){
			gray1();
			in();
			sinhkt();
		}
		cout<<endl;
	}
}
