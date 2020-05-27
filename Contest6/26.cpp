#include<bits/stdc++.h>
using namespace std;
int n, a[105];
void Sx(){
	for(int i=1; i<n; i++){
		cout<<"Buoc "<<i<<": ";
		for(int j=i+1; j<=n; j++){
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}
		for(int k=1; k<=n; k++) cout<<a[k]<<" ";
		cout<<endl;
	}
}
int main(){
		cin>>n; 
		for(int i=1; i<=n; i++) cin>>a[i];
		Sx();
}
