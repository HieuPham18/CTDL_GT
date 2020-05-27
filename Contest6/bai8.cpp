#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;	cin>>t;
	while(t--) 
		long long n , m;	cin>>n>>m;
		long long x[n] , y[m];
		for(long long i = 1 ; i <= n ; i++) 
			cin>>x[i];
		for(long long i = 1 ; i <= m ; i++) 
			cin>>y[i];
		long long count = 0;
		for(long long i = 1 ; i <= n ; i++) {
			for(long long j = 1 ; j <= m ; j++) {
				if(x[i] > y[j])
					count++;	
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
}
