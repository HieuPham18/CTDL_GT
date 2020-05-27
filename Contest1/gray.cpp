#include<iostream>
#include<string>
#include<cmath>
using namespace std;

	void Doi_co_so(int a, int n) {
		int A[100], dem = 0;
		while (a != 0) {
			A[dem] = a % 2;
			dem++;
			a /= 2;
		}
		for (int i = 0; i < n - dem; i++) {
			cout << "0";
		}
		for (int j = dem - 1; j >= 0; j--) {
			cout << A[j];
		}
	}
	int Doi_so(string B) {
		int a = 0;
		for (int i = 0; i < B.length(); i++) {
			a = a + (B[i] - '0')*pow(2, B.length() - i - 1);
		}
		return a;
	}
int main() {
		int n;
//		cout << "Nhap n bit: ";
//		cin >> n;
		int k;
		cout << "Nhap so ma gray: ";
		cin >> k;
		int A[100];
		A[0] = 0;
		A[1] = 1;
		int p = 1;
		int m = 2;
//		for (int i = 2; i <= n; i++) {
//			p = p * 2;
//			int u = 2 * m - 1;
//			for (int j = m; j <= u; j++) {
//				A[j] = A[u - j] + p;
//			}
//			m = m * 2;
//		}
		string B;
		int C[100];
		for (int i = 1; i <= k; i++) {
			cin >> B;
			for (int j = 0; j < pow(2, n); j++) {
				if (Doi_so(B) == A[j]) {
					C[i] = j;
				}
			}
		}
		cout << "Chuyen doi sang ma nhi phan: \n";
		for (int i = 1; i <= k; i++) {
			Doi_co_so(C[i], n);
		}
}
