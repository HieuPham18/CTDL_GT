#include <iostream>
using namespace std;
int sum(int a[], int T, int P){
    if(T==P) return a[T];
    return a[T]+sum(a, T+1, P);
}
int main(){
	int test, a[100], n; cin>>test;
	while(test--){
	    cin>>n;
	    for (int i=0; i<n; ++i) cin>>a[i];
	    int max = a[0], maxS, imax = 0, jmax = 0;
		    for (int i=0; i<n; ++i){
		        for (int j=i; j<n; ++j){
		            if(i==0 && j==n-1) continue;
		            maxS = sum(a, i, j);
		            if(maxS > max) {
						max = maxS; imax = i; jmax = j;
					}
		        }
			}
		    cout<<max;
	}
}
