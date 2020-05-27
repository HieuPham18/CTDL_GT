#include<bits/stdc++.h>
using namespace std;
int a[1000005], b[1000005];
int main(){
	int t, n; cin>>t;
	while(t--){
		cin>>n;
		for(int i=1; i<=n; i++){cin>> a[i]; b[i]=a[i];}
		sort(b+1, b+1+n);
		int d=1, c=n;
		while(a[d]==b[d]) d++;
		while(a[c]==b[c]) c--;
		cout<<d<<" "<<c<<endl;
	}
}
