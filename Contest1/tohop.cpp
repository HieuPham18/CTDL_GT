
#include <iostream>
 
using namespace std;
 
int k , n ;
int a[100000] ;
	void printResult() {
	    for(int i =1 ; i <=k ; i++) {
	        cout<<a[i]<<" " ;
	     }
	     cout<<endl ;
	}
	void sinh() {
	    for(int i =1 ; i <=k ; i++) {
	        a[i] =1 ;
	    }
	    printResult() ;
	     int j = k ;
	    while(a[1]<n) {
	        if(a[j]==n) {
	            j-- ;
	        }
	        a[j]++ ;
	        printResult() ;
	    }
	}
 
int main(){
	int t;
	cin>>t;
	while(t--){
    cin>>k>>n ;
    sinh();
	}
}
