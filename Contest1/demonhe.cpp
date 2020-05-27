#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    //int t; cin>>t;
    string s; cin >> s;
    sort(s.begin(), s.end());
    string res;
    do {
	        res += s;
	        res += '\n';
    } while(next_permutation(s.begin(), s.end()));
    cout << res;
}

