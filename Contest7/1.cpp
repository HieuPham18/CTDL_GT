#include<bits/stdc++.h>
using namespace std;
int a[205], b=0;
int main(){
	int n; string s;
	while(cin>>s){
		if(s == "push"){
			cin>>n;
			a[b++] = n;
		}
		if(s == "pop") b--;
		if(s == "show"){
			if(b==0) cout<<"empty";
			else for(int i=0; i<b; i++) cout<<a[i]<<" ";
			cout<<endl;
		}
	}
}
