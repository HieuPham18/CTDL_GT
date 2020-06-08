#include<bits/stdc++.h>
using namespace std;

long long X[10005]={0};
long long SoNP(int n){
	vector<int> a;
	while(n){
		a.push_back(n%2);
		n/=2;
	}
	long long c=0;
	for(int i=a.size()-1; i>=0; i--){
		c=10*c+a[i];
	}
	return c;
}
void Init(int n){
	X[0]=0; X[1]=1;
	for(int i=2; i<=n; i++) X[i] = SoNP(i);
}
int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	Init(10000);
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		for(int i=1; i<=n; i++) cout<<X[i]<<" ";
		cout<<endl;
	}
}
