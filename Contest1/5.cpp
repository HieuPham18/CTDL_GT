#include<iostream>
using namespace std;
int n, k, a[15];
	
    void sinhTH(int &ok){
        int i=k;
	    while (i>0 && a[i]==n-k+i) i--;
  	  		  a[i]++;
	    if (i>0) {
	        for (int j=i+1; j<=n; j++) {
	            a[j]=a[i]+j-i;
	        }
	    } else ok=0;
	}
  	void output() {
	    for (int i = 1; i <= k; i++)
	        cout << a[i];
	        cout<<" ";
	}
	void khoitao (int ok) {
	    for (int i=1; i<=n; i++){
	        a[i]=i;
	    }
	    while(ok){
	    	output();
	    	sinhTH(ok);
		}
	}
int main(){
	int t, ok=1;
	cin>>t;
	while(t--){
		cin>>n>>k;
		khoitao(ok);
		cout<<endl;
	}	
}
