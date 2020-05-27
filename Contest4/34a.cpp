#include <bits/stdc++.h>
using namespace std;	
long long P[100],Q[100],T[200];
int m,n,k;
main (){	
	int t; cin>>t;
	while (t--){
		cin>>m>>n;
		for (int i=0;i<m;i++) cin>>P[i];
		for (int i=0;i<n;i++) cin>>Q[i];
		for (int i=0;i<m+n-1;i++) T[i]=0;
		k=0;
		while (k<=n){
			for (int j=0;j<m;j++) T[j+k]+=P[j]*Q[k];
			k++;
		}
		for (int i=0;i<m+k-2;i++) cout<<T[i]<<" ";
		cout << endl;
	}
}
