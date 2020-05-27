#include<iostream>
using namespace std;
int x[100], a[100];
int n,count,ok; 
	void khoitao(){
	    count=0;ok=0;
	    cin >> n;  
	    for(int i=1;i<=n;i++)
	        a[i]=x[i];
	}
	void nhap(){
		for(int i=1; i<=n; i++){
			cin>>x[i];
		}
	}
	void output(){
	    for(int i=0;i<n;i++)
	        cout << a[i];
			cout<<" ";
	}	 
	void sinhxauAB(){
	    int i=n-1;
	    while(i>=0 && a[i]==1)i--;
	    if(i<0) ok=1;
	    else{
	        a[i]=1;
	        for(int j=i+1;j<n;j++) 
	            a[j]=0;
	    }
	}
int main(){
	int t;
	cin>>t;
	while(t--){
        nhap();
        khoitao();
	    while(!ok){
	        output(); 
            sinhxauAB();
            break;
	    }
	    cout<<endl;
	}
}
