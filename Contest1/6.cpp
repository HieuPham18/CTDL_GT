#include<iostream>
using namespace std;
 
int n, a[10], Bool[10]={0};
	void xuat() {
	    for (int i = 1; i <= n; i++)
	        cout << a[i];
	}
	void Try(int k) {
	    for (int i = 1; i <= n; i++) {
	        if (!Bool[i]) {
	            a[k] = i; 
	            Bool[i] = 1;
	            if (k == n)
	                xuat();
	            else
	                Try(k + 1);
	            Bool[i] = 0;
	        }
	    }
	cout<<" ";
	}
	 
int main() {
	int t;
	cin>>t;
	while(t--){
	 	cin >> n;
	    Try(1);
	    cout<<endl;
	}	
}
