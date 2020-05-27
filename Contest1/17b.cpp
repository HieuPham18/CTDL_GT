#include<bits/stdc++.h>
using namespace std;
int a[505];
bool b[505];
void Next(){
	int dem=0;
	queue<int> q;
	q.push(9);
	while(dem<500){
		int t=q.front(); q.pop();
		for(int i=1;i<=500 && i<=t;i++)
			if(t%i==0 && !b[i]){
				b[i]=true;
				a[i]=t;
				dem++;
			}
		q.push(t*10);
		q.push(t*10+9);
	}
}
int main(){
	int t;
	cin>>t;
	Next();
	while(t--){
		int n;
		cin>>n;
		cout<<a[n];
		cout<<endl;
	}
}
