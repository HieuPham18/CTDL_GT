#include<iostream>
using namespace std;
char a[10];
int n,count,ok; 
	void khoitao(){
	    count=0;ok=0;
	    cin >> n; 
	    for(int i=0;i<n;i++)
	        a[i]='A';
	}
	void output(){
	    for(int i=0;i<n;i++)
	        cout << a[i];
			cout<<" ";
	}	 
	void sinhxauAB(){
	    int i=n-1;
	    while(i>=0 && a[i]=='B')i--;
	    if(i<0) ok=1;
	    else{
	        a[i]='B';
	        for(int j=i+1;j<n;j++) 
	            a[j]='A';
	    }
	}
int main(){
	int t;
	cin>>t;
	while(t--){
		khoitao();
	    while(!ok){
	        output(); 
	       sinhxauAB();
	    }
	    cout<<endl;
	}
}
