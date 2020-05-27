#include <iostream>
using namespace std;
int a[100],n,stop;
 	void nhap(){
	    for(int i=1; i<=n; i++){
 		 	cin>>a[i];
	    }	
    }
//	void init(){
//	    stop=0;
//	    for(int i=1;i<=n;i++)
//	        a[i]=i+1;
//	}
	void swap(int &a,int &b){
	    int c;c=a;a=b;b=c;
	}
	void output(){
	    for(int i=1;i<=n;i++)
	        cout << a[i];
	    cout << endl;
	}
	void generate(){
	    int i=n-2;
	    while(i>=0&&a[i]>a[i+1]) i--;
	    if(i<0) stop=1; 
	    else{
	        int k=n-1; 
	        while(a[k]<a[i]) k--;
	        swap(a[k],a[i]); 
	        int e=n-1,b=i+1;
	        while(e>b){
	            swap(a[e],a[b]);
	            b++;e--;
	        }
	    }
	}
int main(){
	int t; cin>>t;
	while(t--){
        cin>>n;
		nhap();
	    //init(); 
	    while(!stop){
	        output();
	        generate();
	    }
	}
}
