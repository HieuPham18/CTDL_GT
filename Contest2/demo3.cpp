#include<iostream>
//bai19
using namespace std;
int A[11] = {0}, n, t;
void In() {
	cout << "[";
	for (int i = 1; i <= n; i++) {
		cout << A[i];
		if (i != n) cout << " ";
	}
	cout << "]";
	if(n != 1) cout<< endl;
}
void Try(int i) {
	A[i] = A[i] + A[i + 1];
	if (i == n - 1) {
		n = n - 1;
		In();
		i = 0;
	}
	if( n != 1 ) Try(i + 1);
}
int main() {
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 1; i <= n; i++) cin>> A[i];
		In();
		Try(1);
		cout<<endl;
	}
	return 0;
}
