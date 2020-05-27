#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;	cin>>t;
	while(t--) {
		long long n , k;
		cin>>n>>k;
		long long a[n];
		for(int i = 1 ; i <= n ; i++)
			cin>>a[i];
		long long count = 0;
		for(long long i = 1 ; i <= n - 1 ; i++) {
			for(long long j = i + 1 ; j <= n ; j++) {
				if(a[i] + a[j] == k)
					count++;
			}
		}
		cout<<count<<endl;
	}
	
	return 0;
}
