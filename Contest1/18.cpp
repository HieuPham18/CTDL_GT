#include<bits/stdc++.h>
using namespace std;
long long n,S,t[30],dem=0;
void nhap(){
	cin>>n>>S;
	for(int i=1;i<=n;i++)
		cin>>t[i];
}
int main(){
	nhap();
	sort(t+1,t+n+1);
	long long i=n;
	while(S>0){
		if(S>=t[i]){
			dem++;
			S-=t[i];
		}
		i--;
	}
	cout<<dem;
}
