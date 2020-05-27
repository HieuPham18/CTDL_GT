#include<iostream>
#include<string>
using namespace std;
int n, a[20], b[20];
string s;
void in(){
	for(int i=1; i<=n; i++) cout<<s[a[i]-1];
	cout<<" ";
}
void Try(int i){
	for(int j=1; j<=n; j++){
		if(b[j]==0){
			a[i]=j; b[j]=1;
			if(i==n) in();
			else Try(i+1);
			b[j]=0;
		}
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>s;
		n=s.length();
		Try(1);
		cout<<endl;
	}
}
