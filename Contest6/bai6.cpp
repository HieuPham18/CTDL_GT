#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;	cin>>t;
	while(t--) {
		long long n;	cin>>n;
		vector<long long> V;
		for(long long i = 1 ; i <= n ; i++) {
			long long x;
			cin>>x;
			V.push_back(x);
		}
		sort(V.begin() , V.end());
		for(long long i = 0 ; i < n ; i++)
			cout<<V.at(i)<<" ";
		cout<<endl;
	}
	
	return 0;
}
