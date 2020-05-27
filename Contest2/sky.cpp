#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int t; cin>>t;
	while(t--){
	    ios::sync_with_stdio(false);
	    string s; cin >> s;
	    sort(s.begin(),s.end());
	    string hv;
	    do {
	        hv += s;
	        hv += ' ';
	    } while(next_permutation(s.begin(), s.end()));
	    cout<<hv;
	    cout<<endl;
	}
}
