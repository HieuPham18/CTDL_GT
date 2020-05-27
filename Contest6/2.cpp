#include<bits/stdc++.h>
using namespace std;

int main(){
	int t, n, x, a[10003]; cin>>t;
	while(t--){
		cin>>n>>x;
		for(int i=1; i<=n; i++) cin>>a[i];
		for(int i=1; i<=n; i++){
			int key =a[i], val = abs(a[i]-x);
			int j=i-1;
			while(j>0 && abs(a[j]-x) > val){
				a[j+1]=a[j];
				j--;
			}
			a[j+1] = key;
		}
		for(int i=1; i<=n; i++) cout<<a[i]<<" ";
		cout<<endl;
	}
}
