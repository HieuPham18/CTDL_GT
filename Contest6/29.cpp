#include<iostream>
using namespace std;
int main(){
	int n, a[105], dem;
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n-1;i++){
			cout<<"Buoc "<<i+1<<": ";
			for(int j=0;j<n-i-1;j++){
				if(a[j]>a[j+1])
					swap(a[j],a[j+1]);	
			}
		for(int k=0;k<n;k++) cout<<a[k]<<" ";
		cout<<endl;	
		dem=-1;
		for(int t=0;t<n;t++){
			if(a[t]<=a[t+1])
				dem++;
		}
		if(dem==n-1)
			break;	
		}	
}
